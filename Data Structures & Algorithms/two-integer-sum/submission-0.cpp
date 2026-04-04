class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        if(size==0){
            return {0};
        }else if(size==1){
            if(nums[1]==target){
                return {1};
            }
        }
        for( int i = 0; i<size;i++){
            for(int j = i+1; j<size;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
    }
};
