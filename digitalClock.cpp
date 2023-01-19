#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int main()
{
	int hrs=0,min=0,sec=0;
	cout<<"Enter time in format HH:MM:SS\n";
	cin>>hrs>>min>>sec;
//	while(1){
if(hrs<24&&min<60&&sec<)
	start:
	for(hrs;hrs<24;hrs++)
	{
		for(min;min<60;min++)
		{
			for(sec;sec<60;sec++)
			{
				//this will clear the existance screen data
				system("CLS");
				cout<<hrs<<" : "<<min<<" : "<<sec;
				//this will pause for 1 sec
				Sleep(1000);
			}
			sec=0;
		}
		min=0;
	}
	hrs=0;
	//this will never end loop
	goto start;
//}
}
