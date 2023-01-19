#include<iostream>
using namespace std;
int operate(int a,int b=5)
{
	return(a*b);
}
float operate(float a,int b)
{
	return(a/b);
}
int main()
{
	int x,z;
	float y;
	x=operate(3,4);
	z=operate(3);
	y=operate(3.0f,4);
	cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z;
	return 0;
}
