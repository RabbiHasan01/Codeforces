
#include <iostream>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
//	s=s+5; cout << s;
	if(t%10==1){
		cout <<-1;
	}
	else if(t%10==0){
		for(int i=0;i<n-1;i++) cout << 1;
		if(n>1) cout <<0;
		else cout <<-1;
	}
	else{
		for(int i=0;i<n;i++) cout << t;
	}
	cout <<endl;
}
