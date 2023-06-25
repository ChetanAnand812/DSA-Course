#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s) / 2;

    while(s <= e){

        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid] < arr[mid-1]){
            return mid-1;
        }

        if(arr[s] >= arr[mid]){
            // left search
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
    return -1;
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
    
    int ans = findPivot(v);
    cout<<"Pivot Element index is: " << v[ans] ;

}