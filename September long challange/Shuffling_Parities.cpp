#include<iostream>

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); // these are just for fast input output
cout.tie(NULL);

int query;
cin >> query;
while (query--)
{
    long long int n, odd_num=1, even_num=0, sum=0;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    while (true)
    {
      while(odd_num<n && (arr[odd_num]%2)==1) odd_num+=2;  // this is because if there is any even number on odd place
      while(even_num<n && (arr[even_num]%2)==0) even_num+=2;// this is because if there is any odd number on even place
      if(odd_num<n && even_num<n) swap(arr[odd_num],arr[even_num]); // if there are such any numbers then swap 
      else break; 
    }
    
    for (int i = 0; i < n; i++)
    {
        sum += ((arr[i]+1+i)%2);
    }
    cout << sum << endl;
}



return 0;
}
