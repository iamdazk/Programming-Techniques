#include <iostream>
#include <algorithm>
#include <cmath>

#define cap 1000

using namespace std;

int n;
int arr[cap];

int minPrime(int);
bool isPrime(int);

int main() {
  cin >> n;
  for (int i = 0 ; i < n ; i++) cin >> arr[i];
  cout << minPrime(0);
  return 0;
}

int minPrime(int i) {
  if (i == n-1) return arr[i];
  else {
    if (isPrime(arr[i])) return min(arr[i],minPrime(i+1));
    else return isPrime(i+1);
  }
}

bool isPrime(int x) {
  for (int i = 2; i < sqrt(x) ; i++)
      if (x % i == 0) return false;
  return true;
}
