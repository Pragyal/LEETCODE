class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans=i;
            }
        }
        if(ans==-1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(target<nums[i]){
                    ans=i;
                    break;}
            }
        }
        if(ans==-1)
        {
            if(target>nums[nums.size()-1])
                ans=nums.size();
        }
        return ans;
    }
};