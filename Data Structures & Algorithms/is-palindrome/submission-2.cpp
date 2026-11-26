class Solution {
public:
    bool isPalindrome(string s) {
            
            for(int i = 0; i < s.size(); i++){
                char ch = s.at(i);
                if (ch >= 'A' && ch <= 'Z')
                {   ch = ch + 32;
                    s[i] = ch;
                }
            }
            for(int i = 0; i < s.size(); i++){
                char ch = s.at(i);  
                if(!(ch >='a' && ch <='z' )){
                    s.erase(i, 1);
                }
            }
            bool isEvenLength = s.size()%2 == 0;
            cout << s <<endl;
            cout<<isEvenLength<<"EVEN LENGTH"<<endl;
            for(int i = 0; i < s.size(); i++){
                // if(!isEvenLength){
                //     if(s.at(i) != s.at(s.size() - 1)){
                //         return false;
                //     } else {
                //         continue;
                //     }
                // }else{
                //     if(s.at(i) != s.at(s.size() - 1)){
                //         return false;
                //     }
                // }
                if(isEvenLength){
                    if(s.at(i) != s.at(s.size() - 1)){
                        return false;
                    }
                }
                return true;
            }
    }
};
