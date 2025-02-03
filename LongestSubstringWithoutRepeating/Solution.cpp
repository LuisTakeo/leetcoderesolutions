class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() <= 1)
            return s.size();
        
        std::stringstream ss;
        ss.str("");
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int j = i;
            while (j < s.size() && !strchr(ss.str().c_str(), s[j]))
                ss << s[j++];
            count = ss.str().size() > count ? ss.str().size() : count;
            ss.clear();
            ss.str("");
            
        }
        return count;
    }
};