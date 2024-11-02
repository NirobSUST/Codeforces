#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	int k, n, w, z;
	scanf("%d%d%d", &k, &n, &w);
	z = ((w * (w + 1) * k) / 2) - n;
	if (z < 0)
	{
		printf("0");
	}
	else {
		printf("%d", z);
	}

	return 0;
}