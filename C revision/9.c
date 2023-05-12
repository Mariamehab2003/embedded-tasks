#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define ll long long
ll convert(ll);

int main() {
  ll n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  return 0;
}

// function definition
ll convert(ll n) {
  ll dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
