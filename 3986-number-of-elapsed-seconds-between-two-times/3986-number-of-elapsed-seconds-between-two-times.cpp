class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int totalst = 3600 * stoi(s.substr(0, 2))+ 60 * stoi(s.substr(3, 2)) + stoi(s.substr(6, 2));
        int totalet = 3600 * stoi(e.substr(0, 2))+ 60 * stoi(e.substr(3, 2))+ stoi(e.substr(6, 2));
        return totalet - totalst;
    }
};