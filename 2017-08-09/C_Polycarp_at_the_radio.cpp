#include<iostream>
#include<map>

using namespace std;

int main()
{
	/*int m, n, a[2001];
	int min = 2001;
	int changeCount = 0;
	int maxMin;

	map<int, int> bandlist;
	map<int, int>::iterator it;

	cin >> n >> m;

	maxMin = n / m;
	
	for (int i = 1; i <= m; i++)
		bandlist[i] = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (bandlist.find(a[i]) == bandlist.end())
			bandlist[a[i]] = 1;
		else
			bandlist[a[i]]++;
	}
	for (it = bandlist.begin(); it->first <= m; it++)
	{
	
		if (it->second < min)
			min = it->second;
	}

	for (int i = 0; i < n; i++)
	{
		//Case where band is outside of specified bands
		if (a[i] > m)
		{
			for (it = bandlist.begin(); it != bandlist.end(); it++)
			{
				if (it->first <= m && it->second < maxMin)
				{
				
					int temp = a[i];
					bandlist[temp]--;
					a[i] = it->first;
					it->second++;
					changeCount++;
					break;
				}
			}
		}


		if (a[i] < m && bandlist[a[i]] > min + 1)
		{
			for (it = bandlist.begin(); it != bandlist.end(); it++)
			{
				if (it->first <= m && it->second < maxMin)
				{
					int temp = a[i];
					bandlist[temp]--;
					a[i] = it->first;
					it->second++;
					changeCount++;
					break;
				}
			}
		}
	}

	cout << maxMin << " " << changeCount << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	*/

	int n, m, i, changeCount = 0, counter[2001] = {}, a[2001];
	cin >> n >> m;
	int maxMin = n / m;
	int minCount;
	int temp;

	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] <= n)
			counter[a[i]]++;
	}

	for (i = 1; i <= n; i++)
		cout << "band number: " << i << " plays " << counter[i] << " songs." << endl;

	int k = 1;
	for (i = 1; i <= n; i++)
	{
		cout << "At index " << i << ": " << a[i] << " has a count of " << counter[a[i]] << endl;
		if (a[i] > m)
		{
			cout << "changed index1 " << i << " to ";
			while (counter[k] >= maxMin)
			{
				k++;
			}

			a[i] = k;
			cout << k << endl;
			changeCount++;
			counter[k]++;
		}

		else if (a[i] <= m)
		{
			if (counter[a[i]] > maxMin + 1)
			{
				temp = a[i];
				cout << "changed index2 " << i << " to ";
				while (counter[k] >= maxMin)
				{
					k++;
				}

				a[i] = k;
				cout << k << endl;
				changeCount++;
				counter[k]++;
				counter[temp]--;
			}

			if (counter[a[i]] < maxMin)
			{
				cout << "changed index3 " << i << " to ";
				temp = a[i];
				while (counter[k] >= maxMin)
				{
					k++;
				}

				a[i] = k;
				cout << k << endl;
				changeCount++;
				counter[k]++;
				counter[temp]--;
			}
		}
	}

	cout << maxMin << " " << changeCount << endl;

	for (i = 1; i <= n; i++)
		cout << a[i] << " ";


	cout << endl;
	return 0;
}
