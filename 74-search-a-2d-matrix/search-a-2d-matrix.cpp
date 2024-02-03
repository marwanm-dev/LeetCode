class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int t = 0, b = matrix.size() - 1, row;
        while (t <= b) {
            row = (t + b) / 2;
            if (matrix[row][0] > target) b = row - 1;
            else if (matrix[row][matrix[row].size() - 1] < target) t = row + 1;
            else break;
        }

        if (t > b) return false;

        int l = 0, r = matrix[0].size() - 1, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            if (matrix[row][mid] == target) return true;
            else if (matrix[row][mid] > target) r = mid - 1;
            else l = mid + 1;
        }

        return false;
    }
};