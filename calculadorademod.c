
int main() {
  int i;
  int x;
  int produto;
  int valor;
  int variavel=100;
  
    for(x=0;x<variavel;x++){
      printf("x=%d\n",x);
      //produto=7*x;
      produto=2*x;
      valor=produto-1;
      if(valor%7==0){
        printf("valor =%d \n",valor);
        printf("produto =%d \n",produto);
      }
      
    }
  
  return 0;
