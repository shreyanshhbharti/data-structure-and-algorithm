//For a decimal number n, its binary form has at most (log2n + 1) digits.  

#include<iostream>
using namespace std;

double binaryExponentiation(int x, int n){
    double ans = 1;
    long binForm =n;
    if(n<0){
        x=1/x;
        binForm=-binForm;
    }
    while (binForm>0){
        if(binForm % 2 == 1){
            ans *= x;
        }

        x *= x;
        binForm /= 2;
    }
    return ans;
}
int main (){
    int x=3, n=13;
    cout <<binaryExponentiation(x,n);
}