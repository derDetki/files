#include<stdio.h>

int main(){
    FILE *datei = fopen("testdatei.txt", "r");

    if (datei == NULL){
        printf("Datei konnte nicht geoeffnet werden");
        return -1;
    } else{
        printf("Datei wurde geoeffnet");
    }
    fclose(datei);
    return 0;
}