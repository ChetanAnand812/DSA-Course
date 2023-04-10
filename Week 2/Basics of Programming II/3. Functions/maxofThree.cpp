#include <iostream>
using namespace std;

int maxofThree(int x,int y,int z){

    if(x>y && x>z){
        return x;
    }
    else if(y>x && y>z){
        return y;
    }
    else{
        return z;
    }
}

int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;
    int c;
    cout<<"Enter c: ";
    cin>>c;

    int max = maxofThree(a,b,c);
    cout<<"Maximum number is: "<< max <<endl;

    return 0;
    
}