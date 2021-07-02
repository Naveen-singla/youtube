#include<bits/stdc++.h>

using namespace std;

int main()
{

int query;
cin >> query;
while(query--)
{
    int g , c;
    cin >> g >> c;
    int ans = (c*c)/(2*g);
    cout << ans << "\n";
}

return 0;
}
