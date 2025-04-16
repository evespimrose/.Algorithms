#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    vector<int> scores(n + 1, 0);

    for (int i = 1; i <= n; i++) 
    {
        cin >> scores[i];
    }

    dp[1] = scores[1];

    if (n > 1) 
    {
        dp[2] = scores[1] + scores[2];
    }

    for (int i = 3; i <= n; i++) 
    {
        dp[i] = max(dp[i - 2] + scores[i], dp[i - 3] + scores[i - 1] + scores[i]);
    }

    cout << dp[n] << "\n";

}