#include<iostream>
using namespace std;
 
int a[100];
int x;
 
int BinarySearch(int a[],int x,int n)
{//�ҵ�xʱ�������������λ�ã����򷵻�-1 
	int left=0,right=n-1;
	while(left<=right)
	{
		int middle=(left+right)/2;
		if(x==a[middle])
			return middle;
		if(x<a[middle])
			right=middle-1;	
		else
			left=middle+1;
	}
	return -1;//δ�ҵ�x 
}
int main()
{
	int n;
	cin>>n;//n���� 
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	cin>>x;//Ҫ�ҵ��� 
	cout<<BinarySearch(a,x,n)<<endl;
	return 0;	
}

