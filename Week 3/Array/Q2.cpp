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

    cout<<"All element are 1: "<<endl;
    for(int i=0;i<n;i++){
        arr[i] =1;
        cout<<arr[i]<<" ";
    }
}