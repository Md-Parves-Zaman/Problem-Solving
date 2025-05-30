#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int l = 0, r = 3 * 1e7, ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (mid * mid == sum)
            {
                ans = mid;
                break;
            }
            else if (mid * mid < sum)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (ans != -1 && ans * ans == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}