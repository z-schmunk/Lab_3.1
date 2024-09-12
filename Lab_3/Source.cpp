#include <iostream>
using namespace std
/* Take estimate of fence length
provide cost quote for the client*/;

int main() {
	double post = 10.98;
	int rale = 10;
	int ft;
	double raco = 9.97 * 3;
	cout << " How many feet of fencing do you need? " << endl;
	cin >> ft;
	ft /= 10;
	double cost = (raco * ft) + (post * ft) + post;
	cout << " Your cost will be " << cost << " dollars. ";
}
