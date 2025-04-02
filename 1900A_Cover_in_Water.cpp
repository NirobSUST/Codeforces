#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		string s;
		int n;
		cin >> n;
		cin >> s;
		bool flag = false;
		int count = 0;

		for(int i = 0; i < n; i++)
		{
			if(i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
				flag = true;
				break;
			}
			if(s[i] == '.')
				count++;
		}

		if(flag)
			cout << "2\n";
		else
			cout << count << endl;
	}
	return 0;
}