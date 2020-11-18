#include <iostream>
using namespace std;


int main(void) {
	long n = 0;
	double a = 0, S = 0, k1, k2;

	k1 = pow(-1, n);
	k2 = 2 * pow(n, 2) + 1;

	for (int n = 0; n <= 9; n++) {
		S = k1 * ((n - 1) / k2);
		printf("%lf\n", S);
	}
}
