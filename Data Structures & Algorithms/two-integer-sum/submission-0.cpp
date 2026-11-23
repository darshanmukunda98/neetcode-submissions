class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
    for(int i = 0;i < nums.size(); i++){
        int first = nums.at(i);
        for(int j = 0; j < nums.size(); j++){
            int second = nums.at(j);
            if(i != j && first+second == target){
                indices.push_back(i);
                indices.push_back(j);
                return indices;
            }
        }
    }
    return indices;
    }
};
