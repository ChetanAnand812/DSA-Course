#include <iostream>
using namespace std;

bool find(int arr[],int size, int key){
    
    for(int i=0;i<size;i++){
        if(arr[i] = key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size: ";
    cin>>size;

    cout<<"Enter element of array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter Key: ";
    cin>>key;

    if(find(arr, size,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}