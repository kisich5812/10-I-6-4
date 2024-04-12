#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int nk, k, s = 0;
	cin >> nk >> k;
	int a = k;
	while(a>0) { 
		a=a/10;
		s++;
	}
	a = nk/pow(10, s);
	if(nk-a*pow(10, s)==k) 
		cout << a << endl;
	else 
		cout << 0 << endl;
	return 0;
}
