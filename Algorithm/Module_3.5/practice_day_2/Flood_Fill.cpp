class Solution {
public:
    vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    void dfs(vector<vector<int>>& image, int sr, int sc, int src, int color, int n, int m)
    { 
        image[sr][sc] = color;

        for (int i = 0; i < 4; i++)
        {
            int ci = sr + v[i].first;
            int cj = sc + v[i].second;
            if (ci >= 0 && ci < n && cj >= 0 && cj < m && image[ci][cj] == src)
            {
                dfs(image, ci, cj, src, color, n, m); 
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int src = image[sr][sc];
        if (src != color)  
            dfs(image, sr, sc, src, color, n, m);

        return image;
    }
};