#include<iostream>
#include<string.h>
using namespace std;

/*
int main(){
    char name[100];
    cout<<"Enter Your Name: "<<endl;

    cin>> name;
    
    cout<<"Aapka naam " << name <<" hai "<<endl;
    return 0;
}    
*/
//------------------------------------------------------------

int main(){
    char name[100];
    cout<<"Enter Your Name: "<<endl;
    // cin>> name;  here you will get only first name eg- chetan anand, output: chetan
    cin.getline(name, 50);
    cout<<"Your name is: "<< name<<endl;
    return 0;
}
