
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long int a,b;
		cin>>a>>b;
		if(a==0){
			cout <<1;
		}else {
			cout <<a+2*b+1;
		}
		cout <<endl;
	}
}