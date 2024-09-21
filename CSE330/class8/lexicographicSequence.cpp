#include<iostream>
#include<vector>
using namespace std;


void helper(int num,int n,vector<int>& res){
    if(num>n) return;

    res.push_back(num);

    for(int i=0;i<=9;i++){
        if((num*10+i)>n) return;

        helper(num*10+i,n,res);
    }
}

    int main() {

        int n;
        cout<<"Input n: ";
        cin>>n;
        vector<int> res;

        for(int i=1;i<=9;i++){
            helper(i,n,res);
        }

        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
            }