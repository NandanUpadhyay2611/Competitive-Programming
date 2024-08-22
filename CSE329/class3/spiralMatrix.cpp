#include<iostream>
#include<vector>
using namespace std;

void printSpiral(vector<vector<int>> &v,int r,int c){

    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<v[top][i]<<" ";
        }
        top++;

        for(int i=top;i<=bottom;i++){
            cout<<v[i][right]<<" ";
        }

        right--;


if(top<=bottom){
        for(int i=right;i>=left;i--){
            cout<<v[bottom][i]<<" ";
        }
        bottom--;
}
        if(left<=bottom){
        for(int i=bottom;i>=top;i--){
            cout<<v[i][left]<<" ";
        }
       
        left++;
         }
    }
}

int main(){
    // vector<vector<int>> arr={{2,3,4,5},{5,6,7,8},{8,9,5,4},{2,5,7,9}};
       vector<vector<int>> arr={{2,3,4,5,6,7,8}};
    printSpiral(arr,1,7);

    // for(int i=0;i<arr.size();i++){
    //     for(int )
    // }
}
// 2 3 4 5 6 7 8 7 6 5 4 3 2 