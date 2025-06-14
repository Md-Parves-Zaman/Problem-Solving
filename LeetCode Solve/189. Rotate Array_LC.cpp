class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k % nums.size();
        //[1,2,3,4,5,6,7] -> [7,6,5,4,3,2,1]
        revarse(nums,0,nums.size() - 1);

        //[7,6,5,4,3,2,1] -> [5,6,7,4,3,2,1]
        revarse(nums,0,k-1);

        //[5,6,7,4,3,2,1] -> [5,6,7,1,2,3,4]
        revarse(nums,k,nums.size() - 1);
    }
public:
    void revarse(vector<int>& nums,int start,int end){
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
};
