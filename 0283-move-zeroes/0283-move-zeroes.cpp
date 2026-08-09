class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int >n(nums.size(),0);
        int i = 0;  
        int j=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            n[j]=nums[i];
            j++;
        }
     }
     nums=n;
    }
};
         












//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != 0) {
//                 nums[j++] = nums[i];
//             }
//         }

//         while (j < nums.size()) {
//             nums[j++] = 0;
//         }
//     }
// };
