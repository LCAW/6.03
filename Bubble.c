#include <stdio.h>
// ich wurde geändert
// Werte einlesen
int main(){
int i,j,k,temp,e;
    /*for(i=0; i<20; i++) {
    printf("\nBitte geben Sie einen Wert ein (ganze Zahl): ");
    scanf("%d", &werte[i]);
    }*/
   int werte[20]= {4,3,5,64,75,33,43,54,636,555,45,6,44,90,87,1,2,3,4};
    
    for(j=0;j<20;j++){
        for(k=0;k<20-j-1;k++){
            if(werte[k]>werte[k+1]){
                temp=werte[k];
                werte[k]=werte[k+1];
                werte[k+1]=temp;
            }
        }
    }
   
    for(e=0;e<20;e++){
        printf("    %d\n",werte[e]);
    }}
