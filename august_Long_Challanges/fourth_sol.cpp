#include<bits/stdc++.h>

using namespace std;

int main()
{

int query;
cin >> query;
while(query--)
{
    int n;
    cin >> n;
    int result = 0;
    for (int c = 1; c <= n; c++){
        for (int b = c; b <= n; b+=c){ 
            for (int a = c; a <= n ; a+=b){
               if(a%b==c && b%c ==0)
               {
                   result++;
               }
            }
            
        }
        
    }
    cout << result << endl; 
}

return 0;
}
