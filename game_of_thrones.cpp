#include<bits/stdc++.h>

using namespace std;

int main()
{                                       //aaabb
int count=0;
string str;
unordered_map<char,int> got;
cin >> str;
for(auto x : str)
{
    got[x]= got[x] + 1;
}
for(auto i : got)
{
 if(i.second%2 == 1)
 {
    count++;
    if (count>=2)
    {
        break;
    }  
 }
}
if (count>1)
{
    cout << "NO";
}
else
{
    cout << "YES";
}



return 0;
}
