// 2513. Minimize the Maximum of Two Arrays
#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef  long long int ll;
public:

    ll check1(ll  d1,ll uc) {
        ll right = 1,left = 1000000009;
        ll mid;
        while(left<=right){
            ll mid = right - ((right-left)/2);
            if((mid - (mid/d1)) == uc ){
                break;
            }
            else if((mid - (mid/d1)) > uc ){
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }
        return mid;
    }

    ll check2(ll  d1, ll uc ,ll d2,ll uc2){
        ll right = 1,left = 1000000009;
        ll mid;
        while(left<=right) {
             mid = right - ((right-left)/2);
            if(mid - (mid/d2)+(mid - (mid/d1)) == uc2 ) {
                // return mid;
                break;
            }
            else if( mid - (mid/d2)+(mid - (mid/d1)) > uc2 ){
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }
        return mid;
    }
    ll minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        ll d1 = divisor1;
        ll d2 = divisor2;
        ll uc1 = uniqueCnt1;
        ll uc2 = uniqueCnt2;
        ll last,last2;
        if(uc1 >= uc2){
           
           last = check1(d1,uc1);
            last2 = check2(d1,uc1,d2,uc2);
        }
        else {
             cout << "HELL " << endl;
             last = check1(d2,uc2);
            last2 = check2(d2,uc2,d1,uc1);
        }


        return max(last,last2);
    }
};