#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int n;
	int arr[3];

	cin >> n >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3);

	int ans = 0, res = 0;

	for (int i = 0; i < n / arr[2] + 1; i++)
	{
		for (int j = 0; j < (n - i * arr[2]) / arr[1] + 1; j++)
		{
			int ans = 0;
			int temp = (n - (i * arr[2] + j * arr[1]));

			if (temp % arr[0] == 0)
			{
				ans = i + j + temp / arr[0];
				res = max(res, ans);

			}
		}
	}
	cout << res << endl;

	return 0;
}