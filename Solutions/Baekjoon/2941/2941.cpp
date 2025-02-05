#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;

    cin >> s;

    int cnt = 0;

    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) i++;
        else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') i += 2;
        else if (s[i] == 'd' && s[i + 1] == '-') i++;
        else if ((s[i] == 'l' || s[i] == 'n') && s[i + 1] == 'j') i++;
        else if ((s[i] == 's' || s[i] == 'z') && s[i + 1] == '=') i++;
        cnt++;
    }

    cout << cnt << '\n';
}