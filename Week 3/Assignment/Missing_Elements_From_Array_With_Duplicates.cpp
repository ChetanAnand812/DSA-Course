#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void missingElement(vector<int>&arr, int n){
    // sorting + swapping
    int i=0;
    while (i < n){
        int index = arr[i] -1;

        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);
            i++;
        }
        else{
            ++i;
        }
    }

    cout<<"Missing Element: ";
    for(int i=0; i<n; i++){
        if(arr[i] != i+1){
            cout<< i+1 << " ";
        }
    }
    cout<<endl;
    
}

int main(){
    int n;
    cout<<"Enter size of Array: ";
    cin>> n;
    vector<int> arr(n);
    cout<<"Enter elements of Array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>> arr[i];
    }

    missingElement(arr, n);
    return 0;
}
