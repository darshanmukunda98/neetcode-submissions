class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        vector<int> numbers;
        for(int i = 0; i < nums.size();i++){
            if(nums.at(i) == val){
                nums.at(i) = 0;
            }
            if(nums.at(i) != 0 && nums.at(i) != val){
                numbers.push_back(nums.at(i));
                k++;
            }
            
        }
        nums = numbers;
        return k;
        
    }
};