// "To live is to suffer, to survive is to find some meaning in the suffering."
#include<bits/stdc++.h>

using namespace std;


#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
#define mod 1000000009


  int takeCharacters(string s, int k) {
  		map<char,int> mp;
  		int n = s.size();
  		for(int i=0;i<n;i++){
  			mp[s[i]]++;
  		}

  		if(mp['a'] < k || mp['b'] < k || mp['c'] < k){
  			cout << -1 << endl;
  			return -1;
  		}

  		int a = mp['a']-k;
  		int b=mp['b']-k;
  		int c=mp['c']-k;
  		int ans = 0,j = 0;
  		int pa=0,pb=0,pc=0;
  		map<char,int> mp2;
  		for(int i=0;i<n;i++){
  			mp2[s[i]]++;
  			ans = max(ans,i-j+1);
  			if(mp2[s[i]] > k){
  				j=i+1;
  			}
  		}
     cout << ans << endl;
     return ans;  
    }

int main() {
    boost;
    int k;
    string s;
    cin >> s >> k;
 
    cout << s << endl;
    // takeCharacters(s,k);
   
   
   

}



	