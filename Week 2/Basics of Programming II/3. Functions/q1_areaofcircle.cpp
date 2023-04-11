#include <iostream>
using namespace std;

float areaCircle(int r){
    float pi=3.14;
    float area = pi*r*r;
    return area;
}

int main(){
    int r;
    cout<<"Enter r: ";
    cin>>r;
    

    float area = areaCircle(r);
    cout<<"Area of circle is: "<< area <<endl;

    return 0;
    
}