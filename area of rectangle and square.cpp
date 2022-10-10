#include<iostream>
using namespace std;
class area
{
	public:
		int a;
		area(int s)
		{
			a=s*s;
		}
		area(int l,int b)
		{
			a=l*b;
		}
		void print()
		{
			cout<<"\n Area:"<<a;
		}
};
int main()
{
	int s,l,a,b;
	{
		cout<<"side:";
		cin>>s;
		area a(s);
		a.print();
	}
	{
		cout<<"\n\n length and breadth:\n";
		cin>>l>>b;
		area a(l,b);
		a.print();
	}
	return 0;
}