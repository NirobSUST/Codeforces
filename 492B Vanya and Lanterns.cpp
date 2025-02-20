#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif

	int n, l;
	cin >> n >> l;

	int arr[n + 5];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);

	double res = max(arr[0], l - arr[n - 1]);

	for (int i = 1; i < n; i++)
	{
		res = max(res, (arr[i] - arr[i - 1]) / 2.0);
	}

	printf("%.9lf\n", res);

	return 0;
}