#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;


int main(int argc, char const *argv[])
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int x;
            cin >> x;
            if(x == 1){
                cout << abs(3-i) + abs(3-j) << endl;
                return 0;
            }

        }
    }

    return 0;
}
