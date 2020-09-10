#include <iostream>
using namespace std;
bool solveNQueen(int board[N][N], int col) {
if (col>= N)
 return true;
for (int i=0; i<N; i++)
if (isValid (board, i, col +1) {
board [i][col]=1;
if (solveNQueen(board, col+1))
return true;
board [i][col]=0;
}
}
return false;
}
bool checkSolution () {
int board [N][N];
for(int i=0; i<N; i++)
for(int j=0; j<N; j++)
board[i][j]=0;
if(solveNQueen(board,0)==false) {
cout<<"solution does not exist";
return false;
}
printBoard(board);
return true;
}

