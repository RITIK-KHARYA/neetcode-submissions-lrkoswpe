class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        vector<int> arr;
        for(int i=0;i<size;i++){
            // if(numbers[i]==target){
            //     continue;
            // }
            for( int j =i+1;j<size;j++){
                if(numbers[i]+numbers[j]==target){
                    arr.push_back(i+1);  
                    arr.push_back(j+1); 
                    
                }
            }
        }
        return arr;
    }
};
