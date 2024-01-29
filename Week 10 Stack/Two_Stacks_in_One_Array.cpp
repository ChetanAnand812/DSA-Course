#include <iostream>
#include <stack>
using namespace std;

class Stack {
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this-> size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2 - top1 == 1){
            // space not available
            cout << "Stack 1 overflow" <<endl;
        }
        else{ 
            // space available
            top1++;
            arr[top1] = data;
        }
    }

    void pop1(){
        if(top1 == -1){
            // stack is empty
            cout<<"Stack 1 underflow, cant delete element" << endl;
        }
        else{
            // stack is not empty
            top1--;
        }
    }

    void push2(int data){
        if(top2 - top1 == 1){
            // space not available
            cout << "Stack 2 overflow" <<endl;
        }
        else{ 
            // space available
            top2--;
            arr[top2] = data;
        }
    }

    void pop2(){
        if(top2 == size){
            // stack is empty
            cout<<"Stack 2 underflow, cant delete element" << endl;
        }
        else{
            // stack is not empty
            top2++;
        }
    }

    void print(){
        for(int i=0; i<size; i++){
            cout<< arr[i] << " ";
        }
        cout<<endl;
    }

};

int main(){
    Stack s(10);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);

    s.push2(100);
    s.push2(120);
    s.push2(130);
    s.push2(140);
    s.push2(150);

    s.print();

    s.pop1();
    s.print();

    s.pop2();
    s.print();
    
    return 0;
}