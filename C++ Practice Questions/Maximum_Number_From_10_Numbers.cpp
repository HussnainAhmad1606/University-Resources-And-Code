#include <iostream>
using namespace std;
int main() {
	int temp = 0;
	int number;
	for (int i = 1; i <= 10; i++) {
		cout << "Enter the Number: ";
		cin >> number;
		if (number > temp) {
			temp = number;
		}
	}
	cout << "Largest Number: " << temp;
}
