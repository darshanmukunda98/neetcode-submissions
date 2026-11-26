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
            cout<<s<<endl;
            for(int i = 0; i < s.size();){
                char ch = s.at(i);  
                if(!(ch >='a' && ch <='z')){
                    s.erase(i, 1);
                }else{
                    i++;
                }
            }
            bool isEvenLength = s.size()%2 == 0;
            cout << s <<endl;
            cout<<isEvenLength<<"EVEN LENGTH"<<endl;
            for(int i = 0; i < s.length(); i++){
                int j = s.length() - i - 1;
                cout << s.at(i) << " == " << s.at(j) <<  " " << (s.at(i) != s.at(j)) <<endl;
                if(s.at(i) != s.at(j)){
                    return false;
                }
            }
            return true;
    }
};
