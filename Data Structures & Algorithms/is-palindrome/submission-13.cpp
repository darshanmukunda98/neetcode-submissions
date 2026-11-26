class Solution {
public:
    bool isPalindrome(string s) {
            
            for(int i = 0; i < s.size(); i++){
                char ch = s.at(i);
                if(ch == ' '){
                    s.erase(i, 0);
                }
                if (ch >= 'A' && ch <= 'Z')
                {   ch = ch + 32;
                    s[i] = ch;
                }
            }
            for(int i = 0; i < s.size(); i++){
                char ch = s.at(i);  
                if(!(ch >='a' && ch <='z')){
                    s.erase(i, 1);
                }
            }
            bool isEvenLength = s.size()%2 == 0;
            cout << s <<endl;
            cout<<isEvenLength<<"EVEN LENGTH"<<endl;
            vector<char> partSentence;
            for(int i = 0; i < s.size(); i++){
                int j = s.length() - i - 1;
                    cout << s.at(i) << " == " << s.at(j) <<  " " << (s.at(i) != s.at(j)) <<endl;
                    if(s.at(i) != s.at(j) && i != j){
                        return false;
                    }
            }
            return true;
    }
};
