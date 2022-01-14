#include <iostream>
using namespace std;


int main()
{
	int tab[5] = {4, 7, 1, 5, 9};
	int n = 4;
	int t;
	bool swap = true;	
	while(swap)
	{
		swap = false;		
		for(int j = 0; j < n; ++j)
		{
			if( tab[j] > tab[j + 1] )
			{
				t = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = t;
				swap = true;
			}
		}
	}

	for(int x=0;x<=4; x++)
	{
		cout<<tab[x]<<" ";
	}	
}
				
