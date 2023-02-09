#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
 
    // For upper part
    for(int row =0; row<n; row++){
        // for space
        for(int col=0; col<n-row-1; col++){   // Formula-> n-row-1
            cout<<" ";
        }
        // for star
        for(int col=0; col<2*row+1; col++){    // Formula-> n-row 

            // first character or last character
            if(col == 0 || col == 2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }


    // For lower part
    for(int row =0; row<n; row++){
        // for space
        for(int col=0; col<row; col++){   // Formula->row
            cout<<" ";
        }
        // for star
        for(int col=0; col<2*n-2*row-1; col++){    // Formula-> n-row 

            // first character or last character
            if(col == 0 || col == 2*n-2*row-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }
}