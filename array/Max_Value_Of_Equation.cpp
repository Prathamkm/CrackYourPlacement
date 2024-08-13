struct Point
{
    int x;
    int y;
    bool operator<(const Point &other) const
    {
        return (y - x) < (other.y - other.x);
    }
    int operator-(const Point &other) const
    {
        return y + other.y + other.x - x;
    }
    Point(const vector<int> &p) : x(p[0]), y(p[1]) {}
};

class Solution
{
public:
    int findMaxValueOfEquation(vector<vector<int>> &points, int k)
    {
        priority_queue<Point> pq;
        int res = INT_MIN;
        for (auto &p : points)
        {
            Point po(p);
            while (pq.size() && (po.x - pq.top().x > k))
                pq.pop();
            if (pq.size())
                res = std::max(res, pq.top() - po);
            pq.push(po);
        }
        return res;
    }
};