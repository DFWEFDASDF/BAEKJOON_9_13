#include <iostream>

using namespace std;

long long int DP[101] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	DP[5] = 2;
	DP[6] = 3;

	for (int i = 7; i <= 100; ++i)
	{
		DP[i] = DP[i - 1] + DP[i - 5];
	}

	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int input;
		cin >> input;
		cout << DP[input] << endl;
	}

	return 0;
}