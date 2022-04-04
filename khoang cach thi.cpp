#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

typedef struct 
{
	double x, y;
}
toado;

double kcach(toado A, toado B)
{
	double kc;
	kc = (double) (sqrt (pow((A.x - B.x), 2) + pow((A.y - B.y), 2)));
	return kc;	
}


int main()
{	
	int t;
	cin >> t;
	
	while (t--)
	{
		toado A, B;
		cin >> A.x >> A.y >> B.x >> B.y;
		printf("%.4f\n", kcach(A,B));
	}
}
