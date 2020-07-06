#include <bits/stdc++.h>
using namespace std;
bool isvalid(long long int a[], long long int mid, long long int m, long long int n)
{
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
            sum += a[i] - mid;

        if (sum >= m)
            return true;
    }

    return false;
}

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    long long int low = 0, high = sum, mid;
    long long int result = 0;
    while (high >= low)
    {
        mid = (low + high) >> 1;
        if (isvalid(a, mid, m, n))
        {
            //cout << mid << endl;
            result = max(mid, result);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    //cout<<low<<high<<endl;
    cout << result << endl;
    return 0;
}
