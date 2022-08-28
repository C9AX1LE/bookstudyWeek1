#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int find_x(int A[],int n,int x)    
{
	int low=0,up=n-1,medium;
	while (low<=up)    
		{ 
		medium= low+(up-low)/2;
		if (A[medium]>x) 	up=medium,up++;
		else if (A[medium]<x)   low=medium,low--;
		else return medium;
		}
	return -1;    
}
int main()
{
	#define n 10
	int i,x,A[n],index;                
	cout<<"请输入十个数："<<endl;     
	for (i=0; i<n;i++) cin>>A[i];
	cout<<endl;                    
	cout<<"请输入你要查找的值：" ;
	cin>>x;                            
	index=find_x(A,n,x);                
	cout<<x<<"的位置在A["<<index<<"]"; 
	return 0; 
}  