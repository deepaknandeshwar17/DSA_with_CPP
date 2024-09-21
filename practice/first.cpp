#include <iostream>
using namespace std;

// int main(){
//     int age = 22;
//     char fullname = 'a';
//     float PI = 3.14;
//     bool issafe = true;
//     double price = 100.99;

//     cout << "Hello dee\nfrom ultron" << endl;
//     cout << price << endl;
//     return 0;
// }



// Type Casting

// int main(){
//     double price = 101.99;
    
//     int newprice = (int)price;
//     cout << newprice << endl;
//     return 0;
// }



// Taking input

// int main(){
//     double price;
//     cout << "Enter the price:" << endl;
//     cin >> price;

//     cout << "your entered price = " << price << endl;
//     return 0;
// }



// Airthmatic Operators

// int main(){
//     int a, b;
//     cout << "Enter the value of a: " << endl;
//     cin >> a;
//     cout << "Enter the value of b: " << endl;
//     cin >> b;

//     cout << "sum = " << ( a + b ) << endl;
//     cout << "Difference = " << ( a - b ) << endl;
//     cout << "Product = " << ( a * b ) << endl;
//     cout << "Division = " << ( a / b ) << endl;
//     cout << "modulo = " << ( a % b ) << endl;
//     cout << ( a / (double)b ) << endl;
//     cout << ( a < b ) << endl;
//     cout << ( a > b ) << endl;
//     cout << ( a <= b ) << endl;
//     cout << ( a >= b ) << endl;
//     cout << ( a == b ) << endl;
//     cout << ( a != b ) << endl;
//     cout << !( a > b ) << endl;
//     cout << ( ( a > b ) || ( a < b ) ) << endl;
//     cout << ( ( a > b ) && ( a < b ) ) << endl;
//     return 0;
// }



// Unary operators

// int main(){
//     int a = 10 , d = 5;

//     int b = a++;
//     int c = ++d;

//     cout << "b = " << b << endl;
//     cout << "a = " << a << endl;
//     cout << "c = " << c << endl;
//     cout << "d = " << d << endl;
//     return 0;
// }




// if else statements or conditional statements

// int main(){
//     int age;
//     cout << "enter your age: ";
//     cin >> age;

//     if ( age > 18 ){
//         cout << "You are eligible" << endl;
//     } else if ( age == 18 ){
//         cout << " try next year" << endl;
//     } else {
//         cout << "You are not eligible!" << endl;
//     }
//     return 0;
// }


// int main(){
//     char ch;
//     cout << "enter the charecter: " ;
//     cin >> ch;

//     if (ch >= 'z' && ch <='z'){
//         cout << "lowercase";
//     } else{
//         cout << "uppercase";
//     }
//     return 0;
// }


// int main(){
//     int n = 2;
//     cout << (n>=0? "positive":"negetive") << endl;
//     return 0;
// }




// LOOPS

// int main(){
//     int n = 20;
//     int count = 1;
//     while (count <= n) {
//         cout << count << " ";
//         count++;
//     }
//     cout << endl;
//     return 0;
// }


// int main(){
//     int sum = 0;
//     int n = 50;
//     for (int i=1; i<=n; i++){
//         sum = sum+i;
//         if (i==5){
//             break;
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }



// sum of odd numbers in the given range using for loop

// int main(){
//     int n = 5;
//     int oddSum = 0;
//     for (int i=1; i<=n; i++){
//         if (i%2 != 0){
//             oddSum = oddSum + i;
//         }
//     }
//     cout << oddSum << endl;
//     return 0;
// }



// sum of odd numbers in the given range using while loop 

// int main(){
//     int i = 0;
//     int n = 5; 
//     int sumOdd = 0;
//     while(i<= n){
//         if (i%2 != 0){
//             sumOdd +=i;
//         }
//         i++;
//     }
//     cout << sumOdd << endl;
//     return 0;
// }


// do while loop

// int main(){
//     int i = 1;
//     int n = 10;
//     do{
//         cout << i <<" ";
//         i++;
//     } while(i<=n);
//     cout << endl;
//     return 0;
// }



// Tocheck wether the number is prime or not

// int main(){
//     int n = 11;
//     bool isPrime = true;
//     for (int i=2; i<=n-1; i++){
//         if (n%i==0){
//             isPrime = false;
//             break;
//         } 
//     }
//     if (isPrime==false){
//         cout << "Not Prime" << endl;
//     } else {
//         cout << "Prime" << endl;
//     }
//     return 0;
// }

// Prime numbers in the given range

// int main(){
//     int n = 15;
//     bool isPrime = true;
//     for (int i=2; i<=n-1; i++){
//         if (n%i==0){
//             isPrime = false;
//         } else {
//             cout << i <<" ";
//         }
//     }
//     cout << endl;
//     return 0;
// }



// nested loops

// int main(){
//     int n = 5;
//     for (int i=1; i<=n; i++){
//         int m = 8;
//         for (int j=1; j<=m; j++){
//             cout << "*" <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// sum of all the numbers from 1 to n which are divisible by 3

// int main(){
//     int n = 7;
//     int sum = 0;
//     for (int i=1; i<=n; i++){
//         if(i%3==0){
//             sum = sum +i;
//         }
//     }
//     cout<<sum;
//     return 0;
// }



// Factorial of a number

// int main(){
//     int n = 3;
//     int factorial = 1;

//     for (int i = 1; i<=n; i++){
//         factorial=factorial*i;
//     }
//     cout<<factorial<<endl;
//     return 0;
// }