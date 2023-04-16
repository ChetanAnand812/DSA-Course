#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; 
    cout<<"enter n: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int sum = 50;
    // print all pairs
    // outer loop will traverse for each element
    for(int i=0; i<arr.size(); i++){
       int element1 = arr[i];

    // for every element, will treverse on aage wale elements
        for(int j=i+1; j<arr.size(); j++){
            int element2 = arr[j];

            if(element1 + element2 == sum){
                cout<<"Pair sum of 50 is:-> "<< element1<<","<<element2<<endl;
            }
        }
    }
    
}