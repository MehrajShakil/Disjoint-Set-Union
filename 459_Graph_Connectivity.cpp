
//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp> //order_of_key return number of elements less than x, find_by_order return index (pointer use kora lgbe)

using namespace std;
using namespace __gnu_pbds;

#define ull    unsigned long long
#define ll    long long
#define ios    ios::sync_with_stdio(0);cin.tie(0);
#define ses   "\n"
//#define INF   ((int)2e18)
#define ii pair<ll, ll>

string digit="0123456789";
string small="abcdefghijklmnopqrstuvwxyz";
string capital="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {1,-1,0,0}; // 4-direction...........
int dy4[]= {0,0,1,-1};

const int N=1e6+5;
const ll M=1e18;

typedef tree< ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<pair<ll, ll>,null_type,less<pair<ll, ll>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;

/////////////////////////////////////////////////////////////////////////////
int parent[27], Size[27];

void makeSet(int n)
{
    parent[n]=n;
    Size[n] = 1;
}

int Find(int reprasentative)
{
    if (parent[reprasentative] == reprasentative)
    {
        return reprasentative;
    }
    return parent[reprasentative] = Find(parent[reprasentative]);
}

void Union(int a,int b)
{
    a = Find(a);
    b = Find(b);
    if(a != b)
    {
            if (Size[a] < Size[b])
                swap(a, b);
                parent[b]=a;
                Size[a]+=Size[b];
   }
}
////////////////////////////////////////////////////////////////////////////

//main function is here.........
int main()
{
   int t;
    char s[10];
    scanf("%d ", &t);
   while(t--){
    gets(s);
    ll sz=s[0]-'A'+1;
    ll ans=sz;
   for(ll i=1;i<=s[0]-'A'+1;i++){
            makeSet(i);
   }
   while(gets(s)){
                if(s[0] == '\0')
                break;
         if(Find(s[0]-'A'+1)==Find(s[1]-'A'+1))continue;
         else {Union(s[0]-'A'+1,s[1]-'A'+1);ans--;}
   }

   set<ll> ss;


   cout<<ans<<ses;
   if(t)
            puts("");

}
return 0;
}



//Alhamdulillah
