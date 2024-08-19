bool ans(int N, int arr[], int i, int sum, int ts)
{
    // If we've reached the target sum, return true
    if (sum == ts / 2)
        return true;

    // If we've exceeded the sum or reached the end of the array, return false
    if (i >= N || sum > ts / 2)
        return false;

    // Include the current element in the subset or exclude it and recurse
    return ans(N, arr, i + 1, sum + arr[i], ts) || ans(N, arr, i + 1, sum, ts);
}

int equalPartition(int N, int arr[])
{
    // code here
    int ts = accumulate(arr, arr + N, 0);
    if (ts % 2 != 0)
        return 0;
    return ans(N, arr, 0, 0, ts);
}