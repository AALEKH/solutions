class NumArray {
public:
    vector<int> elements;
    NumArray(vector<int> nums) {
        for(int j = 0; j < nums.size(); j++){
            elements.push_back(nums[j]);
        }
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
        for(int h = i; h <= j; h++){
            sum = sum+elements[h];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
