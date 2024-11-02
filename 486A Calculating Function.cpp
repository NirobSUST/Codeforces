#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	long long n, p, ans;
	cin >> n;
	if (n % 2 == 0)
	{
		p = n / 2;
		ans = (p * (p + 1)) - (p * p);
	}
	else
	{
		p = (n + 1) / 2;
		ans = (p * (p - 1)) - (p * p);
	}
	cout << ans << endl;

	return 0;
}