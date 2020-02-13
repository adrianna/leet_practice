class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> indices;
        map<int, int> index2digit;

        int complement;

        for (int idx=0; idx < nums.size(); idx++)
        {
            complement = target - nums[idx];

            if ( index2digit.find(complement) != index2digit.end() )
               {
                    indices.push_back(index2digit[complement]);
                    indices.push_back(idx);
                    break;
               }
               
            index2digit[nums[idx]] = idx;
       }
    return indices;
        
    } 
};
