#include<iostream>

using namespace std;

int main()
{

int t;
cin >> t;
while (t--)
{
    float t1,t2,r1,r2,ans1,ans2;
    cin >> t1 >> t2 >> r1 >> r2;
    ans1 = ((t1*t1)/(r1*r1*r1));
    ans2 = ((t2*t2)/(r2*r2*r2));
    if(ans1==ans2) cout << "YES\n";
    else cout << "NO\n";
}


return 0;
}
