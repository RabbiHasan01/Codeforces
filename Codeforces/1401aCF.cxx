

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int x;
		/*for(int i=0;;i++){
			x=(n+k-i)/2;
			if(x<n){
				cout << i <<endl;
				break;
			}
		}*/
		if(n<=k){
			cout <<k-n;
		}else {
			if(n%2) cout << 1;
			else cout << 0;
		}
		cout <<endl;
	}
}


















