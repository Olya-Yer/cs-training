#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  long long int cc_number;
  printf("enter the credit card number");
  scanf("%lld\n",&cc_number );
  printf("your credit card number is %lld\n",cc_number );
  int checksum=0;
  long long int evens = cc_number;
  long long int odds= cc_number;
  int nDigits;
  if (cc_number != 0) {
    long long int copy_of_num = cc_number;
    while (!(copy_of_num<10)) {
      nDigits+=1;
      printf("copy_of_num %lld\n",copy_of_num );
      copy_of_num = copy_of_num/10;
    }
    printf("nDigits %d\n", nDigits );

    for (int i = 1; i <= nDigits; i++) {
      for (size_t j = 0; j <= i; j= 2*j+2) {
        odds = odds/10;
      }
      for (size_t k = 0; k <= i; k= 2*k+1) {
        evens = evens/10;
        }
      printf("odds ");
      printf("%lld\n",odds);

        printf("evens");
        printf("%lld\n",evens);

      checksum = checksum +((evens%10)*2)+odds%10;
      //checksum = checksum +(evens%10)*2;
      printf("checksum ");
      printf("%d\n",checksum);

      printf("i= %d\n",i );

    }
   printf("cc_number %lld\n",cc_number );
   checksum = checksum+cc_number%10;
   printf("checksum ");
   printf("%d\n",checksum);


  }


  if (checksum%2==0) {
    printf("%lld\n",cc_number/10000000000000 );
    if (nDigits == 15){
      if (cc_number/10000000000000==34 || cc_number/10000000000000==37) {
        printf("Amex  \n");
      }}
    if (nDigits == 16){
      if (cc_number/100000000000000>=51 || cc_number/100000000000000<=55) {
        printf("MasterCard  \n");
      }}
    if (nDigits == 13 || nDigits ==16){
      if (cc_number/1000000000000000==4 || cc_number/1000000000000==4) {
      printf("Visa  \n");
      }}
  } else {
    printf("not valid");
  }

  return 0;
}
