#include <iostream>
using namespace std;
int main() {
   int sum = 0;
   bool isPrime = true;
   for (int number = 2; number <= 100; number++) {
       for (int i = 2; i <= (number-1); i++) {
           if (number % i == 0) {
               isPrime = false;
               break;
           }
           else {
               isPrime = true;
           }
       }
       
       if  (isPrime) {
           sum += number;
       }
   }
   cout << sum;
}
