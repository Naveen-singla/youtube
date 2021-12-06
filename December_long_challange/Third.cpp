#include<iostream>
#include<string>

using namespace std;

int main()
{

int t;
cin >> t;
while (t--)
{
    int n,m;
    string s;
    cin >> n >> m;
    if(n>m)
    {
        n = n-m;
        while (m!=0)
        {
            s += "01";
            m--;
        }
        while (n!=0)
        {
            s += "010";
            n--;
        }   
    }
    else if(m>n)
    {
        m = m-n;
        while (n!=0)
        {
            s+= "10";
            n--;
        }
        while (m!=0)
        {
            s += "101";
            m--;
        }   
    }
    else
    {
        while (n+1!=0)
        {
            s += "01";
            n--;
        }
        
    }
    
    cout << s.size() << endl;
    cout << s << endl;
}


return 0;
}
