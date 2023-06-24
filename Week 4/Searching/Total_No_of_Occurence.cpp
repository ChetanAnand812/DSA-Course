#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;

    vector<int> v(size);
    cout<<"Enter element: "<<endl;
    for(int i =0; i< v.size(); i++){
        cin>>v[i];
    }

    int target;
    cout<<"Enter target: "<<endl;
    cin>>target;
    
    cout<< count(vect.begin(), vect.end(), target);
    return 0;
}