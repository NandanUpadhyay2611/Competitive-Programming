#include<iostream>
#include<vector>
using namespace std;
void subsetSum(vector<int>& res,vector<int> set,int sum,int idx){
    if(idx>=set.size()){
        res.push_back(sum);
        return;
    }

    subsetSum(res,set,sum+set[idx],idx+1);
    subsetSum(res,set,sum,idx+1);

}

int main(){

    vector<int> res;
    vector<int> set={3,1,2};
    int sum=0;
    subsetSum(res,set,sum,0);
    for(int i:res){
        cout<<i<<" ";
    }
}