#include <iostream>
#include <string>
using namespace std;

int main()
{
	// your code goes here
	int test;
	cin >> test;
	int N;
	string S;
	string dna;//modified dna
	while (test--)
	{
	    dna.clear();
		cin >> N >> S;
		for (int i = 0; i < N; i++)
		{
			if (S[i] == 'A')
			dna += 'T';
			if (S[i] == 'T')
			dna += 'A';
			if (S[i] == 'C')
			dna += 'G';
			if (S[i] == 'G')
			dna += 'C';
		}
		cout << dna << endl;
	}
	return 0;
}
