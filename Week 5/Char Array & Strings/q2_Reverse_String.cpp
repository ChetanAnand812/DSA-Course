#include<iostream>
#include<string>
using namespace std;


int main(){
    char name[100];
    cout<<"Enter Name: "<<endl;
    cin.getline(name, 50);

    int start = 0;
    int n = strlen(name);
    int end = n-1;
    
    while (start <= end){

        //step1
        swap(name[start], name[end]);
        // step 2
        start++;
        //step 3
        end--;
    }

    cout<<"Reverse is: "<<name;
    
    
    return 0;
}