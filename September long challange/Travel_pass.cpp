#include<iostream>

using namespace std;

int main()
{

int t;
cin >>t;
while(t--){

    int n, des_prc, state_prc, des_coutn = 0, state_coutn = 0,sum;
    string str;
    cin >> n >> des_prc >> state_prc;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='0') des_coutn++;
        else state_coutn++;
    }
    sum = ((des_coutn*des_prc) + (state_coutn*state_prc));
    cout << sum << "\n";
}

return 0;
}

