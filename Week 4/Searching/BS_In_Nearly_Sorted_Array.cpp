#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int size, int target) {
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start ) / 2;

  while(start <= end) {

    if(arr[mid] == target) {
      return mid;
    }
    if(mid-1 >= 0 && arr[mid-1] == target){
        return mid-1;
    }
    if(mid+1 < arr.size() && arr[mid+1] == target){
        return mid+1;
    }
    
    if(target < arr[mid]) {
      //search in left
      end = mid - 2;
    }
    else {
      //search in right
      start = mid + 2;
    }

    mid = start + (end - start ) / 2;

  }

  //element not found
  return -1;

}


int main(){
    int size;
    cout<<"Enter size of Array: "<<endl;
    cin>>size;
    vector<int> v(size);

    cout<<"Enter elements of Array: "<<endl;
    for(int i=0; i<v.size();i++){
        cin>>v[i];
    }

    int target;
    cout<<"Enter target value: "<<endl;
    cin>>target;

    int ans = binarySearch(v, size, target);
    cout<<"Index of "<<target<<" is "<<ans<<endl;

    return 0;

}