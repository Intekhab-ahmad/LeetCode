class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        for(int i=1; i<score.size(); i++){
            for(int j=0; j<score.size()-i; j++){
                if(score[j][k]<score[j+1][k]){
                    swap(score[j],score[j+1]);
                }
            }
        }
        return score;
    }
};