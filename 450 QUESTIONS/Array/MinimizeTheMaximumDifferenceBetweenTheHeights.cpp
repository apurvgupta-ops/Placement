// Given the heights of N towers and a value of K, Either increase or decrease the height of every tower by K (only once) where K > 0. After modifications, the task is to minimize the difference between the heights of the longest and the shortest tower and output its difference.
// Examples:
//     Input: arr[] = {1, 15, 10}, k = 6
//     Output:  Maximum difference is 5.
//     Explanation: Change 1 to 7, 15 to 9 and 10 to 4. Maximum difference is 5 (between 4 and 9). We can’t get a lower difference.
//     Input: arr[] = {1, 5, 15, 10}, k = 3
//     Output: Maximum difference is 8, arr[] = {4, 8, 12, 7}

//     Illustration:
//     Given arr[] = {1, 15, 10}, n = 3, k = 6
//     Array after sorting => arr[] = {1, 10, 15}
//     Initially maxHeight = arr[n – 1] = 15
//                 minHeight = arr[0] = 1
//                 ans = maxHeight – minHeight = 15 – 1 = 14
//     At i = 1
//         minHeight = min(arr[0] + k, arr[i] – k) = min(1 + 6, 10 – 6) = 4
//         maxHeight = max(arr[i – 1] + k, arr[n – 1] – k) = max(1 + 6, 15 – 6) = 9
//         ans = min(ans, maxHeight – minHeight) = min(14, 9 – 4) = 5 => ans = 5
//     At i = 2
//         minHeight = min(arr[0] + k, arr[i] – k) = min(1 + 6, 15 – 6) = 7
//         maxHeight = max(arr[i – 1] + k, arr[n – 1] – k) = max(10 + 6, 15 – 6) = 16
//         ans = min(ans, maxHeight – minHeight) = min(5, 16 – 7) = 5 => ans = 5
//     Hence minimum difference is 5

#include <iostream>
#include <algorithm>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int minHeight = arr[0];
    int maxHeight = arr[n - 1];
    int ans = arr[n - 1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - k < 0)
        {
            continue;
        }
        minHeight = min(arr[0] + k, arr[i] - k);
        maxHeight = max(arr[i - 1] + k, arr[n - 1] - k);
        ans = min(ans, maxHeight - minHeight);
    }
    return ans;
}

int main()
{
    int k = 6, n = 6;
    int arr[n] = {7, 4, 8, 8, 8, 9};

    // Function Call
    int ans = getMinDiff(arr, n, k);
    cout << ans;
}