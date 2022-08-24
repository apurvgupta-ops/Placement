// Initialize:
//    sum = INT_MIN
//     positiveNo = 0

// Loop for each element of the array
//   (a) positiveNo = positiveNo + a[i]
//   (b) if(sum < positiveNo)
//           sum =positiveNo
//   (c) if(positiveNo < 0)
//             positiveNo = 0
// return sum

// Explanation:
// The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array ( positiveNo is used for this). And keep track of the maximum sum contiguous segment among all positive segments (sum is used for this). Each time we get a positive-sum compare it with sum and update sum if it is greater than sum
// Time complexity  = O(n)

#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n)
{
    int sum = INT8_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        if (sum < currSum)
        {
            sum = currSum;
        }
    }
    return sum;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}