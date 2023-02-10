#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;
    
    bool flag = 0;
    // 0 -> not found
    // 1-> found
    for(int i=0;i<n;i++){

        if(arr[i] == key){
            // found
            flag = 1;
            break;
        }
    }

    if(flag){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}