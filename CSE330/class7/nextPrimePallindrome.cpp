#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;


bool isPrime(int n){
    if (n <= 1) return false;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false; 
    }

    return true;
}
int main(){
    int n=132;
    
    // if(stoi(s)==n) cout<<"true"<<" "<<s<<" "<<n<<endl;

    // cout<<"false"<<" "<<s<<" "<<n;

int next=n;
    while(true){
       
        string s=to_string(next);
        string reversedS=s;
        reverse(reversedS.begin(),reversedS.end());

        if(isPrime(next) && reversedS==s){
            cout<<next<<" ";
            break;
        }
     next++;
    }
}