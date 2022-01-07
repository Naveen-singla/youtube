#include<iostream>

using namespace std;

int main()
{

int t;
cin >> t;
while (t--)
{
    string s;
    bool flag = false;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1' && (s[i+1]=='1' || s[i+1]=='0'))
        {
            flag = true;
            cout << "YES\n";
            break;
        }
    }
    if(flag == false) cout << "NO\n";
    
}


return 0;
}
