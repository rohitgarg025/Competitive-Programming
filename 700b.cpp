#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
       int A,B,n;
       cin >> A >> B >> n;
        //attack power
        //  initial health
        // number of monsters
       
       vector <int> a(n,0);

       for(int i=0;i<n;i++){
           cin >> a[i];
       }

       int maxa = *max_element(a.begin(), a.end());
       int maxpos = max_element(a.begin(), a.end()) - a.begin();

       vector <int> b(n,0);

       for(int i=0;i<n;i++){
           cin >> b[i];
       }

       for (int i = 0; i < n ; i++)
		{
			if(maxpos==i)
			{
				continue;
			}
			if (B < 1)
			{
				break;
			}
			ll rounds = ceil(1.0 * b[i] / A * 1.0);
			B = B - (a[i] * rounds);
		}


        if (B < 1)
		{
			cout << "NO\n";
			continue;
		}

		// cout<<B<<"\n";
		ll roundmon = ceil(1.0 * b[maxpos] / A * 1.0);
		ll roundhero = ceil(1.0 * B/ a[maxpos] * 1.0);

		if (roundmon > roundhero)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}






        }

    

    return 0;
}



// #include <bits/stdc++.h>
// typedef long long int ll;
// const unsigned int MOD = 1000000007;

// using namespace std;

// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

// 	int t;
// 	cin >> t;
// 	for (int tt = 0; tt < t; tt++)
// 	{
// 		ll attack, health, n;
// 		cin >> attack >> health >> n;

// 		ll monh[n];
// 		ll mona[n];

// 		int m=-1;
// 		int pos=-1;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> mona[i];
// 			if (mona[i] > m)
// 			{
// 				m = mona[i];
// 				pos = i;
// 			}
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> monh[i];
// 		}

// 		for (int i = 0; i < n ; i++)
// 		{
// 			if(pos==i)
// 			{
// 				continue;
// 			}
// 			if (health < 1)
// 			{
// 				break;
// 			}
// 			ll rounds = ceil(1.0 * monh[i] / attack * 1.0);
// 			health = health - (mona[i] * rounds);
// 		}

// 		if (health < 1)
// 		{
// 			cout << "NO\n";
// 			continue;
// 		}

// 		//cout<<health<<"\n";
// 		ll roundmon = ceil(1.0 * monh[pos] / attack * 1.0);
// 		ll roundhero = ceil(1.0 * health / mona[pos] * 1.0);

// 		if (roundmon > roundhero)
// 		{
// 			cout << "NO\n";
// 		}
// 		else
// 		{
// 			cout << "YES\n";
// 		}
// 	}
// #ifndef ONLINE_JUDGE
// 	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
// #endif
// 	return 0;
// }