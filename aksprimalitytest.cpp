#include<iostream>
using namespace std;
int isprm(long long int n)
{
	long long int i=5,w=2;
	if(n==2||n==3)
		return 1;
	if(n%2==0||n%3==0||n==1)
		return 0;
	while(i*i<=n)
	{
		if(n%i==0)
			return 0;
		i+=w;
		w=6-w;
	}
	return 1;
}
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(isprm(i)==1)
			cout<<i<<endl;
	}
	return 0;
}