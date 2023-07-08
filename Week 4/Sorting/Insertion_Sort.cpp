#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size: "<<endl;
    cin>>size;
    vector<int>arr(size);
    cout<<"Enter elements of Array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    // Insertion Sort
    // outer loop -> n rounds
    for(int round=1; round<arr.size(); round++){
        // Step A - Fetch
        int val = arr[round];
        // Step B - compare
        int j=round-1;
        for(;j>=0; j--){

            if(arr[j] > val){
                // Step C - Shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        // Step D - Copy
        arr[j+1] = val;
    }

    cout<<"Sorted Array is"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}