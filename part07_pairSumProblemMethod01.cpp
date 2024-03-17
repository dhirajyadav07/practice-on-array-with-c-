
//  Pair Sum Problem
//  time complexity O(n^2)

#include <iostream>
using namespace std;

int main()
{

    int n, i, j, s, flag = 0;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i + 1; j < n; j++)
        {
            sum = a[i] + a[j];
            if (sum == s)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << i + 1 << " " << j + 1;
        exit(0);
    }
    else
    {
        cout << "no pair found";
    }
    return 0;
}