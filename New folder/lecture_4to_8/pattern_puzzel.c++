#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	int i = 1;
	while(i <= t){
		long long s, sqrPos;
		cin >> s;
		long long a = sqrt(s);
		if(a * a < s){
			a++;
			sqrPos = a* a - (a-1);
			if(!(a & 1)){ 
				if(a * a - s <= a - 1){
					cout <<"Case "<< i << ": "<< a << " " << 1 + a*a - s <<"\n";
				}
				else{
					cout <<"Case "<< i << ": "<< a - (sqrPos - s) << " " << a << "\n";
				}
			}
			else{
				if(a * a - s <= a - 1){
					cout <<"Case "<< i << ": "<<  1 + a*a - s  << " " << a <<"\n";
				}
				else{
					cout <<"Case "<< i << ": "<< a << " " << a - (sqrPos - s) << "\n";
				}	
			}
		}
		else if(a * a == s){
			if(!(a & 1)){
				cout <<"Case "<< i << ": "<< a << " " << 1 <<"\n";
			}
			else{
				cout <<"Case "<< i << ": "<< 1 << " " << a <<"\n";
			}
		}
		i++;
	}
}