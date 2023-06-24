#include <iostream>
using namespace std;

// Element should be in monotonic order(accending or decending)

int binarySearch(int arr[], int size, int target) {
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start ) / 2;

  while(start <= end) {

    if(arr[mid] == target) {//element found, then return index
      return mid;
    }
    
    if(target < arr[mid]) {
      //search in left
      end = mid - 1;
    }
    else {
      //search in right
      start = mid + 1;
    }

    mid = start + (end - start ) / 2;

  }

  //element not found
  return -1;

}


int main(){
    int arr[100];
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    cout<<"enter element of array"<<endl;
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter which no you want to find"<<endl;
    cin>>target;

    int indexOftarget = binarySearch(arr, size, target);

    if(indexOftarget == -1) {
        cout << "target not found" << endl;
    }
    else  {
        cout << "target found at " << indexOftarget <<" index " << endl;
    }

    return 0;
    
}

// Time complexity = O(log(n))