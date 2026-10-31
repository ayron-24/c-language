#include <stdio.h>
int a=10;
static void wa(){
      a=a+1;
      printf("wa: %d\n",a);
      
      return;
   }
    void wawa(){
      static char b=1;
      b=b+1;
      printf("wawa:%d\n",b);
      wa();
      wa();
      return;

    
    }