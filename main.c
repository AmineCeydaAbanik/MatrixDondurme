#include <iostream>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include "matrixOps.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* @file main.c
 * @description menüyü kontrol eder .burada iþlemlerin kontrolleri yapýlýr.
 * @assignment 1
 * @date 26.11.2019
 * @author Amine Ceyda ABANÝK - amineceyda.abanik@stu.fsm.edu.tr */




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

   
	matrix=matrixeYerAyir(matrix,satirSayisi,sutunSayisi);    //bellekte yer açar ve konumbilgisini pointera atar
	matrixOlustur(matrix,satirSayisi,sutunSayisi,range);//satýr ve sütun sayýsýna göre matrix oluþturur ve verdiðimiz aralýða göre random deðer atar.
    yazdir(matrix,satirSayisi,sutunSayisi);   //matriximizi ekrana yazdýrýr.
	matrixiDondur(matrix,satirSayisi,sutunSayisi);   //matrixi kenarlarýndaki elemanlarý saat yönünün tersine 3 adým döndürür. 
	yazdir(matrix,satirSayisi,sutunSayisi);   //döndürdükten sonra matriximizi tekrar yazdýrýyoruz.
	
	free(matrix); //ayýrdýðýmýz belleði sisteme geri veririz.

}
return 0;
}

