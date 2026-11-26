class Solution {
public:
    bool isPalindrome(string s) {
        vector<string> str;
        for(int i = 0; i< s.length(); i++){
            string ch = s.at(i)+"";
            if((ch >= 'A' && ch <= 'Z') ){
                str.push_back((ch + 32 +));
            }
        }
        for(string ch : str){
            cout << ch << endl;
        }
        cout << "\n" <<endl;
        int j = str.length()/2;
        for(int i = 0; i < j; i++){
            if(str.at(i) != str.at(j))
                return false;
        }
        return true;
    }
};
