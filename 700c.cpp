#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios_base::sync_with_stdio(0) ;cin.tie(0) ;cout.tie(0)

using namespace std;
const int maxn = 2e5 + 3;

int main(){
    FAST_IO;
    int n ;
    cin >> n;

    int x[maxn];
    x[0] = x[n+1] = 1000000005;
    fflush(stdout);
    int l = 1;
    int r = n;

    while (l<= r)
    {
      int mid = (l + r) / 2 ;
        if (x[mid] == 0)
        {
            cout.flush() << "? "<< mid << endl ;
            cin >> x[mid] ;
        }
        if (x[mid - 1] == 0)
        {
            cout.flush() << "? "<< mid - 1 << endl ;
            cin >> x[mid - 1] ;
        }
        if (x[mid + 1] == 0)
        {
            cout.flush() << "? "<< mid + 1 << endl ;
            cin >> x[mid + 1] ;
        }
        if (x[mid] < min(x[mid - 1], x[mid + 1]))
        {
            cout.flush() << "! " << mid << endl ;
            return 0 ;
        }
        if (x[mid - 1] < x[mid])
        {
            r = mid - 1 ;
        }
        else
        {
            l = mid + 1 ;
        }
    }
    


    
    return 0;}