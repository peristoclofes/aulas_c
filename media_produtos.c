#include <stdio.h>

int tv;
int notebook;
int smartphone;


float tv_media;
float notebook_media;
float smartphone_media;

int main () {

tv = (800 + 950 + 725);
notebook = (650 + 550 + 700);
smartphone = (1500 + 1800 + 2100);


tv_media = tv / 3.0;
notebook_media = notebook / 3.0;
smartphone_media = smartphone / 3.0;

//Exibição de resultados

printf("Preço médio da TV: R$ %.2f\n", tv_media);
printf("Preço médio do notebook: R$ %.2f\n", notebook_media);
printf("Preço médio de samartphone: R$ %.2f\n", smartphone_media);

return 0;

}