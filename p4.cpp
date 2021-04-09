#include<iostream>
using namespace std;
int main()
{
	long int n,m;
	cin>>n>>m;
	long int sum=0;
	int up=1,down=6,left=4,right=3,front=2,back=5;
	for (int i=1;i<=n;i++)
	{sum+=(((m-1)/4)*(up+down+left+right));
	for (int j=1;j<=(m-1)%4;j++)
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
	cout<<sum<<endl;
	return 0;
}