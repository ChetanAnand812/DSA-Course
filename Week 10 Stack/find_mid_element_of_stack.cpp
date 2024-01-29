#include <iostream>
#include <stack>
using namespace std;

void printMiddle(stack<int> &s, int &totalSize){
    if(s.size() == 0) {
        cout<<"Stack is empty"<<endl;
        return;
    }

    // base case
    if(s.size() == totalSize/2 + 1) {
        cout<< "Middle element is: " << s.top() <<endl;
        return;
    }

    int temp = s.top();
    s.pop();

    // recursive call
    printMiddle(s, totalSize);

    // backtrack
    s.push(temp);

}

int main(){
    stack<int> s;

    int size;
    cout<< "Enter size of stack: ";
    cin>> size;

    cout<< "Enter value for element: ";
    for(int i=0; i<size; i++){
       int value;
       cin>> value;
       s.push(value);
    }
    
    int totalSize = s.size();
    printMiddle(s, totalSize);
    return 0;

}