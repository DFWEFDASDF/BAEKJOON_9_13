#include <iostream>

#define MAX 100000
#define max(x,y) x > y ? x : y
using namespace std;

int DP[MAX] = { 0 };
int ARRAY[MAX] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int s = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> ARRAY[i];
	}

	int ans = ARRAY[0];
	DP[0] = ARRAY[0];

	for (int i = 1; i <= N; ++i)
	{
		DP[i] = max(DP[i - 1] + ARRAY[i], ARRAY[i]);
		ans = max(DP[i], ans);
	}

	cout << ans << endl;

	return 0;
}