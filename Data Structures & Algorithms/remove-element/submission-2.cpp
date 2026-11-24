class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        vector<int> numbers;
        for(int i = 0; i < nums.size(); i++){
            int number_at_index = nums.at(i);
            if(number_at_index != val)
                numbers.push_back(number_at_index);
        }
        nums = numbers;
        return numbers.size();
    }
};