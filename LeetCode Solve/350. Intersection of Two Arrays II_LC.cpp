class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // Use a hashmap to store counts of numbers in nums1
        unordered_map<int, int> hashMap;

        // Populate the hash map with counts from nums1
        for(int num : nums1){
            hashMap[num]++;
        }

        vector<int> result;

        // Iterate through nums2 and check if the numbers exist in the hash map
        for(int num : nums2){
            if(hashMap.find(num) != hashMap.end() && hashMap[num] > 0) {
                result.push_back(num);
                hashMap[num]--;
            }
        }
        // Time Complexity: O(n)
        // Space Complexity: O(n)
        return result;
    }
};
