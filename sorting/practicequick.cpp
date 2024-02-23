class Solution {
    private:
    void findAns(vector<int>nums,vector<vector<int>>&ans,vector<int>output,int i){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        
        findAns(nums,ans,output,i+1);
        int element = nums[i];
        output.push_back(element);
        
        findAns(nums,ans,output,i+1);
        

        
    }
public:
    vector<vector<int> subsets(vector<int>& nums) {
        int i=0;
        vector<vector<int>>ans;
        vector<int>output;
        findAns(nums,ans,output,i);
   return ans; }
    
};