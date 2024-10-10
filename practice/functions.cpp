#include <iostream>
using namespace std;




// int printHello(){
//     cout<<"Hello"<<endl;
//     return 3;
// }

// int minOfTwo(int a, int b){
//     if(a<=b){
//         return a;
//     } else{
//         return b;
//     }
// }

// int main() {
//     cout<<"min = "<<minOfTwo(10,5)<<endl;
//     return 0;
// }



// Sum of N integers

// int sumN(int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     cout<<sumN(5)<<endl;
//     return 0;
// }




// Factorial of a number

// int fact(int n){
//     int factN = 1;
//     for (int i =1; i<=n; i++){
//         factN *= i;
//     }
//     return factN;
// }

// int main(){
//     cout<<fact(5)<<endl;
//     return 0;
// }




// pass by value

// int sum(int a, int b){
//     a+=10;
//     b+=5;
//     return a+b;
// }

// int main(){
//     int a = 5, b = 6;
//     cout<<sum(a,b)<<endl;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     return 0;
// }





// Sum of digits

// int sumOfDigit(int num){
//     int sumDig = 0;
//     while(num>0){
//         int lastdigit = num%10;
//         num = num/10;
//         sumDig = sumDig + lastdigit;
//     }
//     return sumDig;
// }

// int main(){
//     cout << "Sum of digit = "<<sumOfDigit(2356)<<endl;
//     return 0;
// }





// Binomial coefficient

// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nr = factorial(n-r);

//     return fact_n/(fact_r*fact_nr);
// }

// int main(){
//     int n = 6, r = 3;
//     cout<<nCr(n,r)<<endl;
//     return 0;
// }





// to check prime number

bool is_prime(int num){
    if (num <= 1){
        return false;
    }
    for(int i = 2; i<num; i++){
        if(num%i==0){
            return false;
        }

    }
    return true;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(is_prime(num)){
        cout<<num<<" is a prime number"<<endl;
    } else{
        cout<<num<< " is not a prime number"<<endl;
    }
}