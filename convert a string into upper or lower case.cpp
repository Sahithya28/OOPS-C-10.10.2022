#include <iostream>
using namespace std;

void lower_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')   
			str[i] = str[i] + 32;         
	}
	cout<<"\n The string in lower case: "<< str;
}

void upper_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   
			str[i] = str[i] - 32;         
	}
	cout<<"\n The string in upper case: "<< str;
}

int main()
{
	string str;
    cout<<"Enter the string ";
    getline(cin,str);
    lower_string(str);       
    
    
	upper_string(str);   
	return 0;
}
