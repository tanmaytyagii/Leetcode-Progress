class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long long ans =1;
        for(int i=0; i<=rowIndex; i++){
            if(i==0 || i==rowIndex){
                result.push_back(1);
            }
            else{
                ans = ans*(rowIndex-i+1);
                ans= ans/i;
                result.push_back(ans);
            }
        }
        return result;
    }
};