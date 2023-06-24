#include <iostream>
#include <vector>
using namespace std;

int main(){

    //create vector
    vector<int> arr;

    // int ans = (sizeof(arr)/sizeof(int));
    // cout<< ans << endl;

    cout<< arr.size() <<endl;
    cout<< arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(8);
    arr.push_back(9);

    // print 
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    // remove/delete
    arr.pop_back();

    // print 
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    cout<<"---------------------------------------------"<<endl;

    // ----------------------------------------------------------------

    int n;
    cout<<"Enter size(n): "<<endl;
    cin>> n;

    vector<int> brr(n, -2);

    cout<<"Size of b: "<< brr.size() <<endl;
    cout<<"Capacity of b: "<< brr.capacity() << endl;

    // print 
    for(int i=0; i<brr.size(); i++){
        cout<< brr[i] <<" ";
    }
    cout<<endl;

    cout<<"---------------------------------------------"<<endl;

    vector<int> crr{10,20,18,23,25,87,98};
    // print 
    for(int i=0; i<crr.size(); i++){
        cout<< crr[i] <<" ";
    }
    cout<<endl;

    cout<<"Vector crr is empty or not "<< crr.empty() <<endl;


    return 0;

}


-------------------------------------------------------------------------

int main() {
    int n; 
    cin>>n; // taking size of vector from user
    vector<int> v(n);
    for(int i=0 ; i<v.size() ; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<v.size(); i++){
        cout<< v[i] <<" ";
    }
    cout<<endl;
    return 0;
}