#include <bits/stdc++.h>
using namespace std;
string a,b;
int a1[1000005],a2[1000005],ans[1000005];
int main()
{
	cin >> a >> b;
	for(int i = 0;i < a.size();i++)
	{
		a1[a.size() - 1 - i] = a[i] - '0';
	}
	for(int i = 0;i < b.size();i++)
	{
		a2[b.size() - 1 - i] = b[i] - '0';
	}
	for(int i = 0;i < max(a.size(),b.size());i++)
	{
		ans[i] = a1[i] + a2[i];
	}
	for(int i = 0;i < max(a.size(),b.size());i++)
	{
		if(ans[i] >= 10)
		{
			ans[i+1] += ans[i] / 10;
			ans[i] %= 10;
		}
	}
	int len = max(a.size(),b.size());
	if(ans[len] == 0) len--;
	for(int i = len;i >= 0;i--)
	{
		cout << ans[i];
	}
	return 0;
}
