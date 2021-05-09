#include<bits/stdc++.h>

using namespace std;

int main()
{

vector<vector<int>> output;
vector<int> input;
int row,coloum,value;
cin>>row;
for (int i = 0; i < row; i++)
{
    
    cin>>coloum;
    for (int j = 0; j < coloum; j++)   // 1 2 3                                  // 4 5 6
    {
        cin>>value;
        input.push_back(value);
    }
    output.push_back(input);  
}

for (int i = 0; i < output.size(); i++)
{
    for (int j = 0; j < output[i].size(); j++)
    {
        cout<<output[i][j];
    }
    cout<<endl;   
}
for (int i = 0; i < input.size(); i++)
{
    cout<<input[i]<<endl;
}






return 0;
}
