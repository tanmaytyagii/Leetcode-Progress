class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        for(int i = 0; i < word.size(); i++) {
            freq[word[i] - 'a']++;
        }
        vector<int> v;
        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0) {
                v.push_back(freq[i]);
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        int answer = 0;
        for(int i = 0; i < v.size(); i++) {
            int pushes = (i / 8) + 1;
            answer += v[i] * pushes;
        }
        return answer;
    }
};