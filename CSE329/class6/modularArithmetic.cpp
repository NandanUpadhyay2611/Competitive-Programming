#include<iostream>
using namespace std;

int main(){
    int a=56;
    int b=67;
    int m=79;
cout<<(a*b)%m<<endl;
    cout<<((a%m)*(b%m))%m;
}