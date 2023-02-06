#include <iostream>
using namespace std;

int main(){
   
   int rowcount, colcount;
   cin>>rowcount;
   cin>>colcount;

    for(int row=0; row<rowcount; row++){
        // first row or last row
        if(row == 0 || row == rowcount-1){   // lastrow-1
            for(int col=0; col<colcount; col++){
                cout<<"* ";
            }
        }
        else{
            //remaining middle rows
            //first star
            cout<<"* ";
            //spaces      // here leave the first and last
            for(int i=0; i<colcount-2; i++){
                cout<<"  ";
            }
            //last star
            cout<<"* ";
        }
        cout<<endl;
    }
}