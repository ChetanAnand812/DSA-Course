#include<iostream>
#include<vector>
using namespace std;


int peakElement(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;

    vector<int> v(size);
    cout<<"Enter element: "<<endl;
    for(int i =0; i< v.size(); i++){
        cin>>v[i];
    }
    
    cout<<"Peak Element at index: " <<peakElement(v);

}