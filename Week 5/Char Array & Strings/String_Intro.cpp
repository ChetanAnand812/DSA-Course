#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter String: "<<endl;
    getline(cin, str);
    cout<<"-----------------------------------"<<endl;
    cout<<str<<endl;
    cout<<"Length: "<<str.length()<<endl;
    cout<<"isEmpty: "<<str.empty()<<endl;
    str.push_back('@');
    cout<< str <<endl;
    str.pop_back();
    cout<< str <<endl;
    cout<< str.substr(0, 3) <<endl;
    cout<<"chetan present at Index: "<< str.find("Chetan") << endl;
    cout<<"-----------------------------------"<<endl;

    string a = "Chetan";
    string b = "chetan";

    if(a.compare(b) == 0){
        cout<< "a and b are exactly same string"<<endl;  
    } 
    else{
        cout<< "a and b are not same"<<endl;
    }
    cout<<"-----------------------------------"<<endl;

    string one = "This is my First Message";
    string word = "Chetan";
    
    cout<< str <<endl;
    str.replace(11, 5, "second");
    cout<< str <<endl;
    return 0;
}