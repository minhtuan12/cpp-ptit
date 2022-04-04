#include <iostream>
using namespace std;

int main()
{
	long long step[50];
	step[0] = 1;
	step[1] = 1;
	step[2] = 2;
	for (int i = 3; i <= 50; i++)
	{
		step[i] = step[i - 1] + step[i - 2] + step[i - 3];
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << step[n] << endl;
	}
}