#include <iostream>
using namespace std;

int main()
{
	int tab[6] = {4, 7, 1, 6, 5, 9};
	int n = 6;
	int t;
	//cout<<"*";
	
	for(int j=0; j<n; j++)
	{
		for(int i=1; i<n; i++)
	{
		if(tab[i] < tab[i-1])
		{
			
			t = tab[i];
			tab[i] = tab[i-1];
			tab[i-1] = t;
		}
	}
	}
	
	for(int x=0;x<n; x++)
	{
		cout<<tab[x];
	}
}
