#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = (start + end) / 2;

    
}

int main(){
    int arr[100];
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    cout<<"enter element of array"<<endl;
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter which no you want to find of"<<endl;
    cin>>target;

    int indexOftarget = binarySearch(arr, size, target);

    if(indexOftarget == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found"<<endl;
    }


    
}