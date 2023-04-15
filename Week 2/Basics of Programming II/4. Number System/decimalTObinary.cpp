#include <iostream>
using namespace std;

int decimalToBinary(int n){
    while(n>0){
        int bit = n%2;
        n = n/2;
        cout<<bit;
        
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int binary = decimalToBinary(n);

}