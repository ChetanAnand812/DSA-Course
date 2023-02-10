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

    int maxNum = INT_MIN;   // for minimum = INT_MAX
    for(int i=0;i<n;i++){
        if(arr[i] > maxNum){
            // foud the number greater than maxnum, update maxnum
            maxNum = arr[i];
        }
    }

    cout<<"Maximum number is: "<<maxNum<<endl;
}