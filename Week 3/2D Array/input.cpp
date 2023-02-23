#include <iostream>
using namespace std;

int main(){
    int arr[4][3];
    int row = 4;
    int col = 3;

    // input row wise
    cout<<"Enter Array Element"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
     
    //output
    cout<<"Output Array";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}