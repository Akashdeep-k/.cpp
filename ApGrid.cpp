#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    int n, m;
    while (test--)
    {
        cin >> n >> m;
        int arr[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (m < n)
                {
                    arr[i][j] = ((i+1+m)*(j+1) - m);
                }
                else
                {
                    arr[i][j] = ((j+1+n)*(i+1) - n);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j < m - 1)
                {
                    cout << arr[i][j] << " ";
                }
                else
                {
                    cout << arr[i][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}