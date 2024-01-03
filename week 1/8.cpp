// https://leetcode.com/problems/largest-number/
class Solution {
public:
    static bool comp(string &a, string &b){
        string l = a+b;
        string h = b+a;
        
        return l>h;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> out;
        bool entirezero = true;
        for(auto &it:nums){
            if(it!=0) entirezero = false;
            string h = to_string(it);
            out.push_back(h);
        }
        sort(out.begin(),out.end(),comp);
        string output ="";
        for(auto &it:out){
            output += it;
        }
        if(entirezero) return "0";
        else{
            return output;
        }

        
    }
};
