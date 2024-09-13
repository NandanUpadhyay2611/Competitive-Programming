#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int helper(vector<int> lsa,vector<int> rsa,int n){
    
    int i=0;
    int j=0;
   while(i<n && j<n){
       
       if(lsa[i]>rsa[i]) return i;
       
       i++;
       j++;
   }
    
    return -1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n; //size
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> lsa(n,0);
    vector<int> rsa(n,0);
    for(int i=1;i<n;i++){
        lsa[i]=lsa[i-1]+arr[i-1];}
    
    for(int i=n-2;i>=0;i--){
        rsa[i]=rsa[i+1]+arr[i+1];
    }
    int res=helper(lsa,rsa,n);
    cout<<res;
    return 0;
}
