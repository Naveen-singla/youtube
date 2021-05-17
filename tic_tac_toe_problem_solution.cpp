#include<iostream>

using namespace std;

int main()
{
	int query;
	cin >> query ;
	while(query--)
	{
		char board[3][3];
		int cx=0,co=0,c_=0,win_x=0,win_o=0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				char temp;
				cin >> board[i][j];
				temp = board[i][j];
				if(temp=='X') cx++;
				else if(temp=='O') co++;
				else if(temp=='_') c_++;// yes we can write if else statement like this if we have only 1 output line
			}
			
		}
		
		if(board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X') win_x++; //for row 1
		if(board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X') win_x++; //for row 2
		if(board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X') win_x++; //for row 3
		if(board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X') win_x++; //for col 1
		if(board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X') win_x++; //for col 2
		if(board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X') win_x++; //for col 3
		if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X') win_x++; // diagonal 1
		if(board[2][0]=='X' && board[1][1]=='X' && board[0][2]=='X') win_x++; // diagonal 2


		if(board[0][0]=='O' && board[0][1]=='O' && board[0][2]=='O') win_o++; //for row 1
		if(board[1][0]=='O' && board[1][1]=='O' && board[1][2]=='O') win_o++; //for row 2
		if(board[2][0]=='O' && board[2][1]=='O' && board[2][2]=='O') win_o++; //for row 3
		if(board[0][0]=='O' && board[1][0]=='O' && board[2][0]=='O') win_o++; //for col 1
		if(board[0][1]=='O' && board[1][1]=='O' && board[2][1]=='O') win_o++; //for col 2
		if(board[0][2]=='O' && board[1][2]=='O' && board[2][2]=='O') win_o++; //for col 3
		if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O') win_o++; // diagonal 1
		if(board[2][0]=='O' && board[1][1]=='O' && board[0][2]=='O') win_o++; // diagonal 2

		if((win_o==1 && win_x==1) || (co>cx) || cx-co>1) cout << "3" <<"\n";
		else if(win_o==1 && win_x==0 && co==cx) cout << "1" << "\n";
		else if(win_x==1 && win_o==0 && co<cx) cout << "1" << "\n";
		else if(win_x==2 && c_==0) cout << "1" << "\n"; // this is the special case so be ware of it
		else if( (win_x+ win_o==0) && c_==0) cout << "1" <<"\n"; // this is the draw case
		else if( (win_x + win_o==0) && c_>0 ) cout << "2" << "\n";
		else cout << "3" << "\n";

		
	}
}