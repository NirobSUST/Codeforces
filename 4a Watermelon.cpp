#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int w;
	cin >> w;
	w % 2 == 0 && w > 2 ? cout << "YES\n" : cout << "NO\n";

	return 0;
}