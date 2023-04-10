#include <iostream>
using namespace std;

int addNo(int x,int y){
                        // addNo(a,b) pass by value int x, int y (a & b value store in x & y)
    int result = x + y;
    return result; 
}

int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;

    int sum = addNo(a,b);
    cout<<"a + b = "<< sum <<endl;

    cout<<"Address of a is: "<< &a <<endl;
    cout<<"Address of b is: "<< &b <<endl;
    return 0;
    
}