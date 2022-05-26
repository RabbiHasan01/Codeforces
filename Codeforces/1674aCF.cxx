
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long x,y;
		cin>>x>>y;
		if(x>y){
			cout <<"0 0\n";
		}else {
			if(y%x==0){
				cout << 1 <<" " << y/x <<endl;
			}else {
				cout <<"0 0\n";
			}
		}
	}
}






