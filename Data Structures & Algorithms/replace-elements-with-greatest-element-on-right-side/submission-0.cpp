class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i = 0; i < arr.size()-1; i++){
            arr.at(i) = greatest(arr, i);
        }
        arr.at(arr.size()-1) = -1;
        return arr;
    }
    int greatest(vector<int>& arr, int index){
        int max = arr.at(index+1);
        for(int i = index+1; i < arr.size() ; i++){
            if(arr.at(i) > max){
                max = arr.at(i);
            }
        }
        return max;
    }
};