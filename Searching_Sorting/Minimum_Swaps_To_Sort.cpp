int minSwaps(vector<int> &nums)
{
    // Code here
    vector<pair<int, int>> p;
    for (int i = 0; i < nums.size(); i++)
    {
        pair<int, int> pa;
        pa.first = nums[i];
        pa.second = i;
        p.push_back(pa);
    }
    sort(p.begin(), p.end());
    int count = 0;
    int i = 0;
    for (auto &it : p)
    {
        while (it.second != i)
        {
            count++;
            swap(it, p[it.second]);
        }
        i++;
    }
    return count;
}