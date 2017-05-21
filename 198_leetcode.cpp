class Solution {
public:
    int max(int a, int b){
        return (a>b)?a:b;
    }

    int rob(vector<int>& nums) {
        int currMax = 0;
        int prevMax = 0;
        for(int i = 0; i < nums.size(); i++){
            int temp = currMax;
            currMax = max(prevMax+nums[i], currMax);
            prevMax = temp;
        }
        return currMax;
    }
};
