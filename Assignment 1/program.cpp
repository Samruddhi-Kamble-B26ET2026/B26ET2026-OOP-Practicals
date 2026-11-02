
#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int s = 0; s < n-i-1; s++)
        {
            cout << " ";
        }

        for(int j = 0; j <= i; j++)
        {
            int ans = fact(i) / (fact(j) * fact(i-j));
            cout << ans << " ";
        }

        cout << endl;
    }

    return 0;
}
