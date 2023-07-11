#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr, int s, int e, int target){

    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            // right search
            s = mid + 1;
        }
        else{
            e = mid - 1; 
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int expSearch(vector<int>arr, int target){
    if(arr[0] == target){
        return 0;
    }

    int i=1;

    while(i<arr.size() && arr[i] <= target){
        i = i*2;
    }
    return binarySearch(arr, i/2, min(i, int(arr.size())-1), target);
}

int main(){
    int size; 
    cout<<"Enter Size: "<<endl;
    cin>>size; 
    
    vector<int> arr(size);
    cout<<"Enter element: "<<endl;
    for(int i=0 ; i<arr.size() ; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter target: "<<endl;
    cin>>target;

    int ans = expSearch(arr, target);
    cout<<"Index is "<< ans <<endl;
    return 0;
} 