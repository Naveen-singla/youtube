#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int query;
    cin >> query;
    while (query--)
    {
        char board[3][3];
        int cX = 0, cO = 0, c_ = 0,win_X = 0, win_O = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char temp;
                cin >> board[i][j];
                temp = board[i][j];
                if (temp == 'X') cX++;
                else if (temp == 'O') cO++;
                else if( temp == '_') c_++;
            }
        }
            if((board[0][0]== 'X') && (board[0][1] == 'X') && (board[0][2] == 'X')) win_X++; 
            if((board[1][0]== 'X') && (board[1][1] == 'X') && (board[1][2] == 'X')) win_X++; 
            if((board[2][0]== 'X') && (board[2][1] == 'X') && (board[2][2] == 'X')) win_X++; 
            if((board[0][0]== 'X') && (board[1][0] == 'X') && (board[2][0] == 'X')) win_X++; 
            if((board[0][1]== 'X') && (board[1][1] == 'X') && (board[2][1] == 'X')) win_X++; 
            if((board[0][2]== 'X') && (board[1][2] == 'X') && (board[2][2] == 'X')) win_X++; 
            if((board[0][0]== 'X') && (board[1][1] == 'X') && (board[2][2] == 'X')) win_X++; 
            if((board[2][0]== 'X') && (board[1][1] == 'X') && (board[0][2] == 'X')) win_X++; 


            if((board[0][0]== 'O') && (board[0][1] == 'O') && (board[0][2] == 'O')) win_O++; 
            if((board[1][0]== 'O') && (board[1][1] == 'O') && (board[1][2] == 'O')) win_O++; 
            if((board[2][0]== 'O') && (board[2][1] == 'O') && (board[2][2] == 'O')) win_O++; 
            if((board[0][0]== 'O') && (board[1][0] == 'O') && (board[2][0] == 'O')) win_O++; 
            if((board[0][1]== 'O') && (board[1][1] == 'O') && (board[2][1] == 'O')) win_O++; 
            if((board[0][2]== 'O') && (board[1][2] == 'O') && (board[2][2] == 'O')) win_O++; 
            if((board[0][0]== 'O') && (board[1][1] == 'O') && (board[2][2] == 'O')) win_O++; 
            if((board[2][0]== 'O') && (board[1][1] == 'O') && (board[0][2] == 'O')) win_O++; 
              
                  
             if(cO>cX) cout << 3 << "\n";
            else if(cX-cO>1) cout << 3 << "\n";
            else if(cX>cO && win_X==1 && win_O==0) cout << 1 << "\n";
            else if((cX==cO) && win_O==1 && win_X==0) cout << 1 << "\n";
            else if(c_==0 && (win_O+win_X==0)) cout << 1 << "\n";
            else if(c_==0 && win_X==2) cout << 1 << "\n";
            else if (c_>0 && (win_X+win_O==0)) cout << 2 << "\n";
            else cout << 3 << "\n";

             
        }
    return 0;
}