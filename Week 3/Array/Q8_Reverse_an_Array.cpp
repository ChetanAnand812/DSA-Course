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
    
    while (start <= end){

        //step1
        swap(arr[start], arr[end]);
        // step 2
        start++;
        //step 3
        end--;
    }

    cout<<"Reverse is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    

}