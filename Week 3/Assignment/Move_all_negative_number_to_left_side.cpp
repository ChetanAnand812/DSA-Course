#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void negativeOneside(vector<int> &arr, int n){
    int low = 0;
    int high = n-1; 

    while(low < high){
        if(arr[low] < 0){
            low++;
        }
        else if(arr[high] > 0){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter size of Array: ";
    cin>> n;
    vector<int> arr(n);
    cout<<"Enter elements of Array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>> arr[i];
    }

    // sort(arr.begin(), arr.end());
    negativeOneside(arr, n);

    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}

// TC -> O(n)