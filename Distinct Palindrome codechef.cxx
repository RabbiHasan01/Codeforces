#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		string str="",  s="abcdefghijklmnopqrstuvwxyz";
		if(ceil((float)n/2.0)<x) cout <<-1 <<endl;
		else {
			int c=0;
			for(int i=0;i<x;i++){
				 cout <<s[i];
				 c++;
			}
			for(int i=0;i<(n-2*x);i++){
				cout <<s[0];
				c++;
			}
			for(int i=n-c-1;i>=0;i--){
				cout << s[i];
			}
			cout <<endl;
		}
	}
}







