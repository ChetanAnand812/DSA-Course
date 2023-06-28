#include <iostream>
using namespace std;

double findSqrt(double n){
    double s = 0;
    double e = n;
    double mid = s + (e-s) / 2;
    double precision = 0.00001;  // Precision for accuracy

    while(e-s > precision){
        if(mid*mid == n){
            return mid;
        }
        if(mid*mid > n){
            // left search
            e = mid;
        }
        else{
            // right search
            s = mid;
        }
        mid = s +(e-s)/2;
    }
    return mid;
}

int main(){
    double n;
    cout<<"Enter N: "<<endl;
    cin>>n;

    double ans = findSqrt(n);
    cout<<"Ans is: "<<ans<<endl;

    return 0;

}