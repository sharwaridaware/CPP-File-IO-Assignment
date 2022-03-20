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
			for(int i=0;i<str.length();i++){
			if(str[i] == 'a')
			{
				ctr++;
				break;
			}
			}
			
		}
		cout << ctr<<endl;
		input.close();
}
