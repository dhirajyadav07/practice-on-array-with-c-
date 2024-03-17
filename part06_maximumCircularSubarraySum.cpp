
//  Maximum Circular Subarray Sum By  Using Kadanes Algo
//  time complexity O(n)

#include <iostream>
#include <climits>

using namespace std;
int kadanes_algo(int a[], int size)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        currsum += a[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}
int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxsum1 = kadanes_algo(a, n);
    int maxsum2 = INT_MIN;
    int sum = 0;
    if (a[0] > 0 || a[n - 1] > 0)
    {
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            a[i] = -a[i];
        }

        int y = kadanes_algo(a, n);
        maxsum2 = sum + y;
    }
    int result = max(maxsum2, maxsum1);
    cout << result;

    return 0;
}