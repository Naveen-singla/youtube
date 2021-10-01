Set (Xi,Yi)=(Xi+K,Yi)
Set (Xi,Yi)=(Xi,Yi+K)
Set (Xi,Yi)=(Xi+K,Yi+K)
Set (Xi,Yi)=(Xi+K,Yi−K)

2
3
0 1 -4
0 1 5
3
0 1 3
1 1 -1

Test case 1 :

In the first operation, you choose i=2, and K=−1 and apply the third type of operation. So the location of 2nd point becomes (1−1,1−1)=(0,0).

In the second operation, you choose i=3, and K=4 and apply the first type of operation. So the location of 3rd point becomes (−4+4,5)=(0,5).

In the third operation, you choose i=3, and K=−5 and apply the second type of operation. So the location of 3rd point becomes (0,5−5)=(0,0).

Hence after the above operations, the location of the given three points becomes equal to each other.

Test case 2 :

In the first operation, you choose i=1 and K=1 and apply the first type of operation. So the location of 1st point becomes (0+1,1)=(1,1).

In the second operation, you choose i=3, and K=−2 and apply the fourth type of operation. So the location of 3rd point becomes (3−2,−1−(−2))=(1,1).

Hence after the above operations, the location of the given three points becomes equal to each other.

0 1 -4
0 1  5

#include<iostream>

using namespace std;

int main()
{

int query;
cin >> query;
while (query--)
{
    int n;
    cin >> n;
    int xi[n],yi[n];
    for (int i = 0; i < n; i++)
    {
        cin >> xi[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> yi[i];
    }
    
    
    
}


return 0;
}
