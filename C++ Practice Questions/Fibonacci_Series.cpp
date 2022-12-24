#include <iostream>
using namespace std;
int main() {
	int totalTerms;
	cout << "Enter total Number of Terms: ";
	cin >> totalTerms;
	int n1 = 0;
	int n2 = 1;
	cout << n1 << " ";
	cout << n2 <<  " ";
	for (int i = 1; i <= totalTerms-2; i+=2) {
		n1 = n1 + n2;
		cout << n1 << " ";
		n2 = n2 + n1;
		cout << n2 << " ";
	}
	return 0;
}
