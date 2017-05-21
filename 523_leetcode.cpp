class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(k != 0){
            int sum = 0;
            for(int i = 0; i < nums.size()-2; i++){
                sum = nums[i]+nums[i+1];
                if((sum)%k==0) return true;
                for(int j = i+2; j < nums.size(); j++){
                    sum = sum + nums[j];
                    if(sum%k == 0) return true;
                }
                sum = 0;
            }   
        }
        return (nums)false;
    }
};

PS: Handles everthing except the stupid [0,0] & k=0 type of conditions, really annoying test cases
