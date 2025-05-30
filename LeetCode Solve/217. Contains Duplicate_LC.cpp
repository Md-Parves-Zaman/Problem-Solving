class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // [1,2,3,1]
        //        i -> positioned i value already exist
        // U_O_S= [1,2,3]
        unordered_set<int> numbers;
        for(int i=0;i<nums.size();i++){
            if(numbers.find(nums[i])!= numbers.end()){
                return true;
            }
            numbers.insert(nums[i]);
        }
        return false;
    }
    //Time Complexity: O(n)
    //Space Complexity: O(n)
};
