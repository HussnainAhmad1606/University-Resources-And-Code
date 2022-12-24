#include <iostream>
using namespace std;
int main() {
	int counter = 0;
	for (int i = 32; i <= 127; i++) {
		if (counter == 16) {
			cout << endl;
			counter = 0;
		}
		cout << char(i) << " ";
		counter += 1;
	}
	return 0;
}
