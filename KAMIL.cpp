#include<iostream> 
using namespace std;int main(){int t=10;while(t--){string s;cin>>s;int c=1,l=s.length()-1;while(l>=0){if(s[l]=='T'||s[l]=='D'||s[l]=='L'||s[l]=='F') c *= 2;l--;} cout << c << endl;}}