class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0;
   int o = 0;
   int t = 0;
   int n = nums.size();

   for(int i = 0; i< n ; i++){
      nums[i] == 0 ? z++ :nums[i] == 1 ? o++ : t++;
   }

   for(int i = 0; i < n; i++){
      if(z > 0){
         nums[i] = 0;
         z--;
      }
      else if(o > 0){
         nums[i] = 1;
         o--;
      }
      else{
         nums[i] = 2;
      }
   }
    }
