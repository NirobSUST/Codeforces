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
	while (tc--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;

		long underScore = 0, dash = 0;

		for (auto c : s)
		{
			if (c == '_') underScore++;
			else dash++;
		}
		// cout << "Check = " << underScore << " " << dash << endl;
		if (n <= 2 || underScore < 1 || dash < 2)	cout << "0\n";
		else	cout << (dash / 2LL) * (dash - (dash / 2)) * underScore << endl;
	}

	return 0;
}