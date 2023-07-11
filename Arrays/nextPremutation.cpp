class Solution {
private:
    void reverse(vector<int> &permutation, int beg, int end){
    while(beg <= end){
        swap(permutation[beg], permutation[end]);
        beg++;
        end --;
    }
}
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        for(int i = n-1; i > 0 ; i-- ){
            if(nums[i] > nums[i-1]){
                ind = i-1;
                break;
            }
        }

        if(ind == -1){
            reverse(nums, ind+1,n-1);
        }
        else{
            for(int i = n-1; i > 0 ; i-- ){
                if(nums[i] > nums[ind]){
                    swap(nums[i],nums[ind]);
                    break;
                }
            }
            reverse(nums,ind+1, n-1);
        }
    }
};
