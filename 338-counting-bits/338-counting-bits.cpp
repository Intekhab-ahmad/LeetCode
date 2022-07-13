class Solution {
public:
int count1bit(int num){
    int count=0;
    while(num!=0){
        if(num&1)count++;
        num=num>>1;
    }
    return count;
}


vector<int> countBits(int n) {
    vector<int>ans(n+1);
    for(int i=0;i<=n;i++) ans[i]=count1bit(i);
    return ans;
}
};