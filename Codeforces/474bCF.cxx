//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int mx=10e5+5;

int main(int argc, char *argv[])
{
	/*
	int n,m;
	cin>>n;
	long int a[n+6];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	long int q[mx],p[m+6];
	for(int i=1;i<=m;i++){
		cin>>q[i];
		p[i]=q[i];
	}
	sort(q,q+m+1);
	long int sum=0,c=1,x=0;
	for(int i=1;i<=n; ){
		sum+=a[i];
	//	cout <<sum <<endl;
		if(sum>=q[c]){
			//cout <<sum<<endl;
			q[q[c]]=i;
			c++;
			//break;
		}else i++;
	}
	//for(int i=1;i<=m;i++) cout << q[p[i]] <<endl;

*/

int n,m;
cin>>n;
long int a[n+6];a[0]=0;
for(int i=1;i<=n;i++) {
	cin>>a[i];
	a[i]+=a[i-1];
}
cin>>m;
long int x[mx],p[m+5],q[m+5];
for(int i=1;i<=m;i++){
	cin>>q[i];
	p[i]=q[i];
}
sort(q,q+m+1);
int c=1;
//for(int i=1;i<=n;i++){
	for(int j=1;j<=m;){
		if(a[c]>=q[j]){
			//cout <<c <<endl;
			x[q[j]]=c;
			j++;
		}else c++;
	}
//}
for(int i=1;i<=m;i++) cout << x[p[i]] <<endl;
}

























