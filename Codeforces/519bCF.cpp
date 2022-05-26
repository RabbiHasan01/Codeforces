
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	long int n;
	cin>>n;
	long int a,b,c,sum1=0,sum2=0,sum3=0;
	for(int i=0;i<n;i++) {
		cin>>a;
		sum1+=a;
	}
	for(int i=0;i<n-1;i++) {
		cin>>b;
		sum2+=b;
	}
	for(int i=0;i<n-2;i++) {
		cin>>c;
		sum3+=c;
	}
	cout << sum1-sum2 <<endl <<sum2-sum3 <<endl;
	
}








