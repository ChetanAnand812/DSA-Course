#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int lastOccurence(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == target){
            // ans store and then right
            ans = mid;
            s = mid + 1;
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

    int ans = lastOccurence(v, target);
    cout<<"Index is "<< ans <<endl;


    // using stl
    auto ans2 = upper_bound(v.begin(), v.end(), target);
    cout<<"Index is "<< ans2-v.begin() <<endl;

    return 0;
}