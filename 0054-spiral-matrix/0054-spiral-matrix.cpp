class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int n = matrix.size();
        int m = matrix[0].size();
        int srow = 0;
        int scol = 0;
        int erow = n-1;
        int ecol = m-1;

        while(srow<=erow && scol<=ecol){
            for(int j = scol;j<=ecol;j++){
                res.push_back(matrix[srow][j]);
            }

            for(int i =srow+1;i<=erow;i++){
                 res.push_back(matrix[i][ecol]);
            }

            for(int j=ecol-1;j>=scol;j--){
                if(srow==erow){
                    break;
                }
                res.push_back(matrix[erow][j]);
            }

            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                res.push_back(matrix[i][scol]);

            }
            srow++;
            scol++;
            erow--;
            ecol--;

        }
        return res;
    }
};