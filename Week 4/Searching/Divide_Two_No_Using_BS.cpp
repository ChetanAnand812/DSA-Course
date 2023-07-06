#include<iostream>
using namespace std;

int solve(int dividend, int divisor){
    int s = 0;
    int e = dividend;
    int ans = 0;
    int mid = s + (e-s)/2;

    while(s <= e){
        // perfect solution
        if(mid*divisor == dividend) {
            return mid;
        }
        // not perfect solution
        if(mid*divisor > dividend){
            // left search 
            e = mid - 1;
        }
        else{
            // ans store, rigth search
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int dividend;
    cout<<"Enter dividend: "<<endl;
    cin>>dividend;
    int divisor;
    cout<<"Enter divisor: "<<endl;
    cin>>divisor;

    int ans = solve(dividend, divisor);
    cout<<"Ans is "<< ans <<endl;
    return 0;
}
