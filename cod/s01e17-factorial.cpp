#include <iostream>
#include <limits>

using namespace std;

/*
 https://www.pbinfo.ro/probleme/896/factorialf

 Să se scrie o funcție C++ care să returneze pentru un număr natural n transmis ca parametru valoarea lui n!, adică 1•2•...•n.
*/

unsigned long factorial1(int n) {
	int i = 1;
	unsigned long rezultat = 1;

	while (i <= n) {
		cout << "rezultat[" <<i << "]="<< rezultat << endl;
		rezultat = rezultat * i;
		i = i + 1;
	}
	return rezultat;
}

unsigned long factorial2(int n) {
	unsigned long rezultat = 1;

	for (int i = 1;i <= n; i++) {
		cout << "f2 - rezultat[" <<i << "]="<< rezultat << endl;
		rezultat = rezultat * i;
	}
	return rezultat;
}

// rezolvare recursivă
unsigned long factorialR(int n) {
	if (n < 2) return 1;
	return factorialR(n-1) * n;
}

int main() {
	unsigned long f1 = factorialR(10);
	cout << "fact1="<< f1 << endl;
}
