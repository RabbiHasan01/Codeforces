
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n+8];
		for(int i=0;i<n;i++) cin>>s[i];
		
		string ans, ans1="maomao90",ans2="errorgorn";
		for(int i=0;i<n;i++){
			if(s[i]==1) ans=ans;
			else if(s[i]%2) {
				ans=swap(ans1,ans2);
			}else {
				ans=ans;
			}
		}
		cout <<ans <<endl;
	}
}





