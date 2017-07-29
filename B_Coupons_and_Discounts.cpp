#include <iostream>
using namespace std;

int main()
{
	int sessionCount;
	int pizzaCount = 0;
	bool flag = false;

	cin >> sessionCount;

	int* teamCount = new int [sessionCount];
	cin >> teamCount[0];
	int i;
	for (i = 1; i < sessionCount; i++)
	{
		cin >> teamCount[i];

		if (teamCount[i - 1] % 2 != 0)
		{
			if (teamCount[i] > 0)
				teamCount[i]--;
			else
			{
				flag = true;
				break;
			}
		}
	}

	if (flag || teamCount[sessionCount - 1] % 2 != 0)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}