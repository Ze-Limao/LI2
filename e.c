#include <stdio.h>
#include <math.h>
#include <string.h>


int palindromoInator (char s[]) {
int r=1;
int c=0;
int n=strlen (s);
    for (int i=0; i<n; i++){
        r=1;
        for (int j=1; 0<=(i-j) && (i+j)<n; j++, r+=2){
            if(s[i-j] != s[i+j])
                break;
        }  
        if(r>c)
            c=r;
    }
    for (int i=0; i<n; i++){
        r=0;
        for (int j=0, k=0; 0<=(i-j) && (i+j)<n; k--,j++, r+=2){
            if(s[i+k] != s[i+j+1])
                break;
        }   
        if(r>c)
            c=r;
    }

return c;
}


int main () {
    char s[10000];   
    if ((fgets (s,10000,stdin)) == NULL) return 1;
    printf ("%d\n", palindromoInator(s));
    return 0;
}

