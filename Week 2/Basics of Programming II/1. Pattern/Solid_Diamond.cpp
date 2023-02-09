#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    // Full Parymid
    for(int row =0; row<n; row++){
        // for space
        for(int col=0; col<n-row-1; col++){   // Formula-> n-row-1
            cout<<" ";
        }
        // for star
        for(int col=0; col<row+1; col++){    // Formula-> row+1 
            cout<<"* ";
        }
        
        cout<<endl;
    }

    // Inverted Full Parymid
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