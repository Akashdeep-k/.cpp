#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    int maxT, maxN, sumN; // input variables
    int cases;     // cases are possible test cases for worst case
    int output;           // required output
    while (test--)
    {
        cin >> maxT >> maxN >> sumN;
        cases = sumN / maxN;
        
        if (maxT > cases)
        { 
             output = cases * maxN * maxN + (sumN - cases * maxN) * (sumN - cases * maxN);
        }
        else
        {
             output = maxT * maxN * maxN;
        }
    
        cout << output << endl;
    }
    return 0;
}
