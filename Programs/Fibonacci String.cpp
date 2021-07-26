#include <iostream>
using namespace std;
long double fib[100000];
int n;

main()
{
	cout<<"Fibonacci String"<<endl;
	cout<<" Enter string word: ";
	cin>>n;
	
	fib[0]=1;
	fib[1]=1;
	
	for (int i=2; i<n; i++)
	{
		fib[i] = fib[i-1]+fib[i-2];
	}
	

		cout<<endl<<" Word number "<<n <<": "<<fib[n-1];
	
	return 0;
}
