#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<cmath>

using namespace std;


vector<int> simpleSieve(int n){
    vector<bool> isPrime(n+1,true);
    vector<int> ans;
    for(int p=2;p*p<=n;p++){
        if(isPrime[p]){
            for(int i=p*p;i<=n;i+=p){
                isPrime[i]=false;
            }
        }
    }

    for(int i=2;i<n;i++){
        if(isPrime[i]) ans.push_back(i);
    }

    return ans;
}

void segmentedSeive(int l,int r){
    int limit=sqrt(r);
    vector<int> primes=simpleSieve(limit);
    vector<int> isPrime(r-l+1,true);

    // int start=max(prime*prime,(l+prime-1)/prime*prime)

    for (int prime:primes){
            int start = max(prime * prime, (l + prime - 1) / prime * prime);
        for(int i=start;i<=r;i+=prime){
            isPrime[i-l]=false;
        }
    }
  
  for(int i=0;i<=r-l;i++){
    if(isPrime[i] && (i + l) > 1){
        cout<<i+l<<" ";
    }
  }
    
}

int main(){

// int n=50;
int l=100;
int r=120;
segmentedSeive(l,r);
// vector<int> primes=simpleSieve(n);
// for(int i=0;i<primes.size();i++){
//     cout<<primes[i]<<" ";
// }

}