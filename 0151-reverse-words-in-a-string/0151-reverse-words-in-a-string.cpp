class Solution {
public:
    string reverseWords(string s) {
        string answer = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++) {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word = word + s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (word != "") {
                answer = answer + ' ' + word;
            }
        }
        return answer.substr(1);
    }
};