#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	if (n % 2)	cout << "Ehab\n";
	else cout << "Mahmoud\n";

	return 0;
}