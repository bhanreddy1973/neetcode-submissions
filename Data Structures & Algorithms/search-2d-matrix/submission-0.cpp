class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ma, int t) {

        int m = ma.size();
        int n = ma[0].size();

        int top = 0;
        int bottom = m - 1;

        int row = -1;

        while(top <= bottom)
        {
            int mid = top + (bottom - top) / 2;

            if(ma[mid][0] <= t &&
               ma[mid][n - 1] >= t)
            {
                row = mid;
                break;
            }
            else if(ma[mid][0] > t)
            {
                bottom = mid - 1;
            }
            else
            {
                top = mid + 1;
            }
        }

        if(row == -1)
            return false;

        int l = 0;
        int r = n - 1;

        while(l <= r)
        {
            int mid = l + (r - l) / 2;

            if(ma[row][mid] == t)
                return true;

            else if(ma[row][mid] < t)
                l = mid + 1;

            else
                r = mid - 1;
        }

        return false;
    }
};