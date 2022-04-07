#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>




//***************************************************
//numeros triangulares (n) = (n(n+1))/2
//***************************************************



size_t nTriInator (size_t m, size_t n) {
    size_t a,b;
    a = (sqrt((double) (1 + 8*(m-1))) - 1) /2;
    b = (sqrt((double) (1 + 8*n)) - 1) /2;
    size_t r = b-a;
    return r;
}

//numeros primos
//*****************************************************


//criar um array com os numeros todos do intervalo x y,   int v[x-y];
//e vai passar um ePrimoInator por cada elemento
// (eu sei que este metodo nao e muito eficiente)


size_t nPrimosInator (size_t n, size_t m){
char *arr = malloc((m +1) * sizeof(char));
size_t c=0;
  for (size_t i=0; i<=m; i++){
    arr[i]=1;
  }
arr[0] = arr[1] = 0;

  for (size_t i=0 ; i<=m ;i++){
    if (arr[i]) {
    for(size_t j=i*i; j<=m; j+=i){
          arr[j]=0;
    }
  if (i>=n)
      c++;  
  }
  }
  free(arr);

return c;
}



//******************  MAIN  ********************

int main (){
    size_t x,y;
    if (scanf("%lu %lu", &x, &y)==2)
    {}
    printf ("%lu %lu\n",nTriInator(x,y), nPrimosInator(x,y));  
  return 0;    
}
