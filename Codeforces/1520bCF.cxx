
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x=n,c=0,a=1,first;
		while(x!=0){
			first=x%10;
			x/=10;
			c++;
			
		}
	//	c/=10;
	//	cout <<c <<endl;
		int b=0;
		for(int i=0;i<c;i++){
			b+=first*a;
			a*=10;
			
		}
		a/=10;
		cout <<b <<endl;
	//	cout <<a<<endl;
		cout << n/b+(c-1)*9<<endl;
	/*	if(b>x){
			cout<<(first-1)+(c-1)*9;
			
		}else{
			if(x>=b and x<(b+a)){
			    cout<<first+(c-1)*9;
			}
		}*/
		cout<<endl;
	//	for(int i=0;i<c;i++) cout <<rem[i] <<" ";
	
	
		
	}
	
}