#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr{1,2,3,3,4,5,6,8};
    vector<int> brr{3,3,4,10};

    vector<int> ans;

    // outer loop on arr vector
    for(int i=0; i<arr.size(); i++){

        int element = arr[i];

        // for every element, run loop on brr
        for(int j=0; j<brr.size();j++){
            if(element == brr[j]){
                ans.push_back(element);
                break;
            }
        }
    }
    // print ans
    // for(auto value: ans){
    //     cout<<value<<" ";
    // }
    // cout<<endl;

    cout<<"Printing ans array "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i] <<" ";
    }
    return 0;
}