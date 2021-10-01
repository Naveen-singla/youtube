#include<iostream>

using namespace std;

int main()
{

int t;
cin >>t;
while(t--){

    int n, des_prc, state_prc, des_coutn = 0, state_coutn = 0,sum;
    string str;
    cin >> n >> des_prc >> state_prc;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='0') des_coutn++;
        else state_coutn++;
    }
    sum = ((des_coutn*des_prc) + (state_coutn*state_prc));
    cout << sum << "\n";
}

return 0;
}


#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	for( int i=0; i<t; i++){
	    int n, a, b;
	    string s;
	    
	    cin>>n >>a >>b;
	    cin>>s;
	    int  count_1=0, count_2=0;
	    for( int j=0; j<n; j++){
	        
	        if(s[j]=='0'){
	            count_1++;
	        }
	        else if(s[j]=='1'){
	            count_2++;
	        }
        }
	    int time_taken;
	    time_taken = (count_1*a) + (count_2*b);
	    cout<<time_taken <<endl;
	}
	return 0;
}

