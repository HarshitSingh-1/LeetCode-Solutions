class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if (n == 0) return;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            arr[j]=nums[j];
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[(n-k+i)%n];
        }
    }
};