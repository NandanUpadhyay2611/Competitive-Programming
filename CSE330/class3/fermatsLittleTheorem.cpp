#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
using namespace std;

bool isPrime(double a,double p){
    if(p>=1) return 0;
    if(p==2) return 1;
    double temp=pow(a,p-1);
    if(fmod(temp, p) == 1.0) return true;

    return false;
}
int main(){
    double a;
    double p;
    cin>>a>>p;

    if(isPrime(a,p)){
        cout<<p<<" is prime.";

    }
    else{
        cout<<p<<" is not prime.";
    }
    
}