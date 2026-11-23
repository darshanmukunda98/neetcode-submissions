class Solution {
public:
    bool isAnagram(string s, string t) {

        //anagram is checking frequency of each character in both the strings given are the same
        //1. use two maps for each string and store character as strings, and the key as number as count of the occurences, and check equality of the keys and the values of the both maps
        //2. two sorted strings, matches, ANAGRAM
        map<string, int> str1 = {};
        map<string, int> str2 = {};

        if(s.size() == t.size()){
            for(int i = 0; i < s.size(); i++){
                string ch1 = string(1, s[i]);
                if(str1.count(ch1) == 1){
                    str1.insert({ch1, ++str1.at(ch1)});
                } else {
                    str1.insert({ch1, 1});
                }

                string ch2 = string(1, t[i]);
                if(str2.count(ch2) == 1){
                    str2.insert({ch2, ++str2.at(ch2)});
                } else {
                    str2.insert({ch2, 1});
                }
            }
            for (auto i : str1){
                cout<< i.first << " : " << i.second << endl;
            }

            if(str1 == str2)
                return true;
            else
                return false;
        }else{
            return false;
        }
    }
};
