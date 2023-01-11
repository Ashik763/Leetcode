//    Longest Substring Without Repeating Characters

#include<bits/stdc++.h>
using namespace std;

class Solution {
    typedef long long int ll;
public:
    int lengthOfLongestSubstring(string s) {
    //    ll i=0;
       map<char,ll> mp,mp2;
       ll len=0;
       ll ans=0;
       ll sz = s.size();
       for(ll i=0,j=0;j<sz;j++){
           while(j < sz && mp[s[j]] == 0 ){
               mp2[s[j]] = j;
               mp[s[j]]++;
               
            //    len++;
               j++;
               
           }
           
           ans = max(ans,j-i);
           
           ll upto = mp2[s[j]]+1;
           while(i < upto){
               mp[s[i]]=0;
               i++;
           }
           mp[s[j]]++;
           cout << i << ' ' << j << endl;
         
        
            i = mp2[s[j]]+1;
               mp2[s[j]] = j;

       }
       return ans;
    }
};