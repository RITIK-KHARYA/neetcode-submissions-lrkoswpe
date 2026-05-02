class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {

        // khhud ka answer 


        // int low = 0;
        // sort(piles.begin(),piles.end());
        // int high = piles.size() - 1;
        // int totalrem= piles[high];
        // if(piles.size() == h){
        //     return totalrem;
        // }
        // while (high >= low) {
        //     int mid = (low + high) / 2;
        //     for (int k : piles) {
        //         int totalrem =+ ceil(static_cast<double>(mid / k));
        //     }
        //     if (totalrem < h) {
        //         high = mid - 1;
        //     } else {
        //         low = mid + 1;
        //     }
        // }
        // return totalrem;
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r) {
            int k = (l + r) / 2;

            long long totalTime = 0;
            for (int p : piles) {
                totalTime += ceil(static_cast<double>(p) / k);
            }
            if (totalTime <= h) {
                res = k;
                r = k - 1;
            } else {
                l = k + 1;
            }
        }
        return res;
    }
};

