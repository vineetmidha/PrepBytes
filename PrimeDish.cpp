// https://mycode.prepbytes.com/contest/MARATHONFEB21/problems/PRIMEDISH

/*

Marathon Feb-21
Q-3: Prime Dish

Cole is a foodie, but he can only eat the food if it's tastiness is a prime number. 
The food is numbered from 1 to N. The tastiness of the food increases by 1 unit every day. 
Each day he checks if the tastiness of the food is a prime number, then he eats it. 
If there are multiple such foods in a day, then he eats them in increasing order of their index.

Input Format
The first-line will contain 
T, the number of test cases. Then the test cases follow.
Each test case contains two lines of input, the first line contains the number of food N.
The next line contains N integers t1,t2,…,tn — the initial tastiness of food.

Output Format
For each test case, output in a single line in which order food will be eaten by Cole.
Constraints
1≤T≤10
1≤N≤10^5
2≤ti≤6×10^6

Time limit
1 second

Example
Input
1
5
3 5 4 17 9

Output
1 2 4 3 5

Sample test case Explanation
On the first-day food numbered 
1,2, and 4 are eaten by Cole, now the tastiness of 3 and 5 remains the same.
On the second-day food numbered 3 is eaten as its tastiness becomes 5, now the tastiness of food 5 becomes 10.
On the third-day food numbered 5 is eaten as its tastiness becomes 11.
*/

// Getting WA on submission

#include <bits/stdc++.h>
using namespace std;

int * primes;

void genPrimeSieve(){
    long n = 1e5+1;

    primes = new int[n];

    primes[0] = primes[1] = 0;

    for (int i=2; i<n; i++){
        primes[i]=1;
    }

    for (int i=2; i<=n; i++){
        if (primes[i]){
            for (int j=2*i; j<=n; j+=i){
                primes[j] = 0;
            }
        }
    }
}

int solve(int a[], int n){
  while (1){
    int flag = 0;
    for (int i=0; i<n; i++){
      if (a[i]!=-1 && primes[a[i]]){
        flag = 1;
        cout << (i+1) << " ";
        a[i]=-1;
      } else {
        a[i]++;
      }
    }  
    if (flag==0) break;    
  }
}

void display(){
  for (int i=0; i<100; i++){
    cout << i << " " << primes[i] << endl;
  }  
}

int main()
{
  int t;
  cin >> t;
  
  genPrimeSieve();

  while (t--){
    int n;
    cin >> n;
    
    int a[n];
    
    for (int i=0; i<n; i++){
      cin >> a[i];
    }
    
    solve(a, n);
    
    cout << endl;
  }
  
  return 0;
}
