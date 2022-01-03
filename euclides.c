#include <stdio.h>

int main() {
 
  printf("valor %d \n\n\n",euclide(54321,50)); 
  printf("valor %d \n",euclide(20,25));
  return 0;
}

int euclide(int a, int b)
{
    int c;
    c=a%b;
    if(c==0){
        printf("retorno de b= %d\n",b);
        return b;
    }
    else{
         printf("retorno de a= %d , b=%d\n",a,b);
        return euclide(b,c);
    }
 }
