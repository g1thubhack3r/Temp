#include <iostream>
#include <algorithm>
using namespace std;
const int N_w = 100 + 5;
const int N = 10000 + 5;
bool dp[N];
int w[N_w];
int main()
{
	int n, W;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> w[i];
	}
	cin >> W;
	dp[0] = true;
	for (int i = 1;i <= n;i++)
	{
		for (int j = 0;j <= W;j++)
		{
			if (dp[j] && (j + w[i]) <= W)
			{
				dp[w[i] + j] = true;
			}
		}
	}
	int idx = 0;
	for (int i = 0;i <= W;i++)
	{
		if (dp[i] && i >= idx)
		{
			idx = i;
		}
	}
	cout << dp[idx] << endl;
	return 0;
}
