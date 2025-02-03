#include <vector>

class Solution {
public:
    int longestIncreasing(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 1;
        
        int count, result = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            count = 1;
            while (i + 1 < nums.size() && nums[i] < nums[i + 1])
                count++, i++;
            if (count >= result)
                result = count;
        }
        return result;
    };

    int longestDecreasing(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 1;
        
        int count, result = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            count = 1;
            while (i + 1 < nums.size() && nums[i] > nums[i + 1])
                count++, i++;
            if (count >= result)
                result = count;
        }
        return result;
    };

    int longestMonotonicSubarray(vector<int>& nums) {
        int resultOfIncreasing = this->longestIncreasing(nums);
        int resultOfDecreasing = this->longestDecreasing(nums);
        if (resultOfDecreasing > resultOfIncreasing)
            return resultOfDecreasing;
        return resultOfIncreasing;
    }
};