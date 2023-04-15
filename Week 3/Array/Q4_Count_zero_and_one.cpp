#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int numZero = 0;
    int numOne = 0;
    for(int i=0;i<n;i++){

        if(arr[i] == 0){
            numZero++;
        }

        if(arr[i] == 1){
            numOne++;
        }
    }
    
    cout<<"Number of Zero: "<<numZero<<endl;
    cout<<"Number of One: "<<numOne<<endl;
}