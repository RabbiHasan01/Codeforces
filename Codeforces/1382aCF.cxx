
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		
		int a[n+m+1000],b[10000];
		
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=m;i++){
			cin>>b[i];
		}
	//	sort(a,a+n);
	//	sort(b,b+m);
		int c=1,x;
		for(int i=1;i<=m;i++){
		 	for(int j=1;j<=n;j++){
		 	   if(b[i]==a[j]){
		 	   	x=a[j];		 	   	
		 	   	c=0;
		 	   	break;
		 	   }
		 	   if(c==0) break;
		     }
    	}
    	if(c) cout << "NO\n";
		else cout <<"YES\n1 " <<x <<endl;	
	}
	
	
	
	
	
	
	
}