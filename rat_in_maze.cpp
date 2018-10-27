#include<iostream>
using namespace std;

void ratInMaze(char maze[][10],int sol[][10],int i,int j,int m,int n){
	//Base Case
	if(i==m-1 && j==n-1){
		//Print the Grid
		sol[i][j]=1;
		for(int x=0;x<m;x++){
			for(int y=0;y<n;y++){
				cout<<maze[x][y]<<" ";
			}
			cout<<endl;
		}
		sol[i][j]=0;
		cout<<endl;
		return;
	}

	//Out of the grid
	if(i>m-1 || j>n-1 || maze[i][j]=='X'){
		return;
	}

	//Recursive Case
	sol[i][j]=1;
	ratInMaze(maze,sol,i,j+1,m,n);
	ratInMaze(maze,sol,i+1,j,m,n);
	sol[i][j]=0;
}

int main(int argc, char const *argv[])
{
	char maze[][10] = {
		{"0000"},
		{"00X0"},
		{"00XX"},
		{"000X"},
		{"X000"}
	};

	int sol[10][10] = {0};
	ratInMaze(maze,sol,0,0,5,4);

	return 0;
}