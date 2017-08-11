#include <iostream>
using namespace std;

void sort(int *arr, int len)
{
	int temp;
	for (int j = 0; j < len; j++) {
		for (int i = len - 1; i > j; i--)
		{
			if (arr[i] < arr[i - 1])
			{
				temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
			}
		}
	}
}

int main()
{
	int x[3];
	int ans;

	cin >> x[0] >> x[1] >> x[2];
	
	sort(x, 3);

	ans = (x[2] - x[1]) + (x[1] - x[0]);

	cout << ans << endl;
		
	return 0;
}