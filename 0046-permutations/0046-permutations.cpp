class Solution {
public:
vector<int> reverse(vector<int>& nums){
    vector<int> reversed;
    int size=nums.size();
    for(int i=size-1; i>=0; i--){
        reversed.push_back(nums[i]);
    }
    return reversed;
}
vector<int> rotate1 (vector<int>& nums){
    vector<int>temp;
    int size = nums.size();
    for(int i=0; i<size; i++){
        if((i+1)<size){
            temp.push_back(nums[i+1]);
        }
        if((i+1)==size){
            temp.push_back(nums[0]);
        }
    }
    return temp;
}
    vector<vector<int>> operation(vector<int>& nums){
        vector<vector<int>> ans;
    int size = nums.size();
    if(size==1){
        ans.push_back(nums);
        return ans;
    }
    if(size==2){
        vector<int>temp;
        ans.push_back(nums);
        temp=reverse(nums);
        ans.push_back(temp);
        return ans;
    }
    if(size==3){
        vector<int>temp,nums1;
        nums1=nums;
        for(int i=0; i<size; i++){
            nums1=rotate1(nums1);
            ans.push_back(nums1);
            temp=reverse(nums1);
            ans.push_back(temp);
        }
        return ans;
    }
    if(size>3){
        int temp1;
        vector<vector<int>> ans2;
        for(int i=0; i<size; i++){
            vector<int> temp2;
            for(int j=0; j<size; j++){
                if(i==j){
                    temp1=nums[i];
                }
                else{
                    temp2.push_back(nums[j]);
                }
            }
            /*for(int i=0; i<temp2.size(); i++){
                cout<<temp2[i]<<" ";
            }
            cout<<endl;*/
            ans2 = operation(temp2);
            /*for(int i=0; i<ans2.size(); i++){
                for(int j=0; j<ans2[i].size(); j++){
                cout<<ans2[i][j]<<" ";
                }
                cout<<endl;
            }*/
            //cout<<temp1;
            for(int i=0; i<ans2.size(); i++){
                vector<int> temp3;
                ans2[i].push_back(temp1);
                temp3=ans2[i];
                ans.push_back(temp3);
            }
        }
        return ans;
    }
        
        
    return ans;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int size = nums.size();
        ans = operation(nums);
        
        return ans;
    }
};