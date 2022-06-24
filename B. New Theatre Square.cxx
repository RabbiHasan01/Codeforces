
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		//string s;
		char s[n+5][m+7];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>s[i][j];
			}
		}
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m-1; ){
				if(s[i][j]=='.' and s[i][j+1]=='.'){
					ans+=min(2*x,y);
					s[i][j]='*';
					s[i][j+1]='*';
					j+=2;
				}else j++;
			}
		}
		/*cout <<ans <<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout <<s[i][j] <<" ";
			}
			cout <<endl;
		}*/
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				 if(s[i][j]=='.'){
					ans+=x;
				}
			}
		}
		cout << ans <<endl;
	}
}




