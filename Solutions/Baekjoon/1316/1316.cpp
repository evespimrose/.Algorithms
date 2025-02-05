#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;

        bool is_group_word = true;
        bool alphabet[26] = { false };

        for (int j = 0; j < s.size(); j++) 
        {
            if (alphabet[s[j] - 'a']) 
            {
                is_group_word = false;
                break;
            }

            if (s[j] != s[j + 1]) 
            {
                alphabet[s[j] - 'a'] = true;
            }
        }

        if (is_group_word) cnt++;
    }

    cout << cnt << "\n";
}