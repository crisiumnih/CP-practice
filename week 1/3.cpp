// https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> count;
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }
        int maxnum, coun = 0;
        for (auto& n : count) {
            if (n.second > coun) {
                maxnum = n.first;
                coun = n.second;
            }
        }
        return maxnum;
    }
};
