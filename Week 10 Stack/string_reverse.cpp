#include <iostream>
#include <stack>

using namespace std;

int main(){
    string str;
    cout<<"Enter your string: "<<endl;
    cin>>str;

    stack<char> s;

    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }

    while(!s.empty()) {
        cout<< s.top() << " ";
        s.pop();
    }
    cout<<endl;
     
    return 0; 
}