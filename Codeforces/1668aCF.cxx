#include <bits\stdc++.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
	    if(min(n,m)==1 and max(n,m)<=2){
	    	
	    	if(max(n,m)==1)cout <<"0\n";
	    	else cout <<"1\n";
	    }else if(min(n,m)>1) {
	    	long long mn,mx,x,y,a,b;
	    	mn=min(n,m);
	    	x=mn*2-2;
	    	mx=max(n,m);
	    	y=(mx-mn);
	    	a=ceil((double)y/2.0);
	    	b=(y/2)*3;
	    	cout <<x+a+b<<endl;
	    }else cout <<"-1\n";
	}
}






