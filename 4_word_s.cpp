#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>
int main()
{
	ifstream input;
	string str;
	string word("a");
	int ctr = 0;
	input.open("word.txt");
	if(!input)
		cout<<"file did not open"<<endl;
	else
		while(input>>str)
		{
			int i;
			i = str.length();
			if(str[i-1] == 's')
			{
				ctr++;
			}
			
		}
		cout << ctr<<endl;
		input.close();
}
