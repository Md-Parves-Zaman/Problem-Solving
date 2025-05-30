class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // {NULL}  -> Don't do any thing and return 0
        if (nums.empty()){
            return 0;
        }

        //{0,0,1,1,1,2,2,3,3,4}

        //{0,1,2,3,4,2,2,3,3,4}
        //         u         i

        //{0,1,2,3,4,_,_,_,_,_}
        int l_U_Index=0;

        for(int i=1;i<nums.size();i++){
            if(nums[l_U_Index]!=nums[i]){
                l_U_Index++;
                nums[l_U_Index]=nums[i];
            }
        }
        //Time Complexity= O(n)
        //Space Complexity= O(1)

        return l_U_Index+1;
    }
};
