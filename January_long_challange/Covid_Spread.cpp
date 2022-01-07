#include<iostream>

using namespace std;

int main()
{

int t;
cin >> t;
while(t--)
{
    int n,days;
    long long int sum=1;
    cin >> n >> days;
    for (int i = 1; i <= days; i++)
    {
        if (i<=10)
        {
            sum*=2;
            if(sum>n)
            {
                sum = n;
                break;
            }
        }
        else
        {
            sum*=3;
            if(sum>n)
            {
                sum = n;
                break;
            }
        }
        
    }
    cout << sum << endl;
}

return 0;
}
