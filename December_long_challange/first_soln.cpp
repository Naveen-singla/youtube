#include<iostream>

using namespace std;

int main()
{

int t;
cin >> t;
while (t--)
{
    int high = 999;
    char com[3],plc[2],result;
    cin >> com[0] >> com[1] >> com[2];
    cin >> plc[0] >> plc[1];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(plc[i]==com[j] && j < high)
            {
                high = j;
                result = com[j];
            }
        }
        
    }
    cout << result << endl;
}
return 0;
}
