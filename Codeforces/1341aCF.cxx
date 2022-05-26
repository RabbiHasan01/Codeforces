
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		int sum1,sum2,dif1,dif2;
		sum1=a+b;
		sum2=c+d;
		dif1=a-b;
		dif2=c-d;
		if(n*dif1<=sum2){
			if(n*sum1>=dif2){
				cout <<"Yes\n";
			}else {
				cout <<"No\n";
			}
		}else {
			cout << "No\n";
		}
		
		
		
	}
}










