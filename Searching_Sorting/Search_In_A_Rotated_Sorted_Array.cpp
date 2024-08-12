int pivot(vector<int> &nums, int n)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] > nums[r])
            l = mid + 1;
        else
            r = mid;
    }
    return r;
}

int binary(vector<int> &nums, int target, int l, int r)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int p = pivot(nums, n);
    int ans = binary(nums, target, 0, p - 1);
    if (ans != -1)
        return ans;
    return binary(nums, target, p, n - 1);
}