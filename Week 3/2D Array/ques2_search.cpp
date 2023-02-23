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
    cout<<"Enter Array Element"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
     
    //output
    int key;
    cout<<"Enter Key: ";
    cin>>key;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == key){
                cout<<"Number is present"<<endl;
            } 
            else{
                cout<<"Not Found"<<endl;
            }
        }
        
    }
    
}