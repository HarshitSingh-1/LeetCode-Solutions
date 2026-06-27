class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int x=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    x=1;
                }
            }
            if(x==0){
                nums[k]=nums[i];
                k++;
            } x=0;
        }
        return k;
    }
};