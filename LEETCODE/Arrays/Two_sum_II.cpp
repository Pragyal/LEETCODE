class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size()-1;
        int j=0;
        vector<int> ans;
        while(j<n)
        {
            if(numbers[j]+numbers[n]==target)
            {
                ans.push_back(j+1);
                ans.push_back(n+1);
                break;
            }
            else if(numbers[j]+numbers[n]<target)
                j++;
            else
                n--;
        }
        return ans;
    }
};