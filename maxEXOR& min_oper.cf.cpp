#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
using namespace std;
void solve(){
int x,y;
cin >> x >> y;
int sum = x+y;
int rx = 0, ry = 0;
for(int sh = 30; sh>=0;sh--){
	if((sum&(1<< sh)) != 0){
		if((rx|(1<<sh)) <= x){
            rx=rx|(1<<sh);
        }else{
        	ry=ry|(1<<sh);
        }
	}
}
cout << sum << " "<< x-rx << endl;
}
int main(){
	int m;
cin >> m;
while(m--){
	solve();
}
}