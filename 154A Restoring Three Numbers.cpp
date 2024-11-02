#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int x[4];
	for (int i = 0; i < 4; i++) cin >> x[i];
	sort(x, x + 4);
	int tot_sum = x[3];

	for (int i = 0; i < 3; i++)
		cout << x[3] - x[i] << " ";

	return 0;
}