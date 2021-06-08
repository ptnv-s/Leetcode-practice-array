class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> checkmap;
        for(int i=0; i<nums.size(); i++){
            checkmap[ nums[i] ]++;
            if( checkmap[ nums[i] ] > nums.size()/2 ) 
                return nums[i];
        } return nums[0];
    }
};