#include<bits/stdc++.h>

using namespace std;

int chefInvention(long long int gases, long long int answer, long long int mod_number)
{
   long long int num=0,diff_remainder=0,result=0;
   num = answer % mod_number;
   num--;

   diff_remainder = ((gases-1)/mod_number)*mod_number;
   diff_remainder = gases - 1 - diff_remainder;

   if (num>diff_remainder) 
   {
       result += (diff_remainder+1)*((gases-1)/mod_number + 1) + (num-diff_remainder)*((gases-1)/mod_number);
   }
   else
   {
       result += ((gases-1)/mod_number +1)*(num+1);
   }
   for (int i = num+1; i <= gases-1; i+=mod_number)
   {
       result++;
       if(i==answer)
       {
           return result;
           
       }
   }
   return 0;
}

int main()
{

int query;
cin >> query;
while (query--)
{
   long long int gases, answer, mod_number; // because we are given 10^9 power

   cin >> gases >> answer >> mod_number; 
   cout << chefInvention(gases,answer,mod_number) << endl;  
}

return 0;
}

