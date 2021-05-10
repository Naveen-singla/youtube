
#include<iostream>
#include<cmath>
using namespace std;

int power( long long x, unsigned int y, int p)
{
    int res = 1;
 
    while (y)
    {
        if (y & 1)// if y is odd
            res = (res*x) % p;
        y = y>>1; // dividing by 2
        x = (x*x) % p;
    }
    return res;
}

int main()
{
	int query;
	cin >> query;
	while(query--)
	{
		unsigned int y,final;
        long long x=2;
        int p=1000000007;
        unsigned int result;
	    float ans;
		cin >> y;
		result=power(2,y-1,p);
        cout << result << endl;
	}
}