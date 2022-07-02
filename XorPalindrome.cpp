//To count the minimum no. of steps required to make palindrome of a string with XOR operator.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int T;//test cases
    cin >> T;
    int N;//length of string
    string A;
    int j;
    int count;
    while (T--)
    {
        count = 0;
        cin >> N;
        cin>>A;
        for (int i = 0; i < N / 2; i++)
        {
            j = N - 1 - i;
            if (A[i] ^ A[j] )
            {
                count++;
            }
        }
        cout<<(count+1)/2<<endl;
    }
    return 0;
}
