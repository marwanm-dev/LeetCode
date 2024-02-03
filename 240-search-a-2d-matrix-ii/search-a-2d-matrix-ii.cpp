class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l, r, mid;
        
        for (int row = 0; row < matrix.size(); row++) {
            l = 0, r = matrix[0].size() - 1;
            while (l <= r) {
                mid = (l + r) / 2;
                if (matrix[row][mid] == target) return true;
                else if (matrix[row][mid] > target) r = mid - 1;
                else l = mid + 1;
            }
        }
        return false; 
    };
};