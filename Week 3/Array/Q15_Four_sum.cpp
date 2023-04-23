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

    int sum = 80;
    // print all pairs
    // outer loop will traverse for each element
    for(int i=0; i<arr.size(); i++){
       int element1 = arr[i];

    // for every element, will treverse on aage wale elements
        for(int j=i+1; j<arr.size(); j++){
            int element2 = arr[j];

            for(int k=j+1; k<arr.size(); k++){
                int element3 = arr[k];
     
                for (int l = k+1; l<arr.size(); l++){
                    int element4 = arr[l];

                    if(element1 + element2 + element3 + element4 == sum){
                        cout<<"Four sum of 50 is:-> "<< element1<<","<<element2<<","<<element3<<","<<element4<<endl;
                }
                }
                
            }
        }
    }
    
}