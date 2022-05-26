
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;cin>>t;
	while(t--){
	long int n,x;
	cin>>n>>x;
	int a,even=0,odd=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2==0) even++;
	}
	odd=n-even;
	if(x%2==0){
		if(odd>0 and even>0) cout <<"Yes\n";
		else cout <<"No\n";
	}else {
		if(odd>=x) cout <<"Yes\n";
		else if(odd%2==1) cout <<"Yes\n";
		else if(((odd-1)+even)>=x and odd>0) cout <<"Yes\n";
		else cout <<"No\n";
	}

	}
}



odd<<"\neven" <<even<<endl;
/*	if(odd>=x) {
		if(x%2==1) cout <<"Yes\n";
		else cout <<"No\n";
	}else if(odd%2==1) {
		cout <<"Yes\n";
	}else if(odd>0){
	    if((odd-1+even)>=x) {
	    	cout <<"Yes\n";
	    }else {
	    	cout <<"No\n";
	    }
	}else {
		cout <<"No\n";
	}
	/*if(x%2==0){
		if(odd%2) cout <<"Yes\n";
		
		/*if(even>0){
			if(odd>0) cout <<"Yes\n";
			else cout <<"No\n";
		}else cout <<"No\n";
	}else {
		if(odd>=x or odd%2=1 ) cout <<"Yes\n";
		else if((odd-1+even)>=x) cout <<"Yes\n";
		else cout <<"No\n";
	}*/
	}
}














