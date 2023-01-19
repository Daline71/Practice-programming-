#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//	char arr[20];
	ofstream fout("xyz.txt");
	fout<<"hello";
	fout.close();
	return 0;
}
