
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n>17){
			cout <<-1 << "\n";
		}else{
			if(n>=10){
				cout <<n-9 << 9 <<endl;				
			}else if(n<10){
				cout << n<<endl;				
			}else{
				cout <<-1 <<"\n";
			}
		}
	}
}