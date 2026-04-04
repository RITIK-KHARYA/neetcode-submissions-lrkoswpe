class Solution {
public:
// this question can be solved creating array and adding the ascending array in that and 
// take out the length
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
       int intial = 1;
       int currentlength =1;

       if(nums.size()==0) return 0;
         for(int i =0;i<nums.size()-1;i++){
            if( nums[i+1]==nums[i]+1){
                // cout<<intial<<endl;
                currentlength++;
                intial=max(intial,currentlength);
            }else if(nums[i+1]==nums[i]){
                continue;
            }
            else{
                currentlength=1;
            }
        }
        return intial;
    }
};

// [1,2,3,100,101,102,103]
//max wali value will be selected 