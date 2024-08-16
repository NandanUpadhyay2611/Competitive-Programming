#include<iostream>
using namespace std;

int summ(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    
    
    return sum;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // int sum=summ(n);

    int result=(n*(n+1))/2;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<result;
}