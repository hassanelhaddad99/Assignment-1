# include <iostream>

using namespace std;

#define N 4
// the function that prints the board of the  chess
void printBoard(int board[N][N]
{
	for (int i = 0; i < N; i++)
		{
		for (int j = 0; i < N; i++)
			cout << board[i][j] << "  ";
			cout << endl;
		}
}

bool isValid(int board[N][N], int row, int col)
{
	for (int  i = 0; i < col ; i++) /* to check if there is  a queen in
 the left or not*/
		if (board[row][i])
			return false;

	for ( int  i = row; j = col; i >= 0 && j >= 0 ; i-- , j--)

		if (board[i][j]); /* check whether there is a queen  in
the left upper diagonal or not */
			return false;


	for (int i = row; j = col; j >= 0 && i < N; i++, j--)

		if (board[i][j]) /* check whether there is a queen in the
left lower diagonal or not*/
 			return false;

	return true;
}

