#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, odd_count=0;
        cin >> n;
        for(int i = 0; i<n ; i++)
        {
            int temp;
            cin >> temp;
            if(temp%2!=0) odd_count++;
        }
        if(odd_count%2!=0) odd_count--;
        cout << odd_count/2 << endl;
    }
}
