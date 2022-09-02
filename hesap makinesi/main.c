//
//  main.c
//  hesap makinesi
//
//  Created by Ezgi on 21.05.2022.
//

#include <stdio.h>
 
int main ()
{
    int sayi1,sayi2;
    int secim;
    
    printf("1.Sayiyi seciniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
    printf("\n******Seciminizi giriniz******\n");
    printf("1.TOPLAMA\n");
    printf("2.CIKARMA\n");
    printf("3.CARPMA\n");
    printf("4.BOLME\n");
    
    printf("Seciminizi giriniz: ");
    scanf("%d",&secim);
    
    if(secim == 1){
        printf("Toplama isleminn sonucu %d dir.", sayi1 + sayi2);
    }
    else if(secim == 2){
        printf("Cıkarma isleminin sonucu %d dir.", sayi1 - sayi2);
    }
    else if(secim == 3){
        printf("Carpma isleminin sonucu %d dir.", sayi1 * sayi2);
    }
    else if(secim == 4){
        printf("Cikarma isleminin sonucu %d dir.", sayi1 / sayi2);
    }
    else{
        printf("Dogru secim yapiniz !!!");
    }
    
}
