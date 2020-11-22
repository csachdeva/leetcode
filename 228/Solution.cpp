class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if(nums.size() == 0) return result;
        
        int start;
        for(int i = 0; i < nums.size(); i++) {
            start = nums[i];
            while((i < (nums.size() -1)) && ((nums[i] + 1) == nums[i+1])) i++;
                        
            string s = to_string(start);
            if(start != nums[i]) s += "->" + to_string(nums[i]);
            result.push_back(s);
        }
        
        return result;
    }
};