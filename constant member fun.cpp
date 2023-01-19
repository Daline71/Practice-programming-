#include<iostream>
using namespace std;
class Test
{
	const int i;
	int j;
	public:
		Test(int x,int y):i(x),j(y)
		{
			cout<<"i value set: "<<i<<endl;
			cout<<"j value: "<<j<<endl;
		}
		void AddValue()const
		{
			int z=i+j;
			cout<<"Addition of "<<i<<" and "<<j<<" is: "<<z;
		}
		
		
};
int main()
{
	Test t(20,15);
    t.AddValue();
	return 0;
}
