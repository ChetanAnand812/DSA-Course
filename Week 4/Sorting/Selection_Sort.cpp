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

    // Selection Sort
    for(int i=0; i<arr.size()-1; i++){

        int minIndex = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < arr[minIndex]){
                // new minimum, then store
                minIndex = j;
            }
        }
        // swap
        swap(arr[i], arr[minIndex]);
    }

    cout<<"Sorted Array is"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}