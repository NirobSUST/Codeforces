#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		int arr[n + 1];
		map<int, int> freqCount;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			freqCount[arr[i]]++;
		}

		if (freqCount.size() >= 3)
			cout << "No\n";
		else
		{
			int freq1 = freqCount.begin()->second;
			int freq2 = freqCount.rbegin()->second;

			if (freq1 == freq2)
				cout << "Yes\n";
			else if (n % 2 == 1 && abs(freq1 - freq2) == 1)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	return 0;
}