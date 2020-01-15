#include<iostream>
using namespace std;
 
const int W = 150;
const int number = 5;
const int VALUE[] = {60, 20, 10, 60, 100};
const int WEIGHT[] = {20, 30, 50, 60, 80};
int f[151];
 
void ZeroOnePack(int w, int v) 
{
	for(int x = W; x >= w; x--)
		f[x]=(f[x] > (f[x-w]+v))?f[x]:(f[x-w]+v);
 
}
 
 
int main()
{
	for (int i=0; i < 151; i++)
	{
		f[i] = 0;
	}
 
	for (int j=0; j < number; j++)
	{
		ZeroOnePack(WEIGHT[j], VALUE[j]);
	}
 
	cout<<"maxValue: "<<f[W]<<endl;
	 
	
}


