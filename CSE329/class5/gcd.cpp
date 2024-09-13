#include<iostream>
using namespace std;

int gcd(int divisor,int dividend){
    if(divisor==0) return dividend;

    return gcd(dividend%divisor,divisor);
}
int main(){

   

    cout<<gcd(25,35);
}