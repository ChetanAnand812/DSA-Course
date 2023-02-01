#include <iostream>
using namespace std;

int main(){
    int P, R, T;
    cout<<"Enter value of P(initial principal balance): ";
    cin>>P;
    cout<<"Enter value of R(annual interest rate): ";
    cin>>R;
    cout<<"Enter value of T(time in years): ";
    cin>>T;

    int A = P*(1 + R*T);
    cout<<"Simple Interest: "<<A;
    return 0;
}