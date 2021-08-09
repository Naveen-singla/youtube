#include<bits/stdc++.h>

using namespace std;

int main()
{

int query;
cin >> query;
while(query--)
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    vector<int> bitarry(31,0);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int f=0;
        while (arr[i]!=0)
        {
            int k=0;
            k=arr[i]>>1;
            arr[i]=arr[i]>>1;
            if(k==1)
            {
                bitarry[f]+=1;
            }
            f++;
        }
        
    }
    for (int  i = 0; i < 32; i++)
    {
       cout << bitarry[i] <<"\n";
    }
    
    
}

return 0;
}
