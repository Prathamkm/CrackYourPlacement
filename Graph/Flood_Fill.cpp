void dfs(vector<vector<int>> &image, int sr, int sc, int color, int source)
{
    if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != source || image[sr][sc] == color)
        return;
    if (image[sr][sc] == source)
        image[sr][sc] = color;
    dfs(image, sr + 1, sc, color, source);
    dfs(image, sr - 1, sc, color, source);
    dfs(image, sr, sc + 1, color, source);
    dfs(image, sr, sc - 1, color, source);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    dfs(image, sr, sc, color, image[sr][sc]);
    return image;
}