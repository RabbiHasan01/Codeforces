
#include <iostream>
#include <cmath>
#include <array>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a[4];
		for(int i=0;i<3;i++) cin>>a[i];
		sort(a,a+3);
		int mn,mx,md;
		mn=a[0];
		mx=a[2];
		md=a[1];
		int c=0,d=1;
		for(int i=1; ; ){
			if(md+pow(2,i-1)==mx){
				c=1;
				break;
			}
			else if((md+pow(2,i-1))<mx){
				i++;
			}
			else break;
			
		}
		if(c){
		for(int i=1; ; ){
			if(mn+pow(2,i-1)==mx){
				cout << "YES\n";
				d=0;
				break;
			}
			else if((mn+pow(2,i-1))<mx){
				i++;
			}
			else break;
			
		}
		if(d) cout <<"NO\n";
		}else cout <<"NO\n";
		
	}
}






