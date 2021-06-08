class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length=1;
        if(nums.size()>0)
        {
           for(int i = 1; i < nums.size(); i++)
            {
                if(nums[i-1]!=nums[i])
                {
                    nums[length]=nums[i];
                    length++;
                }
            }
            return length; 
        }
        else
        {
            return 0;
        }
    }
};