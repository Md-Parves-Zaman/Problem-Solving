class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int finder=0;
        for(int i=0;i<nums.size();i++){

            //x-or operation can remove a pair number
            finder^=nums[i];
        }
        return finder;
        //Time Complexity= O(n)
        //Space Complexity= O(1)
    }
};
