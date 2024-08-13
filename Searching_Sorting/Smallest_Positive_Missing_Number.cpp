int missingNumber(int arr[], int n)
{
    // Your code here
    sort(arr, arr + n);
    int ans = arr[n - 1] + 1;
    int i = 0;
    while (arr[i] < 1 && i < n)
    {
        i++;
    }
    if (i == n || arr[i] != 1)
        return 1;

    while (i < n - 1)
    {
        if (arr[i] + 1 < arr[i + 1])
        {
            ans = arr[i] + 1;
            break;
        }
        i++;
    }
    return ans;
}