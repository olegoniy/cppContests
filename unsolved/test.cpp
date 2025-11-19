#include <iostream>

using namespace std;

int main() {
	int a = 5;
	int &b = a;
	int *c = &a;
	
	cout << a << ' ' << b << ' ' << c << '\n';
	
	a = 6;
	cout << &a << ' ' << &b << ' ' << c << '\n';
	
	return 0;
}
