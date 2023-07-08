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

    // Bubble Sort
    // outer loop -> n rounds
    for(int round=1; round<arr.size(); round++){

        for(int j=0; j<arr.size()-round; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }

        }
    }

    cout<<"Sorted Array is"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}