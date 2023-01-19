#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no of elements in array: ";
	cin>>n;
   int a[n];
   cout<<"Enter elements of an array: ";
   for(int i=0;i<n;i++)
   cin>>a[i];
  /* for(int j=1;j<n;j++)
   {
   	for(int k=j-1;k<j;k++)
   	{
   		if(a[j]<a[k])
   		{
   			int temp=a[j];
   			a[j]=a[j-k-1];
   			a[j-k-1]=temp;
		   }
	   }
   }*/
   
   for(int l=0;l<n;l++)
   {
   	cout<<a[l]<<" ";
   }
   return 0;
}
