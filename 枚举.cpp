#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
int a[1001];
for (int i=0;i<n;i++)
{cin>>a[i];}
sort(a,a+n);
double max=a[0];
if ((l-a[n-1])>max)
max=(l-a[n-1]);
for (int i=0;i<n-1;i++)
{double d=(a[i+1]-a[i])*1.0/2;
if (d>max)
max=d;}
cout<<fixed<<setprecision(12)<<max;
return 0;
}