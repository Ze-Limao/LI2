#include <stdio.h>

int maior (int a,int b,int c) {
   
    if (a>b && a>c)
        return a;
    else if (b>a && b> c)
        return b;
    else    
        return c;    
        
}

//****************************************************
int efact (int x){
    int i,t;
    i=t=2;
    do{
     t=x;
     x/=i;
     t%=i;
     i++;
    }
    while (t==0 && x>1);

    if (x==1)
        return 1;
    else 
        return -1;       
    
}

//**************************************************************      void nao tem return, mas da printf
void ordem (int a, int b, int c){ 
  if (efact(maior(a,b,c))==1)
    printf("FATORIAL\n");
  else
        {
            if (a>b && a>c)
              {
                if (c>b)
                  printf("%d %d %d\n", b,c,a);
                else 
                  printf("%d %d %d\n", c,b,a);
              }  
            if (b>a && b>c)
              {
                if (c>a)
                  printf("%d %d %d\n", a,c,b);
                else
                  printf("%d %d %d\n", c,a,b);
              }
            if (c>a && c>b)
              {
                if (a>b)
                  printf("%d %d %d\n", b,a,c);
                else 
                  printf("%d %d %d\n", a,b,c);
              }
        }        
}
//***********************************

int main (){
    int a,b,c;
    if (scanf ("%d %d %d",&a,&b,&c)==3)
    {}
    ordem(a,b,c);
   return 0;
}