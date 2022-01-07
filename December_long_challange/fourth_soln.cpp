#include<iostream>
#include<cmath>

using namespace std;

int main()
{

int t;
cin >> t;
while (t--)
{
    int kx,ky,x1,y1,x2,y2;
    string ans = "NO";
    cin >> kx >> ky >> x1 >> y1 >> x2 >> y2;
    if(!(kx == 1 || kx == 8 || ky == 1 || ky == 8)) ans = "NO";
    else
    {
        if(kx == 1)
        {
            if((x1==2 || x2 == 2) && y1!=y2)
            {
                if(std::abs(ky-y1)>1 && std::abs(ky-y2)>1)
                {
                    ans = "YES";
                }
            }
        }
        else if(kx == 8)
        {
            if((x1==7 || x2 == 7) && y1!=y2)
            {
                if(std::abs(ky-y1)>1 && std::abs(ky-y2)>1)
                {
                    ans = "YES";
                }
            }
        }
        if(ky == 1)
        {
            if((y1==2 || y2 == 2) && x1!=x2)
            {
                if(std::abs(kx-x1)>1 && std::abs(kx-x2)>1)
                {
                    ans = "YES";
                }
            }
        }
        else if(ky == 8)
        {
            if((y1==7 || y2 == 7) && x1!=x2)
            {
                if(std::abs(kx-x1)>1 && std::abs(kx-x2)>1)
                {
                    ans = "YES";
                }
            }
        }
    }
    cout << ans << endl;
}


return 0;
}
