//Works only when unique elements are present
bool check(vector<int>& nums) {
int k=min_element(nums.begin(),nums.end())-nums.begin();
reverse(nums.begin(),nums.begin()+k);
reverse(nums.begin()+k,nums.end());
reverse(nums.begin(),nums.end());
for(int i=1;i<nums.size();i++){
if(nums[i-1]>nums[i])
return false;
}
return true;
}