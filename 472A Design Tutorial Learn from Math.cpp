#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int x;
	cin >> x;
	if (x % 2) cout << "9" << " " <<  x - 9 << endl;
	else cout << "8" << " " << x - 8 << endl;

	return 0;
}