#include <iostream>

using namespace std;

int main()
{
    int N = 10000;
    int s[10001];
    int n, k, i = 0, sum = 0;
    cin >> n >> k;
    int t = n;
    for (int q=0;q<10001;q++)
    {
        s[q]=0;
    } 

    while (t > 1)
    {

        if (s[i] == 0)
            sum++;
        else
        {
            i++;
            if (i >= n)
                i %= n;
            continue;
        }

        if (sum % k == 0 || sum % 10 == k)
        {
            s[i] = 1;
            t--;
        }

        i++;
        if (i >= n)
            i %= n;
    }

    for (i = 0; i < n; i++)
    {
        if (s[i] == 0)
            cout << i + 1;
    }
    return 0;
}
