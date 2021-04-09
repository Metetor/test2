#include<iostream>
#include<cstdio>
using namespace std;
int t,n,m,jishu=0,oushu=0,tmp;
int a[1002];
int sw=0;
int main(){
cin>>t;
for(int i=1;i<=t;i++){
	sw=0;jishu=0;oushu=0;
	cin>>n>>m;
	for(int j=1;j<=n;j++){
		scanf("%d",&a[j]);
		if(a[j]%2!=0){jishu++;}
		if(a[j]%2==0){oushu++;}}
	if(m>oushu){
		if((m-oushu)%2!=0){sw=1;}
		else{if(m!=n){sw=1;}}}
	else{if(jishu!=0){sw=1;}}
	if(sw==1){cout<<"Yes"<<endl;}
	else{cout<<"No"<<endl;}
}
return 0;}