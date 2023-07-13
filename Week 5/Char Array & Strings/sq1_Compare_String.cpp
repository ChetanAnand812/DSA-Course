#include<iostream>
#include<string>
using namespace std;

bool compareString(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    else{
        for(int i=0; i<a.length(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    string a;
    cout<<"Enter String a: "<<endl;
    getline(cin, a);

    string b;
    cout<<"Enter String b: "<<endl;
    getline(cin, b);

    bool isEqual = compareString(a, b);
    cout<<"The strings are " << (isEqual ? "equal" : "not equal") << endl;
    return 0;

}