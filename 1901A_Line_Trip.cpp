#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n,x;
		cin >> n >> x;

		int mx = 0;

		int arr[n+2];
		arr[0] = 0;
		arr[n+1] = x;

		for(int i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}
		for(int i = 0; i < n+1; i++)
		{
			if(i==n)
				mx = max(mx,2*(arr[n+1] - arr[n]));
			else
				mx = max(mx,arr[i+1] - arr[i]);
		}
		cout << mx << endl;
	}
	return 0;
}