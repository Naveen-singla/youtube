#include<iostream>

using namespace std;

int main()
{

int t;
cin >> t;
while (t--)
{
    int a, b;
    cin >> a >> b;
    if(a > 0 && b > 0) cout << "Solution" << endl;
    else if(a == 0) cout << "Liquid" << endl;
    else if(b == 0) cout << "Solid" << endl;
}


return 0;
}
