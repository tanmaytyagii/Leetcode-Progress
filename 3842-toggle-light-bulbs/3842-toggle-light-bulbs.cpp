class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int hash[101] = {0};
        for(int i=0; i<bulbs.size(); i++){
            hash[bulbs[i]]+=1;
        }
        vector<int> answer;
        for(int i=1; i<101; i++){
            if(hash[i] % 2 != 0) {
                answer.push_back(i);
            }
        }
        return answer;

    }
};