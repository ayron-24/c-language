#include <stdio.h>
    
    void main(){
       int a,b,ans;
       char operation;
       printf("Wlecome to calculator!!\n");
       printf("Enter a:");
       scanf("%d",&a);
       printf("Enter b:");
       scanf("%d",&b);

       printf("select the operation (1=+ ,2=-, 3=* 4=/)\n");
       scanf(" %c",&operation);
       
       printf("a:%d\n",a);
       printf("b:%d\n",b);
       printf("operation:%c\n",operation);
      
       if(operation>=1 && operation<=4){
       switch(operation){
         case 1:
         ans=a+b;
         printf("ans:%d\n",ans);
         break;
         case 2:
         ans=a-b;
         printf("ans:%d\n",ans);
         break;
         case 3:
         ans=a*b;
         printf("ans:%d\n",ans);
         break;
         case 4:
         if(b==0){
            printf("error\n");
         }
         else {ans=a/b;
         printf("ans:%d\n",ans);}
         break;}

         
       }
       else {
         printf("invalid operation\n");
       }

       return;
    }