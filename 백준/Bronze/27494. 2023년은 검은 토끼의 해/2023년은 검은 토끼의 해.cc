#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    register int N, ans = 0;
    cin >> N;
    string str;
    for(register int n = 2023, p; n <= N; ++n){
        str = to_string(n);
        if((p = str.find('2', 0)) >= 0 && (p = str.find('0', p + 1)) >= 0 && (p = str.find('2', p + 1)) >= 0 && (p = str.find('3', p + 1)) >= 0)
            ++ans;
    }
    cout << ans;
	return 0;
}