#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int row =0; row<n; row++){
        // for space
        for(int col=0; col<row; col++){   // Formula-> row
            cout<<" ";
        }
        // for star
        for(int col=0; col<n-row; col++){    // Formula-> n-row 
            cout<<"* ";
        }
        
        cout<<endl;
    }
}