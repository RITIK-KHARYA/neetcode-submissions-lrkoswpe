class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int r = 0; r < matrix.size(); r++) {
           // if value within matrix is empty 
            if (matrix[r].size() == 0) {
                continue;
            }
            int low =0;
            int high =matrix[r].size()-1;
            int mid;
            while(high>=low){
                int mid = (high+low)/2; // can do low+(high-low)/2
                if(target == matrix[r][mid]){
                    return true;
                }
                else if(target > matrix[r][mid]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
          
            }
        }
  return false;
    }
};
