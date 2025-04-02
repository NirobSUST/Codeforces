#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l,r,d,u;
	cin >> l >> r >> d >> u;
	if(abs(l) == r && r == abs(d) && abs(d) == u)
		cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}