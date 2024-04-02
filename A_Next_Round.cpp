#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    int k_score = score[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (score[i] >= k_score && score[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl;
}