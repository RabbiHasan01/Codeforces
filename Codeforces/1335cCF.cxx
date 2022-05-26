//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int mx=0,a,x[n+10];
		for(int i=1;i<=n;i++) x[i]=0;
		for(int i=1;i<=n;i++){
			cin>>a;
			x[a]++;
		}
		sort(x+1,x+1+n );
		mx=x[n];
		int c=0;
		for(int i=1;i<=n;i++){
			if(x[i]>1 and x[i]<mx){
				//mx-=x[i];
				c+=x[i]-1;
			}
		}	
		n-=c;
		if(n==1 and mx<=0){
			cout << 0;
		}else {
			cout <<min(n/2,mx);
		}
		cout <<endl;
	}
	
	
	
	 	 
}	
	
	















if(n==0 and mx<1){
			cout << 0;
		}else {
			cout <<min(n/2,mx);
		}
		cout <<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
}	
	
}	
	
	
	
	
	
	
}ndl;
		//sort(x,x+2005);*/
		if(n>1 and c=0){
		if((n/2+1)>=mx)
		   cout <<min(mx,n/2) <<endl;
		else cout << n-mx <<endl;
		}else cout <<0 <<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
}	
	
	
}