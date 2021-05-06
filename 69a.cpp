#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;


int main(int argc, char const *argv[])
{
    int x=0,y=0,z=0;
    int n;
    cin >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        x+= a;
        y+=b;
        z+=c;

    }
    if(!x && !y && !z){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
