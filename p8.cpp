//如果在家，输出0；如果在墙，输出1；
//如果在中间，输出“1/2^(r-pos)
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
int l,r,pos;
for (int i=0;i<t;i++)
{
	cin>>l>>r>>pos;
	if (pos==l)
	{cout<<0<<endl;}
	else if (pos==r)
	{cout<<1<<endl;}
	else {
		int a=pos-l;
		int b=r-l-1;
		cout<<(pow(2.0,a)-1)<<"/"<<pow(2.0,b)<<endl;
	}
}
return 0;
}