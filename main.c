#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int enkucuk(int dizi[], int esayisi){
	
	int k,gecicidegisken = dizi[0];
	
	for(k=1;k<esayisi;k++){      /*1*/
		
		if(gecicidegisken>dizi[k]){     /*2*/  
			
			gecicidegisken=dizi[k];     /*3*/  
		}
	}
	return gecici;             /*4*/
}


/* *1* 1+(n+1)+n   1.sat�r d�ng� oldu�u i�in ortadaki i�lem n+1 kadar tekrar eder.1.i�lem sadece de�er atama i�lemi oldu�u i�in 1 kere tekrar eder. 
				    3.i�lem ise sonuncu d�ng� s�ras� n oldu�u i�in n kere tekrar eder
				    
   *2* 1           2.sat�rda 1 i�lem yap�lm��t�r ve 1 kere tekrarlanm���tr.
   *3* 1           3.sat�rda 1 i�lem yap�lm��t�r ve 1 kere tekrarlanm���tr.   
   *4* 1           4.sat�rda 1 i�lem yap�lm��t�r ve 1 kere tekrarlanm���tr.
   T(n) = 2n+5     B�t�n sonu�lar topland���nda 2n+5 cevab� ��kar.
   
   */   

