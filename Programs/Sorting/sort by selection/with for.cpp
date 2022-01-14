#include <iostream>
using namespace std;

int main()
{
	int tab[5] = {4, 7, 1, 5, 9};
	int n = 4;
	int t;
		
	for(int i=0; i<n; i++)
	{
		
		for(int j = 0; j < n; ++j)
		{
			if( tab[j] > tab[j + 1] )
			{
				t = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = t;
				break;
			}
		}
	}

	for(int x=0;x<=4; x++)
	{
		cout<<tab[x]<<" ";
	}	
}
