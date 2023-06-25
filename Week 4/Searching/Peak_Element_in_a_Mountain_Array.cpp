#include<iostream>
#include<vector>
using namespace std;


int peakElement(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] < arr[mid+1]){
            // right
            s = mid + 1;
        }
        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }
    return arr[s];
    // return s; here you will get the index of peak element
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
    
    cout<<"Peak Element is: " <<peakElement(v);

}