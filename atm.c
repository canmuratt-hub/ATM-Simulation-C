#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int secim,tutar,bakiye,girilensifre;
  int toplam=1000;
  int sifre=2346;
  int denemehakki=4;
  
   printf("**ATM (BANKAMATIK) SIMULASYONU**\n\n");
  
  do{
  	printf("Lutfen sifrenizi giriniz: ");
  scanf("%d",&girilensifre);
  
  if(sifre==girilensifre)
  {
  	printf("\nSifre dogru Anasayfaya yönlendiriliyorsunuz.. \n\n");
  }
  else
  {
  	denemehakki--;
  	printf("Sifre hatali kalan deneme hakki %d\n",denemehakki);
  }
  
  if(denemehakki==0)
  {
  	printf("\nKartiniz Bloklandi Musteri Hizmetleri ile gorusun.\n");
  	return 0;
  }
  
  }while(girilensifre!=2346);
  
   
   do{
   	printf("---------------------\n");
    printf("1 Bakiye sorgulama\n");
    printf("2 Para yatir\n");
    printf("3 Para Cek\n");
    printf("4 Cikis\n");
    printf("---------------------\n\n");
    
    printf("Secim Yapiniz: ");
	scanf("%d",&secim);
	
	switch(secim){
	    
	    case 1:
	    	printf("Guncel Bakiyeniz %d'dir..\n",toplam);
	    break;
		
		case 2:
		    printf("\nYatirilacak Tutari giriniz: ");
			scanf("%d",&tutar);
			toplam+=tutar;
			printf("\nToplam yeni bakiyeniz:%d\n",toplam);
		break;
		
		case 3:
		    printf("\nCekmek istediginiz tutar:  ");
			scanf("%d",&tutar);
			if(tutar>toplam)
			{
			  printf("\nHop kardeşim yetersiz bakiye!");	
			}
			else
			{
		    toplam-=tutar;
			printf("Kalan bakiyeniz:%d\n",toplam); 				
			}
		break;
		
		case 4: 
		    printf("Sistemden Cikis Yapiliyor.. İyi günler dileriz:)\n");
		break;
		
		default:
			printf("Hatali secim! 1-4 arasi secim yapabilirsiniz!\n");
		    
	   	}  
    
   }while(secim!=4);
   
	return 0;
}
