
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main() {
	long int n = 9999999;
	double x = 19.8, hasil;
	hasil = scalbln(x, n);
	cout << x << " * " << FLT_RADIX << "^" << n << " = " << hasil << endl;
	_getch();
	return 0;
}
