
//modified pair sum problem but time complexity remain o(n^2)


#include <iostream>
using namespace std;


bool pairSum(int a[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] + a[j] == sum)
            {
                cout << i + 1 << " " << j + 1;
                return true;
            }
        }
    }

    return false;
}
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (pairSum(a, n, s))
    {
    }
    else
    {
        cout << " no such pair found";
    }

    return 0;
}