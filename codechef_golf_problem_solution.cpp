
#include<iostream>

using namespace std;

int main()
{
	int query;
	cin >> query;
	while(query--)
	{
		int tiles,hole_number,bounce;
		cin >> tiles >> hole_number >> bounce;
		tiles+=1;
		if(hole_number % bounce == 0)
		{
		cout << "YES" <<"\n";
		}
	    else if((tiles-hole_number) % bounce == 0)
		{
		cout << "YES" << "\n";
		}
		else
		{
		cout << "NO" << "\n";
		}
	}
}