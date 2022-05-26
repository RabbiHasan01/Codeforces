
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s,x="";
		cin>>s;
		char a='{';
		int ans1=0,ans2=0,c=0;
        if(s.size()%2==1){
		for(int i=0;i<s.size();i++){
			if(a>s[i]){
				if(c==1) ans1+=a-96;
				a=s[i];
				c=1;
			}else ans1+=s[i]-96;
		}
	    ans2=a-96;
	    
	    if(ans1>ans2) cout <<"Alice " << ans1-ans2;
	    else cout <<"Bob "<<ans2-ans1;
        }else {
        	 for(int i=0;i<s.size();i++){
        	 ans1+=s[i]-96;
        	 }
        	 cout <<"Alice " <<ans1;
        }
        cout <<endl;
	//	cout <<a<<endl<<ans<<endl;
	}
}





