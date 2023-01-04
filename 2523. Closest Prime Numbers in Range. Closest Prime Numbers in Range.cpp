// 2523. Closest Prime Numbers in Range
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        vector<int>v (right+5);
        v[1]=1;
        for(int i=4;i<=right;i=i+2){
            v[i]=1;
        }

        // cout << v[1093] << endl;
      
        set<int> st;
        int ct = 0;
        for(int i=3;i*i<=right;i=i+2){
            if(v[i]==0){
            
                 for(int j=i*i;j<=right;j=j+i*2){
                    v[j]= 1;
                }
            }
           
        }
        vector<int> v2;
        int ans =    INT_MAX; 
        int prev=-1;
        for(int i = left;i<=right;i++){
            if(v[i]==0 && prev==-1){
                prev = i;
            }
            else if(v[i]==0 && prev!=-1){
                if(ans > i-prev){
                    ans = i-prev;

                    v2.clear();
                    v2.push_back(prev);
                    v2.push_back(i);
                    prev=i;
                }
                else {
                    prev = i;
                }
            }
        }
        if(v2.size()<2)return {-1,-1};
        return v2;
    }
};