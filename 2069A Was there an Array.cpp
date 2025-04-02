#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		int arr[n + 5];
		for (int i = 0; i < n - 2; i++) cin >> arr[i];
		bool flag = true;

		for (int i = 1; i < n - 3; i++)
		{
			// cout << arr[i - 1] << " " << arr[i] << " " << arr[i + 1] << endl;
			if (arr[i - 1] == 1 && arr[i] == 0 && arr[i + 1] == 1)
			{
				flag = false;
				break;
			}
		}
		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}