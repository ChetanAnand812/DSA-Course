#include <iostream>
#include <limits.h>
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

    int minNum = INT_MAX;   
    
    for(int i=0;i<n;i++){
        if(arr[i] < minNum){
           
            minNum = arr[i];
        }
    }

    cout<<"Maximum number is: "<<minNum<<endl;
}