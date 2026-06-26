class Solution {
public:
    double angleClock(double hour, double minutes) {
        hour = fmod(hour , 12) * 30 + minutes * .5;
        minutes = minutes* 6;
        double angle= abs(hour - minutes);
        return min( angle , 360-angle);

        
    }
};