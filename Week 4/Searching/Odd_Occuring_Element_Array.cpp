#include<iostream>
#include<vector>
using namespace std;

int oddOccurance(vector<int>arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s <= e){
        // single element
        if(s == e){
            return s;
        }

        // Case 1 --> mid - even 
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){ // present in left side of answer
                s = mid + 2; // then right serach
            }
            else{
                e = mid;
            }
        }

        // Case 2 --> mid - odd
        else{
            if(arr[mid] == arr[mid-1]){
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
        }

        mid = s + (e-s)/2;
    } 
    return -1;
}

int main(){
    int size;
    cout<<"Enter size of Array: "<<endl;
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter elements of Array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int ans = oddOccurance(arr);
    cout<<"Index is "<<ans<<endl;
    cout<<"Ans is "<< arr[ans]<<endl;

    return 0;
}