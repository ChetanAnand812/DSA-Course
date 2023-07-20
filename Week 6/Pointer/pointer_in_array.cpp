#include<iostream>
using namespace std;

int main(){
    int arr[4] = {12,44,66,18};

    cout<< arr[0] <<endl;
    cout<< arr <<endl;
    cout<< &arr <<endl;
    cout<< &arr[0] <<endl;

    cout<<"------------------------"<<endl;

    int* p = arr;
    cout<< p <<endl;
    cout<< &p <<endl;

    cout<<"------------------------"<<endl;

    cout<< *arr <<endl;
    cout<< arr[0] <<endl;
    cout<< *arr + 1 <<endl;
    cout<< *(arr) + 1 <<endl;
    cout<< *(arr + 1) <<endl;
    cout<< arr[1] <<endl;
    cout<< *(arr + 2) <<endl;
    cout<< arr[2] <<endl;
    cout<< *(arr + 3) <<endl;
    cout<< arr[3] <<endl;

    return 0;
}