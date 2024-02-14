#include <stdio.h>

int main() {
    
    long long int l,m,a;
    scanf("%lld",&l);
    scanf("%lld",& m);
    scanf("%lld",& a);
  long long int divide1 = l/a;
  long long int divide2 = m/a;
  if(l%a != 0){
    divide1++;
  }
  if(m%a != 0){
     divide2++;
  }
  printf("%lld",divide1 * divide2);

  return 0;
}