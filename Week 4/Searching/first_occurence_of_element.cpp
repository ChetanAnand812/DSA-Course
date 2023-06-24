#include<bits/stdc++.h>
#include <vector>
using namespace std;

int firstOccurence(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == target){
            // ans store and then left
            ans = mid;
            e = mid - 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        mid = e + (s - e)/2;
    }
    return ans;
}


int main() {
    int size; 
    cout<<"Enter Size: "<<endl;
    cin>>size; 
    
    vector<int> v(size);
    cout<<"Enter element: "<<endl;
    for(int i=0 ; i<v.size() ; i++){
        cin>>v[i];
    }

    int target;
    cout<<"Enter target: "<<endl;
    cin>>target;

    int indexOfFirstOcc = firstOccurence(v, target);
    cout<<"Index is "<< indexOfFirstOcc <<endl;
    return 0;
}