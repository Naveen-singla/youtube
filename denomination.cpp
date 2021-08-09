#include<iostream>
#include<climits>

using namespace std;

int main()
{

unsigned int query;
cin >> query;
while (query--)
{
    unsigned int n;
    long int max = INT_MIN;
    int min = INT_MAX;
    long long int sum = 0;
    cin >> n;
    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]>max)
        {
         max = arr[i];
        }
        if(arr[i]<min)
         min = arr[i];
    }
    if (min!=max)
    {
        for (int i = 0; i < n; i++)
    {
        if (arr[i]==max)
        {
            arr[i]=min;
        }     
    }
    }
    
    for (int i = 0; i < n; i++)
    {
        sum+=(arr[i]/min);
    }
    cout << sum << "\n";
}


return 0;
}