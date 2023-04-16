#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), v(n + 1), c(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            c[i] = v[i];
        }
        for (int i = 1; i <= n; i++) v[i] += v[i - 1];


        vector<int> freq(n + 1), finalAns(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {

            int tar = a[i] + v[i - 1];
            if (v[n] <= tar)
            {

                freq[n]++;
                freq[i - 1]--;
            }
            else
            {

                int idx = lower_bound(v.begin(), v.end(), tar) - v.begin();
                if (idx >= i)
                {
                    freq[idx - 1]++;
                    freq[i - 1]--;
                    finalAns[idx] += tar - v[idx - 1];
                }
                else
                    finalAns[i] += tar - v[i - 1];
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            freq[i] += freq[i + 1];
        }
        for (int i = 1; i <= n; i++)
        {
            finalAns[i] += c[i] * freq[i];
            cout << finalAns[i] << " ";
        }
        cout << endl;
    }
}