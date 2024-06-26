#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter a string:";
	gets(str);
	int cout=0;
	for(int i=1;i<100;i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
		{
			cout++;
		}
	}
	cout<<  "total uppercase:"<<cout-1<<endl;
	
	for(char &c : str)
	{
		c=toupper(c);
		
	}
	cout<<"upper string:"<<str<<endl;
	for(char &c: str)
	{
		c=tolowe(c);
	}
	cout<<"lower case:<<str<<endl";
	return 0;
}
