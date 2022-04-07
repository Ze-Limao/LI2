#include <stdio.h>
#include <math.h>
#include <string.h>

#define Aascci 65
//1->guardar as combinações na matriz; 2->print.

//void lojaDoMestreAndre (int matriz[26][26], char s[], int f, int len){
    
//}


int main (){
int f;
char s[52];
int matriz[26][26] = {0};
if(scanf("%d\f", &f)!=1) {
        return 1;
    }
while (fgets(s, 52, stdin) != NULL) {
    int aux=0;
    int len = strlen(s);
    for(int i=0; i < len; i++){
        if(s[i]==' '){
            for(int j = i; j < len; j++){
				s[j] = s[j + 1];
			}
			len--;
			i--;	
		} 
    }
    for(int i=0; s[i] != '\0'; i++){
        for(int j=i; j>0 && s[j-1] > s[j]; j--){
            aux=s[j];
            s[j] = s[j-1];
            s[j-1] = aux;
        }
    }


    for(int i=0; i < len; i++){
        for(int j=i; j < len; j++)
            matriz[s[i] - Aascci][s[j] - Aascci] ++;
    }
}


for(int i=0; i<26; i++){
        for(int j=0; j<26; j++) {
            if(matriz[i][j]>=f){
                if (i==j)
                    printf("%c = %d\n", (Aascci + i), matriz[i][j]);
                else
                    printf("%c%c = %d\n", (Aascci + i),(Aascci + j), matriz[i][j]);
            }
        } 
}

    return 0;
}