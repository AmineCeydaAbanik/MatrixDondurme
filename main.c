#include <iostream>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include "matrixOps.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* @file main.c
 * @description men�y� kontrol eder .burada i�lemlerin kontrolleri yap�l�r.
 * @assignment 1
 * @date 26.11.2019
 * @author Amine Ceyda ABAN�K - amineceyda.abanik@stu.fsm.edu.tr */




int main(void) {
	
	int satirSayisi;
	int sutunSayisi;
	int range ;
	int **matrix;
	
	while(1){
	
	printf("Programimiza hos geldiniz\n");
	printf("Matrixin satir sayisini giriniz\n");
    scanf("%d",&satirSayisi);
	printf("matrixin sutun sayisini giriniz\n");
	scanf("%d",&sutunSayisi);
	printf("Matrix elemanlari icin aralik giriniz\n");
	scanf("%d",&range);

   
	matrix=matrixeYerAyir(matrix,satirSayisi,sutunSayisi);    //bellekte yer a�ar ve konumbilgisini pointera atar
	matrixOlustur(matrix,satirSayisi,sutunSayisi,range);//sat�r ve s�tun say�s�na g�re matrix olu�turur ve verdi�imiz aral��a g�re random de�er atar.
    yazdir(matrix,satirSayisi,sutunSayisi);   //matriximizi ekrana yazd�r�r.
	matrixiDondur(matrix,satirSayisi,sutunSayisi);   //matrixi kenarlar�ndaki elemanlar� saat y�n�n�n tersine 3 ad�m d�nd�r�r. 
	yazdir(matrix,satirSayisi,sutunSayisi);   //d�nd�rd�kten sonra matriximizi tekrar yazd�r�yoruz.
	
	free(matrix); //ay�rd���m�z belle�i sisteme geri veririz.

}
return 0;
}

