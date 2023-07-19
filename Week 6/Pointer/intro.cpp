#include <iostream>
using namespace std;

int main(){

    // Pointer is a variable that stores address of another variable
    int a = 5;
    int* ptr = &a; // &a refer the address of a

    // access the value ptr is pointing to
    cout<<"Address of a is: "<< &a << endl;
    cout<<"Value stored at ptr is:  "<<ptr << endl;
    cout<<"Value ptr is pointing to is: "<< *ptr <<endl;

    cout<<sizeof(ptr)<<endl;

    char ch = 'a';
    char* c = &ch;
    cout<<sizeof(c)<<endl;

    double dtr = 1.31;
    double* d = &dtr;
    cout<<sizeof(d)<<endl;

    cout<<"-------------------------"<<endl;

    int b = 6;
    int* p = &b;
    // copy pointer
    int* dusraPtr = p; 
    cout<< *p <<endl;
    cout<< *dusraPtr <<endl; 

    return 0;
}