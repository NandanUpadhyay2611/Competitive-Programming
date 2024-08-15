
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;



class Solution{
    public:

    int findPlatform(int arr[], int dep[], int n)
    {
        
    int maxPlat=1;
    int platNeeded=1;
    sort(arr,arr+n);
    sort(dep,dep+n);
    
    int i=1; // because no train would have arrived before first train;
    int j=0;
    while(i<n && j<n){
        
        if(arr[i]<=dep[j]){
            platNeeded++;
            i++;
        }
        else{
            platNeeded--;
            j++;
        }
        
        maxPlat=max(platNeeded,maxPlat);
    }
    
    return maxPlat;
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
