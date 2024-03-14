#include <iostream>
using namespace std;
// GIVEN AN UNSORTED ARRAY OF SIZE N OF NON-NEGATIVE INTEGERS,FIND A CONTIGOUS SUB ARRAYWHICH ADDS TO A GIVEN NUMBER S
// N=5
// S=12
// A[5]={1,5,11,7,3,2}
// OUTPUT IS {4,6}

// brute force method

int main()
{
    int n;
    int result;
    cin >> n >> result;
    int a[n];
    for (int s = 0; s < n; s++)
    {
        cin >> a[s];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            if (sum == result)
            {
                cout << i + 1 << " " << j + 1 << endl;
                exit(0);
            }
        }
    }

    return 0;
}
// back tracking method
int main()
{
    int n;
    int result;
    cin >> n >> result;
    int a[n];

    for (int s = 0; s < n; s++)
    {
        cin >> a[s];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            cout << sum << " ";
            if (sum > result)
            {
                break;
            }
            if (sum == result)
            {
                cout << i + 1 << " " << j + 1 << endl;
                exit(0);
            }
        }
    }

    return 0;
}