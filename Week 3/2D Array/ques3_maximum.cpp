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
    int maxi = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }    
        }
    }
    cout<<"Maximum Element is: "<<maxi<<endl;
    
}