class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int e = 0; e < (int)nums.size() - 2; e++) {

            // Skip duplicate values for the fixed element
            if (e > 0 && nums[e] == nums[e - 1]) continue;

            int left = e + 1;               // <-- pointer starting after e
            int right = nums.size() - 1;    // <-- pointer starting at end

            while (left < right) {          // Two pointers move toward each other
                int sum = nums[e] + nums[left] + nums[right];

                if (sum == 0) {
                    res.push_back({nums[e], nums[left], nums[right]});

                    // Skip duplicates for left and right
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
                else if (sum < 0) left++;   // Sum too small, move left up
                else right--;               // Sum too large, move right down
            }
        }
        return res;
    }
};



    // sort(nums.begin(), nums.end());
    //     vector<vector<int>> res;
    //     int sum=0;
    //     for(int e=0;e<nums.size();e++){
    //         int right = nums.size() -1;
    //        while(nums[right]>nums[e]){
    //          for(int k=e+1; k<nums.size();k++){
    //             if(e>0 && nums[e] == nums[k]) continue;
    //             sum = nums[right] + nums[e] + nums[k];
    //             if(sum == 0){
    //                 // vector, set insertion figure here
    //                  res.push_back({nums[right], nums[e], nums[k]});
    //                  right--;
    //             }
    //             else if(sum>0){
    //                 // condition incase left or right ( either of them is greater then e)
    //                 k++;
    //                 right--;
    //             }
    //         }
    //         if(nums[right] == nums[k] && nums[k] == 2*nums[right] ){
    //             res.push_back({nums[right], nums[e], nums[k]});
    //         }
    //        }
    //     }

    // return res;







//         set<vector<int>> res; // new data type here 
//         sort(nums.begin(),nums.end());
//         pair<int,int> initial = {nums[0], 0};
//         for(int i=intial+1;i<nums.size();i++){  //since intial value is already declared
//             for(int j=nums.size()-1;i<=0;j++){
//                 //duplicate condition should also be there
                
//                 if (intial != nums[i] ){
//  if(nums[i]+nums[j]+intial == 0){
//                     res.insert({nums[i],nums[j],intial});
//                     intial++;
//                 }
//                 }
               
//             }
//         }
//      return vector<vector<int>>(res.begin(), res.end());