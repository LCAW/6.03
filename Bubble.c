#include <stdio.h>

// Werte einlesen
int main(){
int werte[20],i,j,k,temp,e;
float s=0;
    for(i=0; i<20; i++) {
    printf("\nBitte geben Sie einen Wert ein (ganze Zahl): ");
    scanf("%d", &werte[i]);
    }
    
    for(j=0;j<20;j++){
        for(k=0;k<20-j;k++){
            if(werte[k]>werte[k+1]){
                temp=werte[k];
                werte[k]=werte[k+1];
                werte[k+1]=temp;
            }
        }
    }
   
    for(e=0;e<20;e++){
        printf("    %d\n",werte[e]);
    }
    return 0;
}
