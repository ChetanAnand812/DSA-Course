#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; 
    cout<<"enter n: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = arr.size() - 1;

    for(int i=0; i<=end;){
       
        if(arr[i] == 0){
            // swap from left
            swap(arr[start], arr[i]);
            start++;
            i++;
        }

        else{
            // swap from right
            swap(arr[end], arr[i]);
            end--;
        }
    }
 
    // Print
    for(auto value: arr){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}
