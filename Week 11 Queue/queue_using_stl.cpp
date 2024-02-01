#include <iostream>
#include <queue>
using namespace std;

int main(){

    // creation
    queue<int> q;

    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // size
    cout << "Size of Stack: "<< q.size() <<endl;

    // remove
    q.pop();

    // size
    cout << "Size of Stack: "<< q.size() <<endl;

    if(q.empty()){
        cout<< "Queue is Empty" <<endl;
    }
    else{
        cout<< "Queue is Not-Empty" <<endl;
    }

    cout<<"Front element is: "<< q.front()<<endl;
     
    return 0;
}
