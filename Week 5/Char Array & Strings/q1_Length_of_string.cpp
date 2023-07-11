#include<iostream>
#include<string>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;

    while(name[i] != '\0'){   // if index equal to null
        length++;
        i++;
    }
    return length;
}

int main(){
    char name[100];
    cout<<"Enter Name: "<<endl;
    cin.getline(name, 50);

    cout<<"Length is: "<< getLength(name)<<endl;
    cout<<"Length is: "<< strlen(name)<<endl;    // Pre defined function for finding length
    return 0;
}