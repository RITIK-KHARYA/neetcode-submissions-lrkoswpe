class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size());

        for(int i=0; i<nums.size();i++){
            int prev=1;
            for(int j =0;j<nums.size();j++){
                if(i==j) continue;
                prev*=nums[j];
                cout<<prev<<endl;
            }
    arr[i]=prev;
        }
        return arr;
    }
};
