#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	
	string writing;
	cout<<"enter the word to reverse: ";
	getline(cin,writing);
	int length_w = writing.length();
	int i=length_w-1; 
	transform(writing.begin(),writing.end(),writing.begin(),::toupper);
	cout<<writing[i];
	for (int i=length_w-2; i>=0; i--)
	{
		transform(writing.begin(),writing.end(),writing.begin(),::tolower);
		cout<<writing[i];
	}
	return 0;
}
