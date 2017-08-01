#include <iostream>
using namespace std;

int main()
{
	int sessions;
	bool flag = false;

	cin >> sessions;

	int* teams = new int [sessions];
	cin >> teams[0];
	int i;
	for (i = 1; i < sessions; i++)
	{
		cin >> teams[i];
		if (teams[i - 1] % 2 != 0)
		{
			if (teams[i] > 0)
				teams[i]--;
			else
			{
				flag = true;
				break;
			}
		}
	}

	if (flag || teams[sessions - 1] % 2 != 0)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}