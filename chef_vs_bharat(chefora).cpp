#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define l1 long long
#define mod 1000000007
l1 power(l1 b, l1 p) {
   l1 r = 1;
   while (p != 0) {
      if (p % 2 == 0) {
         b = ((b % mod) * (b % mod)) % mod;
         p = floor(p / 2);
      }
      else {
         r = ((r % mod) * (b % mod)) % mod;
         p = p - 1;
      }
   }
   return r;
}

l1 chefona(l1 num) {
   l1 cnum = num;
   l1 rnum = 0;
   if (num < 10) {
      rnum = cnum;
   }
   else if (num >= 10) {
      num = num / 10;
      while (num != 0) {
         cnum = cnum * 10 + num % 10;
         num = num / 10;
      }
      rnum = cnum;
   }
   return rnum;
}

int main()
{
#ifndef ONLINE_JUDGE
   freopen("inputc.txt", "r", stdin);
   freopen("outputc.txt", "w", stdout);
#endif

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   l1 a[100001] = {0};
   l1 prearray[100001] = {0};
   for (l1 i = 1; i <= 100001; i++) {
      a[i] = chefona(i);
      prearray[i] = prearray[i - 1] + a[i];
   }
   l1 t;
   cin >> t;
   while (t--) {
      l1 l, r;
      cin >> l >> r;
      l1 diff = prearray[r] - prearray[l];
      cout << power(a[l], diff) << "\n";

   }
   return 0;
}