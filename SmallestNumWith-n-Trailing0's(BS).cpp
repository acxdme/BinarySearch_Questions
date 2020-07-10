/*
Time complexity : O(n log n)
Space complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int helper(int value, int n)
{

    int z = 0;

    for (int i = 5; value / i >= 1; i *= 5)
        z += value / i;
    //cout << "--zeros--" << z << endl;
    return (z >= n);
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int low = 0, high = 500; // 325-->65--13
        int mid;
        int result = INT_MAX;
        while (high >= low)
        {
            mid = (low + high) / 2;
            //  cout << "--mid--" << mid << endl;
            if (helper(mid, n))
            {
                high = mid - 1;
                result = min(result, mid);
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << result << endl;
    }

    return 0;
}
