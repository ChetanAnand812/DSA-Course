#include <iostream>
using namespace std;
 
void evenodd(int n){
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    evenodd(n);

    return 0;
    
}