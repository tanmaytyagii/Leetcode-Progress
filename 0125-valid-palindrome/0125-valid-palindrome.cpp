class Solution {
public:
    bool isPalindrome(string s) {
        string clean ="";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                clean+=tolower(s[i]);
            }

        }
        string rev ="";
        for(int i=clean.size()-1; i>=0; i--){
            rev+=clean[i];
        }
        return clean==rev;
        
    }
};