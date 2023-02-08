#include <iostream>
using namespace std;

int printSumTill(int n);

int main() {
   cout << printSumTill(100);
}

int printSumTill(int n){
   if(n<2) return 0;
   int sum=0;
   bool isPrime = true;
   for (int number = 2; number <= n; number++) {
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
   
 return sum;  
}
