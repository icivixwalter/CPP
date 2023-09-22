#include <stdio.h>

char Arr[] = "Ciaone a tutti\n";
// I caratteri rimanenti sono rappresentati da \0
char Matrix[10][2]={{1,1},{2,4},{3,9},{4,16},{5,25},{6,36},{7,49},{8,64},{9,81},{10,100}};

int main(void){
    int i = 0,j = 0;
    for (i;i<sizeof(Arr);i++){
        printf("%c",Arr[i]);
        if (Arr[i]=='\0'&& i<100){
            printf("\nAVVISO: La stringa e' lunga meno di 100 caratteri: %d con \\0 %d\n",i,i+1);
            break;}
        if (Arr[i]=='\0'&& i>100){
            printf("\nAVVISO: La stringa e' lunga piu' di 100 caratteri: %d con \\0 %d\n",i,i+1);
            break;}
        }
    int x;
    for (i = 0;i<10;i=i+1){
        for (j = 0;j<2;j=j+1){
            x=Matrix[i][j];
            printf("%d ",x);
            }
        printf("\n");
    }
	char a;
    scanf("%cA",&a);
	return 0;
}
