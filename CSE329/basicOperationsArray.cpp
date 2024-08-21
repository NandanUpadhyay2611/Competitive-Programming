#include<iostream>
using namespace std;
void insert(int arr[],int* n,int pos,int key){
    (*n)++;
    for(int i=(*n-1);i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=key;
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
        int arr[100]={1,2,3,4,5,6,7,8,9,10};
        int n=10;
        int pos,key;
        cout<<"Enter key: ";
        cin>>key;
        cout<<endl;
        cout<<"Enter Position to insert: ";
        cin>>pos;
        insert(arr,&n,pos,key);
        print(arr,n);
        
}