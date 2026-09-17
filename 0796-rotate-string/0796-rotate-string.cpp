class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return 0;
        s+=s;
        int i=0;
        while(s[i]!='\0'){
            if(s[i]==goal[0]){
                int j=0,k=i;
                while(s[k]!='\0'&&goal[j]!='\0'){
                    if(s[k]!=goal[j]){
                        break;
                    }
                    j++;
                    k++;
                }
                if(j==goal.length()) return 1;
            }
            i++;
        }
        return 0;
    }
};