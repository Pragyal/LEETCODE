class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==0)
                c++;
        nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());  
        while(c--)
            nums.push_back(0);
    }
};