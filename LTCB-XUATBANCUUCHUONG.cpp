/*#include <iostream>
using namespace std;
int main() {
	int so;
	cout << "nhap so:"; cin >> so;
	for (int i = 1; i <= 10; i++) {
		cout << "" << so << "x" << i << "=" << so * i << endl;
	}
	return 0;
}*/


#include <iostream>
using namespace std;
int main() {
	int so[8] = { 2,3,4,5,6,7,8,9 };
	for (int n = 1; n <=10; n++) {
		for (int i = 0; i < 8; i++) {
			cout << so[i] << " x " << n << " = " << so[i] * n << "\t";
		}
		cout << endl;
	}
}
