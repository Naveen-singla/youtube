#include<iostream>
#include<cmath>

using namespace std;

int main()
{

int t;
cin >> t;
while (t--)
{
    int n, sum , near_n, behind_near_n, temp = 1 ;
    cin >> n; 
    for (int i = 0; i < 32; i++)
    {
        sum = temp<<i;
        if(sum > n) break;
        else
        {
            near_n = i;
            behind_near_n = i-1;
        }
    }
    int sum_1 = pow(2,near_n);
    int sum_2 = pow(2,behind_near_n);
    
    if(n-(sum_1-1) > sum_1-sum_2) cout << n-(sum_1-1) << endl;
    else cout << sum_1 - sum_2 << endl;
}

return 0;
}


