#include <iostream>
using namespace std;
 
void primeornot(int n){
    if(n==2 || n%2!=0){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    primeornot(n);

    return 0;
    
}