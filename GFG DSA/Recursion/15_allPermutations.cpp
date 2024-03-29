#include <bits/stdc++.h>
using namespace std;

void permute(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << " ";
        return;
    }

    // fixed the current character and went on about next to it characters.
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        permute(s, i + 1);
        swap(s[j], s[i]); // To get back to the just previous stage from which we can do other premutation from that stage.
    }
}

int main()
{
    string s;
    cin >> s;

    permute(s);

    return 0;
}