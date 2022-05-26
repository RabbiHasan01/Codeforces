
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int x,n,m;
		cin>>x>>n>>m;
		int x1=x,x2=x;
		int m1=m,m2=m;
		m1*=10;
		x1=x1-m1;
		for(int i=1;i<=n;i++){
			if(x1<=0) break;
			x1=x1/2+10;
		}
			for(int i=1;i<=n;i++){
			    if(x2<=0) break;
			    x2=x2/2+10;
		    }
		    //cout <<x2 <<endl;
		    m2*=10;
	    	x2=x2-m2;			
	    x=min(x1,x2);
		//cout <<x <<endl;
		if(x<=0) cout <<"YES\n";
		else cout <<"NO\n";
	}
	
}













