#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int N, K;
    cin >> N >> K;
    vector<int> P(N);

    if (K == 1)
    {
        for (int i = 0; i < N; ++i)
        {
            P[i] = N - i;
        }
    }
    else if (K == N)
    {
        for (int i = 0; i < N; ++i)
        {
            P[i] = i + 1;
        }
    }
    else
    {
        for (int i = 0; i < K - 1; ++i)
        {
            P[i] = i + 1;
        }
        for (int i = K - 1; i < N; ++i)
        {
            P[i] = N - (i - (K - 1));
        }
    }

    for (int i = 0; i < N; ++i)
    {
        cout << P[i] << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}