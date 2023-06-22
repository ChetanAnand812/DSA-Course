#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
    
    vector<vector<int> > arr;
    
    vector<int> a{1,2,3};
    vector<int> b{2,4,6};
    vector<int> c{1,3,7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(5);
    arr.pop_back(5);
    arr.size(a);
    arr.empty();

    //output
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i ].size(); j++){
            cout<<arr[i][j]<<" ";   
        }
        cout<<endl;
    }

    */

    //---------------------------------------------------

    int row = 3;
    int col = 5;

    vector<vector<int> > arr(row, vector<int>(col, 101));

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";   
        }
        cout<<endl;
    }

}