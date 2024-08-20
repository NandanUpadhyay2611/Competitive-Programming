#include<iostream>
using namespace std;
int main(){
    int arr[]={0,10,5,7,6,2};
    int n=6;
int peak=-1;
    if(arr[0]>=arr[1]) peak=0;
    else if(arr[n-1]>=arr[n-2]) peak=n-1;

    if(peak==-1){
    for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){ peak=i; break;}
    }

    }

    cout<<peak;
}