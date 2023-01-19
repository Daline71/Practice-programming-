#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	int rollno;
	public:
		void Rollno()
		{   
		    cout<<"Student rollno.:"<<endl;
		    cin>>rollno;
		}
};
class Test:public Student
{   
    public:
	    double sub1,sub2,sub3,sub4,sub5,sub6;
		void Score()
		{
			cout<<"Enter Student scores in 6 subjects:"<<endl;
			cout<<"\nEnter marks of student ";
			cout<<"\nObject oriented programming:  ";
			cin>>sub1;
		    cout<<"\nData structure & algorithms:  ";
		    cin>>sub2;
			cout<<"\nSoftware engineering:  ";
			cin>>sub3;
			cout<<"\nDigital electronics:  ";
			cin>>sub4;
			cout<<"\nTechnical communication:  ";
			cin>>sub5;
			cout<<"\nMathmatics:  ";
			cin>>sub6;
		}
};
class Sports
{
	public:
     	double marks;
		void Sport()
		{
			cout<<"Sports marks of student:"<<endl;
			cin>>marks;
		}
};
class Result:public Test,public Sports
{
	public:
	void AddMarks()
	{
		cout<<"Total marks of student:"<<endl;
		double sum=sub1+sub2+sub3+sub4+sub5+sub6+marks;
		cout<<"Total marks of student "<<":  "<<sum<<endl;	
	}
};
int main()
{
	Result R1;
	R1.Rollno();
	R1.Score();
	R1.Sport();
	R1.AddMarks();
	return 0;
}
