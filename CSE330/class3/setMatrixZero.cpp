#include<iostream>
#include<vector>

using namespace std;

void setZero(vector<vector<int>> arr){

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[i][j]==0){
                for(int k=0;k<arr.size();i++){
                    arr[k][j]=-1;

                }

                for(int c=0;c<arr.size();c++){
                    arr[i][c]=-1;
                }
            }
        }
    }

}
int main(){

}