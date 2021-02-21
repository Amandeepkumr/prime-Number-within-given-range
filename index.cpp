#include<iostream>
using namespace std;
void prime(int n)
{
	int div=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			div++;	
		}
	}
	if(div==2)
	{
		cout<<n<<endl;
	}
}
int main()
{
	int r1,r2;
	cin>>r1>>r2;
	for(int i=r1;i<=r2;i++)
		prime(i);
	return 0;
}
