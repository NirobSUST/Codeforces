#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int tot_drink = floor((k * l) / (nl));
	// cout << tot_drink << endl;
	int tot_salt = floor((p) / (np));
	// cout << tot_salt << endl;

	int toast = min(tot_salt, min( tot_drink, c * d));
	// cout << toast << endl;

	int num = toast / n;

	cout << num << endl;



	return 0;
}