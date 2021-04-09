#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int sum=0;
	int up=1,down=6,left=4,right=3,front=2,back=5;
	for (int i=1;i<=n;i++)
	{
	for (int j=1;j<m;j++)
	{if (i%2!=0)
	{sum+=up;
		int a=up;
		up=left;left=down;down=right;right=a;
	}
	else {sum+=up;
	int a=up;
	up=right;right=down;down=left;left=a;}
	}
	if (i!=n)
	{sum+=up;
	int b=up;
	up=back;back=down;down=front;front=b;}
}
	sum+=up;
	cout<<sum;
	return 0;
}