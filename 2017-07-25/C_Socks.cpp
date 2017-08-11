#include <iostream>
using namespace std;

int main()
{
	int n; //number of socks
	int m; //number of days
	int k; //number of available colors

	cout << "Input number of socks: ";
	cin >> n;
	cout << "Input number of days: ";
	cin >> m;
	cout << "Input number of colors: ";
	cin >> k;
	
	int* c = new int[n]; //color of sock at index
	int* pairs[2];
	pairs[0] = new int[m];
	pairs[1] = new int[m];

	for (int i = 0; i < m; i++)
	{
		cin >> pairs[0][i];
		cin >> pairs[1][i];
	}


	return 0;
}