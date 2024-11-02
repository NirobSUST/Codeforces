#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif

	int y, w;
	cin >> y >> w;

	int max_roll = max(y, w);

	int temp = 6 - max_roll + 1;

	int gcd = __gcd(6, temp);

	int numerator = temp / gcd;
	int denominator = 6 / gcd;

	cout << numerator << "/" << denominator << endl;



	return 0;
}