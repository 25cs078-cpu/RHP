#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#define ll long long int
using namespace std;
void solve(){
	ll x,y,k;
cin >> x>> y>> k;
ll ans = 0;
ll ctr = 0;
while(k>ctr){
 int rem = (y+ctr)% (x+ctr);
if(rem == y-x)break;
ans += rem;
ctr++; 
}
if(k>ctr){
  ans += (y-x) * (k-ctr);
}
cout << ans << endl;
}
int main(){
int h;
cin >> h;
while(h--){
solve();
}
}