
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		
		if(a>b){
			if(a%2==b%2){
				cout <<1 ;
			}else {
				cout <<2;
			}
		}else if(b>a){
			int x=b-a;
			if(x%2) cout <<1;
			else cout <<2;
		}else {
			cout <<0;
		}
		cout <<endl;
	}
}









