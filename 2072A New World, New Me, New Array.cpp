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
	while (tc--) {
		int n, k, p;
		cin >> n >> k >> p;
		k = abs(k);
		int check = k / p;

		if (k % p == 0 && check <= n)	cout << check << endl;
		else if (k % p != 0 && check + 1 <= n)	cout << check + 1 << endl;
		else cout << "-1\n";
	}
	return 0;
}