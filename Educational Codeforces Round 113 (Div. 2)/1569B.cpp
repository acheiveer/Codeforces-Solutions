/*      ###########################
        #  Author : acheiveer     #
        #  College : HIT,Haldia   #
        ###########################
*/
#include<bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long int              ll;
typedef vector<int>                vi;
typedef vector<ll>                 vl;
typedef vector<vector<int>>        vvi;
typedef pair<int, int>             pi;
typedef vector<pair<int, int>>      vpi;
typedef vector<pair<ll, ll>>        vpl;

#define sz(x)                      ((int)(x).size()) //never forget to type into int
#define inp(a, n)                  for(int Ele=0; Ele<(n); Ele++)cin>>a[Ele]
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define forn(i,e)                  for(ll i = 0; i < e; i++)
#define forsn(i,s,e)               for(ll i = s; i < e; i++)
#define rforn(i,s)                 for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e)              for(ll i = s; i >= e; i--)
#define set_bits(n)                __builtin_popcountll(n)
#define max(a, b)                  (a < b ? b : a)
#define min(a, b)                  ((a > b) ? b : a)

#define INF                        1e18
#define kick(x)                    cout << "Case #" << x << ": ";
#define lb                         lower_bound
#define ub                         upper_bound
#define min_element                *min_element
#define max_element                *max_element
#define pb                         push_back
#define ppb                        pop_back
#define mp                         make_pair
#define rr return

//#define mod                       (in1e9+7
#define ff                        first
#define ss                        second
#define ceil(x,a)                 ((x + a - 1)/(a))
#define all(v)                    v.begin(), v.end()

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

int   dx[4] = {1, -1, 0, 0};
int   dy[4] = {0, 0, -1, 1};

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {return (a.second < b.second);}
// check whether the given number is pow of 2

bool isPowerOfTwo(ll x) {return (x && !(x & (x - 1)));}

//Prime_Seive check prime or not if no less than 10000000
bool prime[10000000]; void seive() { ll N = 10000000; memset(prime, true, sizeof(prime)); prime[0] = false; prime[1] = false; for (ll i = 2; i * i <= N; i++) { if (prime[i]) { for (ll j = i * i; j <= N; j += i) { prime[j] = false;}}}}

bool is_prime(ll n) {if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (int i = 5; i * i <= n; i = i + 6)if   (n % i == 0 || n % (i + 2) == 0)return false; return true;}

//no of prime no less than n
int countSieve(int n) {bool isPrime[n + 1]; for (int i = 0; i <= n; i++) {isPrime[i] = true;} isPrime[0] = false; isPrime[1] = false; for (int i = 2; i * i <= n; i++) {if (isPrime[i] == true) {for (int j = i * i; j <= n; j += i) {isPrime[j] = false;}}} int count = 0; for (int i = 0; i <= n; i++) {if (isPrime[i] == true) {count++;}} return count;}
//print all prime no less than n
void printSieve(int a, int n) {bool isPrime[n + 1]; for (int i = 0; i <= n; i++) {isPrime[i] = true;} isPrime[0] = false; isPrime[1] = false; for (int i = 2; i * i <= n; i++) {if (isPrime[i] == true) {for (int j = i * i; j <= n; j += i) {isPrime[j] = false;}}} int count = 0; for (int i = 0; i <= n; i++) {if (isPrime[i] == true) {cout << i << " ";}} }


int gcd(int a, int b) {
   return (b == 0 ? a : gcd(b, a % b));
}


unsigned int factorial(unsigned int n)
{
   if (n == 0)
      return 1;
   return n * factorial(n - 1);
}


//विजयी भवः
void singhaa() {
   ll number;
   cin >> number ;
   string str1;
   cin >> str1 ;
   vector<ll> a;
   char ans[number + 10][number + 10];
   ll ca2 = 0;
   for (int i = 0; i < number; i++) {
      ca2 += (str1[i] == '2');
      if (str1[i] == '2') {
         a.push_back(i);
      }
   }
   memset(ans, '.', sizeof(ans));
   if (ca2 <= 2 && ca2) {
      cout << "NO" << endl;
   }
   else {
      cout << "YES" << endl;
      for (int i = 0; i < str1.size(); i++) {
         if (str1[i] == '1') {
            for (int j = 0; j < number; j++) {
               ans[i][j] = '=';
               ans[j][i] = '=';
            }
         }
      }
      for (int i = 0; i < a.size(); i++) {
         for (int j = 0; j < a.size(); j++) {
            if (i == j) {
               continue;
            }
            if (ans[a[i]][a[j]] == '.') {
               ans[a[i]][a[j]] = '=';
               ans[a[i]][a[j]] = '=';
            }
         }
         if (i == a.size() - 1) {
            ans[a[i]][a[0]] = '+';
            ans[a[0]][a[i]] = '-';
         }
         else {
            ans[a[i]][a[i + 1]] = '+';
            ans[a[i + 1]][a[i]] = '-';
         }
      }
      for (int i = 0; i < number; i++) {
         ans[i][i] = 'X';
         for (int j = 0; j < number; j++) {
            cout << ans[i][j];
         }
         cout << endl;
      }
   }
}

int main() {
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   fast_io


   ll t = 1;
   // helper();
   cin >> t;
   while (t--) {
      //cout<<"oooo";
      singhaa();
   }

   return 0;
}







 
