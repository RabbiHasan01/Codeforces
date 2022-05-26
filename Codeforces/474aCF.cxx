
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	string dir, str, ans="",s="qwertyuiopasdfghjkl;zxcvbnm../";
	cin>>dir >>str;
	
	for(int i=0;i<str.size();i++){
		for(int j=0;j<s.size();j++){
			if(str[i]==s[j] && dir=="R"){
				ans+=s[j-1];
			}
			if(str[i]==s[j] && dir=="L"){
				ans+=s[j+1];
			}
		}
	}
	cout << ans<<endl;
}