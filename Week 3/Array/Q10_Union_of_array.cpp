#include <iostream>
#include <vector>
using namespace std;

int main(){
    // first array
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    // second arr
    int m;
    cout<<"Enter m: "<<endl;
    cin>>m;

    vector<int> brr(m);
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<brr.size(); i++){
        cin>>brr[i];
    }

//------------------------------------------------------------------------

    vector<int> ans;

    // push all element of vector arr in ans
    for(int i=0; i<arr.size(); i++){
        ans.push_back(arr[i]);
    }
    
    // push all element of vector brr in ans
    for(int i=0; i<brr.size(); i++){
        ans.push_back(brr[i]);
    }

    // print ans
    cout<<"Printing ans array "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i] <<" ";
    }

    return 0;
}