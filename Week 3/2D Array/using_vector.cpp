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