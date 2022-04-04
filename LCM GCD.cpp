#include <iostream>
using namespace std;

int min(int a, int b)
{
	if (a >= b) 
	{
		return b;
	} 
	else if (a < b) 
	{
		return a;
	}
}

long long GCD(long long a, long long b) 
{
	GCD(b,a%b);
}


long long LCM(long long a, long long b) 
{
	return (a*b) / GCD(a,b);
}

int main() 
{
	int test;
	long long a, b;
	cin >> test;

	while(test--) 
	{
		cin >> a >> b;
		cout << LCM(a,b) << " " << GCD(a,b) << endl;
	}
}

