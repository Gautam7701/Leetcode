class Solution {
public:
    int diagonalSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(i==j || j==m-i-1){
                    sum=sum + matrix[i][j];
                }
            }
        }
        return sum;
    }
};