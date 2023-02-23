#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int arr[100][100];
    int row;
    int col;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;

    // input row wise
    cout<<"Enter Array Element"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
     
    //output
    cout<<"Transpose of Array is"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[j][i]<<" ";   
        }
        cout<<endl;
    }
   
}