
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
	//	cout <<ceil((float)n/6.0)*x<<endl;
	    if(n%6==0) cout << (n*x)/6 <<endl;
	    else {
	    	 int p=n/6;
	    	 p++;
	    	 cout <<p*x<<endl;
	    }
	}
return 0;
}






