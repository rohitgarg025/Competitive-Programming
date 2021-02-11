#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios_base::sync_with_stdio(0) ;cin.tie(0) ;cout.tie(0)

using namespace std;
const int maxn = 2e5 + 3;

int main(){
    FAST_IO;
    
    int n; cin >> n;
    int a[100005];
    int pos[100005], nxt[100005];
    
    for(int i=0;i<n;i++){
        cin >> a[i+1];
    }

    for(int i=0;i<=n;i++){
        pos[i] = n+1;
    }

    for(int i=n;i>=0;i--){
        nxt[i] = pos[a[i]];
        pos[a[i]] = i;
    }

    int x=0, y=0, ans=0;

    for(int i=1;i<=n;i++){
        if(a[x] == a[i]){
            ans += (a[y] != a[i]);
            y = i;
        }
        else if(a[y] == a[i]){
            ans += (a[x] != a[i]);
            x = i;
        }
        else if(nxt[x] < nxt[y]){
            ans += (a[x] != a[i]);
            x = i;
        }
        else{
            ans += (a[y] != a[i]);
            y = i;
        }
    }

cout << ans << endl;
    


    
    return 0;}