#include <iostream>
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
    cout<<"Enter Array Element: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
     
    //output
    cout<<"sum of Array row wise"<<endl;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }

    return 0;
}