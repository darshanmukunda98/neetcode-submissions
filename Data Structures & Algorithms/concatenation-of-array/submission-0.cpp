class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            nums.push_back(nums.at(i));
        }
        return nums;
    }
};