class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int maxZero = 0, count = 0, start = 0, lastSet = -1;
        while(start < seats.size()) {
            if(seats[start]) {
               if(lastSet == -1) /* means zero on left side*/
                   maxZero = start;
               else
                   maxZero = max(maxZero, (start - lastSet) >> 1); /*center position*/
               lastSet = start;
            }
            start++;
        }
        maxZero = max(maxZero, ((int)seats.size() - 1 - lastSet)); /* means zero on the right side */
        
        return maxZero;
    }
};