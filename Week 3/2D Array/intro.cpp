#include <iostream>
using namespace std;

int main(){
    // declare 2D array             c*i+j
    int arr[3][3];

    // initialize
    int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<brr[0][2]<<endl;

    cout<<"Printing Row wise"<<endl;
    //row-wise print
    // outer loop
    for(int i=0; i<3; i++){
        //for every row we need to print value in each column
        for(int j=0; j<3; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing Column wise"<<endl;
    // column-wise print
    for(int i=0; i<3; i++){
        //for every row we need to print value in each column
        for(int j=0; j<3; j++){
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}