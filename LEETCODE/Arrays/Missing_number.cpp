class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans;
        for(int i=0;i<=nums.size();i++)
        {
            vector<int>::iterator j=find(nums.begin(),nums.end(),i);
            if(j==nums.end())
                ans=i;
        }
        return ans;
    }
};