#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                if(s[i] == 'a'){
                    s[i] = 'b';
                }
                else{
                    s[i] = 'a';
                }
            }
            else{
                if(s[i] == 'z'){
                    s[i] = 'y';
                }
                else{
                    s[i] = 'z';
                }

            }
        }

        cout << s << endl;

    }

    return 0;
}