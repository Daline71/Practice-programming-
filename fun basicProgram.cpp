#include<iostream>
using namespace std;
int main()
{
	int t;
	int Addition(int,int);
	t=Addition(5,3);
	cout<<"Addition of 5 & 3 is:  "<<t;
	return 0;
}
int Addition(int x,int y)
{
	int z=x+y;
	return(z);
}
