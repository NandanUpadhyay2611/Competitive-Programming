#include<iostream>
using namespace std;


void leftRotate(int arr[],int r,int n){
 r=r%n;
    //rotate left by k
    // reversse first n-r elements
    // rotate last r elements
    //reverse wholeArray

    for(int i=0,j=n-r-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }

    for(int i=n-r,j=n-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }

    for(int i=0,j=n-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }


}

void print(int arr[],int n){
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int r=3;
   leftRotate(arr,r,n);
    print(arr,n);


    
}