#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int DP[40][2];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	DP[0][0] = 1;  DP[0][1] = 0;
	DP[1][0] = 0;  DP[1][1] = 1;
	
	for (int i = 2; i <= 40; ++i)
	{
		DP[i][0] = DP[i - 1][0] + DP[i - 2][0];
		DP[i][1] = DP[i - 1][1] + DP[i - 2][1];
	}


	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int n;
		cin >> n;

		cout << DP[n][0] << " ";
		cout << DP[n][1] << " " << endl;
	}

	return 0;
}