#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<col+1<<" ";            // Formula - col+1
        }
        cout<<endl;
    }
}