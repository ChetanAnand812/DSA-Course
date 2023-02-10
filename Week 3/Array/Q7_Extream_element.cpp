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

    int start = 0;
    int end = n-1;
    
    while(true) {
        if(start > end){
            break;
            
        if(start == end){
            cout<<arr[start]<<" ";
        }   
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        } 
        
        start++;
        end--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}