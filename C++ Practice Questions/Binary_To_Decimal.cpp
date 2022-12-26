/*
Program: Binary to Decimal Converter
Programmer: Psycho Coder
Date: 26-12-2022
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	string binaryNumber, decimalNumber, nextNum;
	int power, temp, length, finalVal;
	cout << "Enter Binary Number: ";
	cin >> binaryNumber;
	length = binaryNumber.length();
	for (int i = length; i>0; i--) {
		power = length - i;
		nextNum = binaryNumber[i-1];
//		cout << "Next Num: " << nextNum << endl;
//		cout << "Power: " << power << endl;
		temp = pow(2, power) * (stoi(nextNum));
//		cout << "temp: " << temp << endl;
		
		if (i == length) {
			decimalNumber = to_string(temp) + decimalNumber;
		}
		else {
			finalVal = stoi(decimalNumber);
			decimalNumber = to_string(temp + finalVal);
		}
		
		
	}
	cout << "Binary Number: " << binaryNumber << endl;
	cout << "Decimal Number: " << decimalNumber;

	return 0;
}
