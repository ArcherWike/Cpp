#include <iostream>
using namespace std;

main()
{
	int tab[10][10];
		
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			tab[i][j]=(j+1)*(i+1);
		}
	}
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout<<tab[i][j]<<"\t";
		}
		cout<<endl;
	}
}
