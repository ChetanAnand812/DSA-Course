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

    cout<<"Doubles: ";
    for(int i=0;i<n;i++){
        cout<<2*arr[i]<<" ";
    }
}