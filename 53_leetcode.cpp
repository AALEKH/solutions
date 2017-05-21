class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0, j = 0, maxValue = INT_MIN, interCounter = 0, size;
        // maxValue = interCounter;
        size = nums.size();
        while(i < size) {
            j = i;
            while(j < size) {
                interCounter = interCounter + nums[j];
                if(interCounter > maxValue) {
                    maxValue = interCounter;    
                }
                j++;
            }
            interCounter = 0;
            i++;
        }
        // if(interCounter > maxValue) {
        //     maxValue = interCounter;
        // }
        return maxValue;
    }
};
