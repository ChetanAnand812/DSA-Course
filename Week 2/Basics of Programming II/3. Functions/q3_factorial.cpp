#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    

    int fac = factorial(n);
    cout<<"Factorial of number is: "<< fac <<endl;

    return 0;
    
}