#include<iostream>
using namespace std;

bool binarySearch(int arr[][100], int row, int col, int target){
    int s = 0;
    int e = row*col - 1;
    int mid = s+ (e-s) / 2;

    while(s <= e){
        int rowIndex = mid / row;   // ******
        int colIndex = mid % col;  // ******

        if(arr[rowIndex][colIndex] == target){
            return true;
        }
        if(arr[rowIndex][colIndex] < target){
            // right search
            s = mid + 1; 
        }
        else{
            // left search
            e = mid - 1;
        }
        mid = s+ (e-s) / 2;
    }
    return false;
}

int main(){
    int arr[100][100];
    int row;
    cout<<"Enter no. of rows: "<<endl;
    cin>>row;
    int col;
    cout<<"Enter no. of col: "<<endl;
    cin>>col;

    cout<<"Enter elements of Array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"Enter Target: "<<endl;
    cin>>target;

    bool ans = binarySearch(arr, row, col, target);
    if(ans){
        cout<<"Target Found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }

    return 0;

}