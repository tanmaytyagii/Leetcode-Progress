class Solution {
public:
    int minimumPushes(string word) {
        int answer =0;
        for(int i =0; i<word.length(); i++){
            answer = answer + (i/8+1);
        }
        return answer;
    }
};