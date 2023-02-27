#include <iostream>
using namespace std;
const int Nw = 100 + 5;
const int N = 1000 * 100 + 5;
int w[Nw];
bool dp[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> w[i];
	}
	dp[0] = true;
	for (int i = 0;i <= 2 * N;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			if (dp[i])
			{
				dp[i + w[j]] = true;
			}
		}
	}
	for (int i = 0;i <= 2 * N;i++)
	{
		if (dp[i])
			cout << i << " ";
	}
	return 0;
}
