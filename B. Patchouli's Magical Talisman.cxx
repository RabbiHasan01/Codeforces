
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+6];
		bool od=false,ev=false;
		int c=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2) {
				od=true;
			}
			else{
				// ev=true;
				 c++;
			}
		}
		if(od) {
			cout << c <<endl;
		}else {
			sort(a,a+n);
			int x=0,mn=a[n-1];
			for(int i=0;i<n;i++){
				while(a[i]>0){
					a[i]/=2;
					x++;
					if(a[i]%2){
						break;
					}
					
				}
				mn=min(mn,x);	
				x=0;			
			}
			cout <<mn+n-1 <<endl;
		}
	}
	
}








