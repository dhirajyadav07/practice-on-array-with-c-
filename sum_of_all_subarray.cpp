#include <iostream>
using namespace std;

// sum of all subarray
int main()
{  // taking input from user 
    int n;
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
// find the sum of all subarray of above array
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
    }

    return 0;
}
