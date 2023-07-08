#include<iostream>
#include<vector>
#include<algorithm>
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

    sort(arr.begin(), arr.end());
    // In Array -- sort(arr, arr + n)

    cout<<"Sorted Array is"<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}