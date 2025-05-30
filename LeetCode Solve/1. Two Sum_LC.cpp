class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // [2,7,11,15]
        //  i
        // unordered_map -> (key:Number found,value:index)
        // Cheak it unordered_map contain the key of 11-nums[i]
        //If it doesn't, insert nums[i] into unordered_map with its corresponding index
        unordered_map<int,int>numbers;
        for(int i=0;i<nums.size();i++){
            if(numbers.find(target-nums[i])!=numbers.end()){
                return {numbers[(target-nums[i])], i};
            }
            numbers[nums[i]]=i;
        }
        //Time Complexity: O(n)
        //Space Complexity: O(n)
        return {};
    }
};
