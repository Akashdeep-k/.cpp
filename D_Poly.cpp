//to find the degree of a polynomial
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	int n;//no. of terms
	
	while(test--) {
	    cin>>n;
	    int arr[n];//coefficient of each term in increasing order of degree
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    
	    for(int j = 1; j <= n; j++)
	    {
	        if(arr[n-j] != 0){
	            cout<<n-j<<endl;//highest degree of polynomial
	            break;
	        }
	    }
	}
	return 0;
}
