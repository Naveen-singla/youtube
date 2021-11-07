#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t; // this is for test case
    while(t--)
    {
        int a, b, x, y, k, pet = 0, des = 0;
        cin >> a >> b >> x >> y >> k;
        pet = ((x*k)+a);
        des = ((y*k)+b);
        if(pet < des) cout << "PETROL\n";
        else if(des < pet) cout << "DIESEL\n";
        else cout << "SAME PRICE\n";
    }
}
