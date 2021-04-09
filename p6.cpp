#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
int n,m;
int a[1001];
int sum1,sum2;
for (int i=1;i<=t;i++)
{ sum1=0,sum2=0;
bool p=0;
	cin>>n>>m;
for (int i=0;i<n;i++)
{
	cin>>a[i];
if ((a[i]%2)!=0)
sum1++;
else sum2++;}//统计奇数和偶数
if (m==n){
if (sum1%2==0)
	p=1;
}
else {
if(m>sum2)
	p=1;
else {
if (m==sum2)
p=1;
else {if (sum2<n)
p=1;
}
}
}
if (p==1)cout<<"Yes";
else cout<<"No";
}
return 0;

}