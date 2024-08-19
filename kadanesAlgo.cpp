class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int maxSum=nums[0];
        int currSum=0;
int startIndex=-1;
int endIndex=-1;
int start=0;
        for(int i=0;i<nums.size();i++){

            if(currSum==0) start=i;  //which subarr

            if(currSum<0) currSum=0;

            currSum+=nums[i];

            if(currSum>maxSum){
                maxSum=currSum;
                startIndex=start; // for finding which sub array
                endIndex=i;
            }
            // maxSum=max(maxSum,currSum);
        }

        for(int i=startIndex;i<endIndex;i++){
            cout<<nums[i]<<" ";
        }
        return maxSum;
    }
};