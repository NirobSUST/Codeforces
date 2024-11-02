#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int a[5][5];
	int r, c, ans;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
			if (a[i][j] != 0)
			{
				r = i;
				c = j;
			}
		}
	ans = (abs(2 - r) + abs(2 - c));
	cout << ans << endl;

	return 0;
}