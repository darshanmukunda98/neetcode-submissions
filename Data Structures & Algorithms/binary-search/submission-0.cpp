class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size();

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(target == nums.at(mid))
                return mid;
            if(target > nums.at(mid))
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};
