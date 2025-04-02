#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while(tc--)
	{
		int n;
		cin >> n;

		if(n%3 == 0)
			cout << "Second\n";
		else
			cout << "First\n";
	}
	return 0;
}