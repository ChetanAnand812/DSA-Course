#include <iostream>
#include <stack>
using namespace std;

int main(){

    // creation
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    // remove
    st.pop();

    // check element on top
    cout << "Element on top is: " << st.top() <<endl;

    // size
    cout << "Size of Stack: "<< st.size() <<endl;

    if(st.empty()){
        cout<< "Stack is Empty" <<endl;
    }
    else{
        cout<< "Stack is Not-Empty" <<endl;
    }

    cout<<"-----------------------------------"<<endl;

    stack<int> s;
    s.push(1);    
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()) {
        cout<< s.top() << " ";
        s.pop();
    }
    return 0;
}