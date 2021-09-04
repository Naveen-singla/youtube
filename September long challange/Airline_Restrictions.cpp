#include<iostream>

using namespace std;

int main()
{

int query;
cin >> query;
while (query--)
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if((a+b<=d) && c<=e) cout << "YES\n";
    else if((c+b<=d) && a<=e) cout << "YES\n";
    else if((a+c<=d) && b<=e) cout << "YES\n";
    else cout << "NO\n";
}


return 0;
}


