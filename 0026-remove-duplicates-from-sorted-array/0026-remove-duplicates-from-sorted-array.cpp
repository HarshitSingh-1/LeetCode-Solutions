class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n);
        int k=0;
        int x=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    x=1;
                }
            }
            if(x==0){
                a[k]=nums[i];
                k++;
            } x=0;
        }
        for(int i=0;i<k;i++){
            nums[i]=a[i];
        }
        return k;
    }
};