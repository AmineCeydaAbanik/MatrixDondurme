#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include "matrixOps.h"

/* @file matrixOps.c
 * @description burada matrix fonksiyonlarý vardýr.programýn ana kodlarý bulunur
 * @assignment 1
 * @date 27.11.2019
 * @author Amine Ceyda ABANÝK - amineceyda.abanik@stu.fsm.edu.tr */

int** matrixeYerAyir(int **matrix,int satirSayisi,int sutunSayisi){
;

	int i;
	int j;	
	matrix = (int**)malloc(satirSayisi * sizeof(int*));

    for(i=0;i<sutunSayisi;i++){
        matrix[i] =(int*)malloc(sutunSayisi*sizeof(int));
    }
    return matrix;
}

void matrixOlustur(int **matrix,int satirSayisi,int sutunSayisi,int range){
srand (( unsigned ) time (NULL) ) ;
	
	int i;
	int j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			*(*(matrix+i)+j)=rand()%range;
			
		}
	}
}

void yazdir(int **matrix,int satirSayisi,int sutunSayisi){
		printf("\n");
		int i;
		int j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d    ",*(*(matrix+i)+j));
		}
		printf("\n");
	}
}

void matrixiDondur(int **matrix,int satirSayisi,int sutunSayisi){
	int i;
	int j;
	int matris1[satirSayisi][sutunSayisi];
	int matris2[satirSayisi][sutunSayisi];
	for( i = 0; i < satirSayisi-1; i++ ) {
		for( j = 0; j < sutunSayisi-1 ; j++ ){//j den bir sonrakinin hata vermemsi için -1
		     if(i==0){                    
                    matris1[0][j]=*(*(matrix+0)+j+1);
                    matris1[satirSayisi-1][j+1]=*(*(matrix+satirSayisi-1)+j);
                   
                    }                   
                    if(j==0){
                       matris1[i+1][0]=matrix[i][0];
                       matris1[i][sutunSayisi-1]=*(*(matrix+i+1)+sutunSayisi-1);
                     
                    }                      
                    if(i!=0){
                    	if(j!=0){
					
                       matris1[i][j]=*(*(matrix+i)+j);
                    }
                    }		
		}


}

	for( i = 0; i < satirSayisi-1; i++ ) {
		for( j = 0; j < sutunSayisi-1 ; j++ ){
		     if(i==0){                     
                    matris2[0][j]=matris1[0][j+1]; 
                    matris2[satirSayisi-1][j+1]=matris1[satirSayisi-1][j];
                   
                    }                   
                    if(j==0){
                       matris2[i+1][0]=matris1[i][0];
                       matris2[i][sutunSayisi-1]=matris1[i+1][sutunSayisi-1];
                     
                    }                      
                    if(i!=0){
                    	if(j!=0){
					
                       matris2[i][j]=matris1[i][j];
                    }
                    }		
		}

}

	for( i = 0; i < satirSayisi-1; i++ ) {
		for( j = 0; j < sutunSayisi-1 ; j++ ){
		     if(i==0){                     
                    *(*(matrix+0)+j)=matris2[0][j+1]; 
                    *(*(matrix+satirSayisi-1)+j+1)=matris2[satirSayisi-1][j];
                   
                    }                   
                    if(j==0){
                       *(*(matrix+i+1)+0)=matris2[i][0];
                      *(*(matrix+i)+sutunSayisi-1)=matris2[i+1][sutunSayisi-1];
                     
                    }                      
                    if(i!=0){
                    	if(j!=0){
					
                       *(*(matrix+i)+j)=matris2[i][j];
                    }
                    }		
		}

	printf("\n");
}
}

