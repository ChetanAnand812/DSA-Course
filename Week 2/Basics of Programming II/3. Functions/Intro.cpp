#include <iostream>
using namespace std;

void printName(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Chetan"<<endl;
    }

}

int main(){
   
    // Function call
    printName();
    return 0;
    
}