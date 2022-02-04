def main():
    #n = int(input("Digite n: "))
    #m = int(input("Digite m: "))
    #n=3**2021-1
   # m=3**1703-1
    n=30
    m=0
   
    i=0
    anterior  = n
    atual     = m
    resto = atual % anterior
    #print("resto",resto , "atual",atual ,"anterior" ,anterior)
    while resto != 0:
        print("i=",i+1)
        print(" anterior",anterior,"atual",atual,"\n",)
        resto = anterior % atual;
  
        anterior = atual;
        atual = resto;

    print("MDC(\n%d,\n%d)\n=%d" %(n,m,anterior))

#-------------------------------------------------
main()
#print("%d",3**2021-1)
