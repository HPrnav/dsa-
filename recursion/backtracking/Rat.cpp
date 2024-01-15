#include <iostream>
#include<vector>
using namespace std;

bool ispossible(int row,int col,int newx,int newy,int maze[][4],vector<vector<bool>>&presenty){
    if((newx<row&&newx>=0)&&
    (newy<col&&newy>=0)&&
    presenty[newx][newy]==false &&
    maze[newx][newy]==1){
      return true ;
    }else{
        return false;
    }
}

void  solve( int maze[][4], int row, int col, int posx, int posy, string &output, vector<vector<bool>> &presenty){
     if(posx==row-1 &&posy==col-1){
         cout<<output<<endl;
        return;
     }

     //up
     int newx = posx-1;
     int newy=posy;
     if(ispossible(row,col,newx,newy,maze,presenty)){
        presenty[newx][newy]=true;
        output.push_back('U');
        solve(maze,row,col,newx,newy,output,presenty);
        output.pop_back();
        presenty[newx][newy] = false;
     }
     //down
     newx = posx+1;
     newy=posy;
     if(ispossible(row,col,newx,newy,maze,presenty)){
        presenty[newx][newy]=true;
        output.push_back('D');
        solve(maze,row,col,newx,newy,output,presenty);
        output.pop_back();
        presenty[newx][newy] = false;
     }
      //right
     newx = posx;
     newy=posy+1;
     if(ispossible(row,col,newx,newy,maze,presenty)){
        presenty[newx][newy]=true;
        output.push_back('R');
        solve(maze,row,col,newx,newy,output,presenty);
        output.pop_back();
        presenty[newx][newy] = false;
      }

     //left
     newx = posx;
     newy=posy-1;
     if(ispossible(row,col,newx,newy,maze,presenty)){
        presenty[newx][newy]=true;
        output.push_back('L');
        solve(maze,row,col,newx,newy,output,presenty);
        output.pop_back();
        presenty[newx][newy] = false;
     }
}


int main(){
    int maze[4][4] = {
	{1,0,0,0},
	{1,1,0,0},
	{1,1,1,0},
	{1,1,1,1}
	};

	int row = 4;
	int col = 4;
	int posx = 0;
	int posy = 0;
    string output="";
	vector<vector<bool > > presenty(row, vector<bool>(col, false));

    presenty[posx][posy]=true;
    solve(maze,row,col,posx,posy,output,presenty);
    return 0;
}