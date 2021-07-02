#include<iostream>
#include<algorithm>

using namespace std;

int main()
{

int query;
cin >> query;
while(query--)
{
    int x,d,y,z;
    int first_method;// for storing the result 
    int second_method;// for storing the second result
    cin >> d >> x >> y >> z;
    first_method = x*7;
    second_method = ((y*d)+(7-d)*z);
    int result = max(first_method,second_method);// this function is used for comparison for eg a is > b or not and it return the greater element 
    cout << result << "\n";
}

    return 0;
}
