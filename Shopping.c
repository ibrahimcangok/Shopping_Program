#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Girdiğimiz menu değişkenleri sayfalar arası geçişlerde hangi alt gruba gitmek istiyorsak ona götürmektedir
	//Bütün veri değişkenleri en başta atandı.
	//Float kullanmamdaki amaç sayıların arasındaki bazı değerlerin virgüllü olmasıdır o yüzde float değişkeni noktadan sonraki sayılarıda gösteriyor olmasıdır.
	
	float top;
	float atel1=1500;
	float atel2= 2750;
	float atel3 =8832;
	float asaat1= 543.99;
	float asaat2= 1324.50;
	float asaat3=850;
	float yaz1=553.50;
	float yaz2=848.20;
	float yaz3=1433.33;
	float bil1=14600;
	float bil2=12964;
	float bil3=22920;
	float bil4=36123;
	int secm;
	int s1,s2,s3,s4;
	s1=1;
	s2=0;
	s3=1;
	s4=0;
	top=0;
	
 	//Başlangıç ekranında yazılması gereken başlıkları yazdım.
	printf("**********___ABC ELEKTRONIK___********** \n \n");
	printf("--------------Hosgeldiniz--------------- \n \n");
	printf("**************************************************** \n \n");
	
	//For değişkeni sayesinde yapılan işlemler ardınca sıralanarak sürekli olarak döngüye girmesini sağladım.
	for(s2 ; s2<s1 ; s2++)
	{
	printf("1- Urun ve fiyat sorgula \n");
	printf("2- Sepete urun ekle \n");
	printf("3- Siparis tamamla \n");
	printf("4- Sonlandir \n \n");
	printf("**************************************************** \n \n");
	//Burada hangi başlık adı altındaki sayfaya gitmek istiyorsak ona göre Switch Case ve İf Else ataması yapıyoruz ve alt alta sırayla yazdırıyoruz.
	printf("Seciminiz :");
	scanf("%d",&secm);
	
	if(secm == 1 )
	{
	
	for(s4 ; s4<s3 ; s4++)
	{	
		//Daha sonra hangi elektronik eşyaya gitmek istiyorsak onun değerine karşılık gelen sayıya basıyoruz ve istediğimiz ekrana gidiyoruz.
		printf("**************************************************** \n");
		printf("Hangi kategoriden urun sorgulamak istiyorsunuz ? \n");
		printf("1- Akilli Telefon \n");
		printf("2- Akilli Saat \n");
		printf("3- Yazici \n");
		printf("4- Bilgisayar \n");
		printf("**************************************************** \n \n");
		printf("Seciminiz :");
	 	scanf("%d",&secm);
		
		switch(secm)
					{
						case 1:
							{
								// 1'e Bastığımız sayıda akıllı telefonların fiyatları karşımıza geliyor.
								//Bütün değişkenlerde printf ile yazdırıyoruz.
								//scanf ile okutuyoruz.
								//Ve virgülden sonra hangi değişkenin fiyatını görmek istiyorsak o değişkenin ismini yazıyoruz.
								printf("**************************************************** \n");
								printf("Akilli telefon-1 %.2f TL \n",atel1);
								printf("Akilli telefon-2 %.2f TL \n",atel2);
								printf("Akilli telefon-3 %.2f TL \n",atel3);
								printf("**************************************************** \n");
							}
							break;
						case 2:
							{
								//2'ye Bastığımızda akıllı saatlerin fiyatları karşımıza geliyor.							
								printf("**************************************************** \n");						
								printf("Akilli saat-1 %.2f TL \n",asaat1);
								printf("Akilli saat-2 %.2f TL \n",asaat2);
								printf("Akilli saat-3 %.2f TL \n",asaat3);
								printf("**************************************************** \n");	
							}
							break;
						case 3:
							{
								//3'e Bastığımızda yazıcıların fiyatları karşımıza geliyor.
								printf("**************************************************** \n");
								printf("Yazici A %.2f TL \n",yaz1);
								printf("Yazici B %.2f TL \n",yaz2);
								printf("Yazici C %.2f TL \n",yaz3);
								printf("**************************************************** \n");
							}
							break;
						case 4:
							{
								//Ve son olarak 4'e bastığımızda bilgisayarların fiyatları karşımıza geliyor.
								printf("**************************************************** \n");
								printf("Bilgisayar X %.2f TL \n",bil1);
								printf("Bilgisayar Y %.2f TL \n",bil2);									
								printf("Bilgisayar Z %.2f TL \n",bil3);
								printf("Bilgisayar Q %.2f TL \n",bil4);
								printf("**************************************************** \n");		
							}
							break;
							default:
							printf("Hatali Giris !!!\n");
							break;
							//Her Case atamasının altında break komutunu kullanarak herhangi bir hatayı önleyerek programı sağlama alıyoruz.
					}		//Ve break komutunun altına da default komutunu yazarak hatayı en aza indirmeye çalışıyoruz. 
		printf("**************************************************** \n");
		printf("1- Baska kategori urunlerini sorgula \n");
		printf("2- Ana menuye don \n");
		printf("Seciminiz :");
	 	scanf("%d",&secm);
		
		if(secm == 1)
		{
			s3++;
		}
		
		else if(secm == 2)
		{
			s1++;
		}
		else
		{
			printf("Hatali Giris !!!\n");
		}		
	}
		s3++ ;
}
	
	else if(secm == 2)
	{
		for(s4 ; s4<s3; s4++)
		{
		//Burada karşımıza gelen ekranda hangi üründen eklemek istiyorsak o cihaza karşılık gelen sayıya basıyoruz.							   
		printf("**************************************************** \n");
		printf("Hangi kategoriden urun eklemek istiyorsunuz ? \n");
		printf("1- Akilli Telefon \n");
		printf("2- Akilli Saat \n");
		printf("3- Yazici \n");
		printf("4- Bilgisayar \n");
		printf("**************************************************** \n \n");
		printf("Seciminiz :");
	 	scanf("%d",&secm);
		
		switch(secm)
		{	
			case 1: 
			{
				/*1'e bastığımız zaman akıllı telefonların fiyat listesi geliyor,
						istediğimiz telefona bastığımız zaman fiyatının karşılığını toplam değişkeninde saklıyor ve ne kadar telefon seçtiysek fiyatının üstüne o kadar ekliyor.
						*/
						printf("Akilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz? \n ");
						printf("**************************************************** \n");
						printf("Akilli telefon-1 %.2f TL \n",atel1);
						printf("Akilli telefon-2 %.2f TL \n",atel2);
						printf("Akilli telefon-3 %.2f TL \n",atel3);
						printf("**************************************************** \n");
						printf("Seciminiz :");
						scanf("%d",&secm);
						
						//Burada yaptığımız işlemde if else değişkenini kullandık, 
						//buradaki amacımız hangi telefonu istiyorsak onun sayısal karşılığına basarak fiyatlarını teker teker toplatmasını sağladık.
						
						if(secm==1)
						{
						//1. Telefon 1500 TL
						top+=1500;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",atel1);	
						}
						else if(secm==2)
						{
						//2. Telefon 2750 TL
						top+=2750;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",atel2);
						}
						else if(secm==3)
						{
						//3. Telefon 8832 TL
						top+=8832;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",atel3);
						}
						else
						{
						//Farklı bir sayı girdiğimizde hata değişkenini atadık.
						printf("Hatali Giris !!!\n");
						}						
			}
			break;
					/*2'ye bastığımız zaman akıllı saatlerin fiyat listesi geliyor,
					istediğimiz saate bastığımız zaman fiyatının karşılığını toplam değişkeninde saklıyor ve ne kadar saat seçtiysek fiyatının üstüne o kadar ekliyor.
					*/
			
			case 2:
					{
						printf("Akilli saat kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
						printf("**************************************************** \n");
						printf("Akilli saat-1 %.2f TL \n",asaat1);
						printf("Akilli saat-2 %.2f TL \n",asaat2);
						printf("Akilli saat-3 %.2f TL \n",asaat3);
						printf("**************************************************** \n");
						printf("Seciminiz :");
						scanf("%d",&secm);
						
						if(secm==1)
						{
						//1.Saatin fiyatı 543.99 TL
						top+=543.99;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",asaat1);	
						}
						else if(secm==2)
						{
						//2.Saatin fiyatı 1324.50 TL
						top+=1324.50;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",asaat2);
						}
						else if(secm==3)
						{
						//3.Saatin fiyatı 850 TL
						top+=850;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",asaat3);
						}
						else
						{
						//Farklı bir sayı girdiğimizde hata değişkenini atadık.
						printf("Hatali Giris !!!");
						}
					}
					break;
					
					/*3'e bastığımız zaman yazıcıların fiyat listesi geliyor,
					istediğimiz yazıcıya bastığımız zaman fiyatının karşılığını toplam değişkeninde saklıyor ve ne kadar yazıcı seçtiysek fiyatının üstüne o kadar ekliyor.
					*/
					
			case 3:
					{
						printf("Yazici kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
						printf("**************************************************** \n");
						printf("Yazici A %.2f TL \n",yaz1);
						printf("Yazici B %.2f TL \n",yaz2);
						printf("Yazici C %.2f TL \n",yaz3);
						printf("**************************************************** \n");
						printf("Seciminiz :");
						scanf("%d",&secm);
						
						//Burada yaptığımız işlemde tekrardan if else değişkenini kullandık, 
						//buradaki amacımız hangi yazıcıyı istiyorsak onun sayısal karşılığına basarak fiyatlarını teker teker toplatmasını sağladık.
			
						if(secm==1)
						{
						//1.Yazıcının fiyatı 553.50 TL
						top+=553.50;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",yaz1);		
						}
						else if(secm==2)
						{
						//2.Yazıcının fiyatı 848.20 TL
						top+=848.20;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",yaz2);		
						}
						else if(secm==3)
						{
						//3. Yazıcının fiyatı 1433.33 TL
						top+=1433.33;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",yaz3);
						}
						else
						{
						//Farklı bir sayı girdiğimizde hata değişkenini atadık.
						printf("Hatali Giris !!!\n");
						}				
					}
					break;
					
					/*Ve son olarak 4'e bastığımız zaman bilgisayarların fiyat listesi karşımıza geliyor,
					istediğimiz bilgisayara bastığımız zaman fiyatının karşılığını toplam değişkeninde saklıyor ve ne kadar bilgisayar seçtiysek fiyatının üstüne o kadar ekliyor.
					*/
					
			case 4:
					{
						printf("Bilgisayar kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
						printf("**************************************************** \n");
						printf("Bilgisayar X %.2f TL \n",bil1);
						printf("Bilgisayar Y %.2f TL \n",bil2);
						printf("Bilgisayar Z %.2f TL \n",bil3);
						printf("Bilgisayar Q %.2f TL \n",bil4);
						printf("**************************************************** \n");
						printf("Seciminiz :");
						scanf("%d",&secm);
						//Burada yaptığımız işlemde tekrardan if else değişkenini kullandık, 
						//buradaki amacımız hangi bilgisayarı istiyorsak onun sayısal karşılığına basarak fiyatlarını teker teker toplatmasını sağladık.
						
						if(secm==1)
						{
						//1.Bilgisayarın fiyatı 14600 TL
						top+=14600;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",bil1);	
						}
						else if(secm==2)
						{
						//2.Bilgisayarın fiyatı 12964 TL
						top+=12964;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",bil2);
						}
						else if(secm==3)
						{
						//3.Bilgisayarın fiyatı 22920 TL
						top+=22920;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",bil3);
						}
						else if(secm==4)
						{
						//4.Bilgisayarın fiyatı 36123 TL
						top+=36123;
						printf("Toplam sepet tutariniz %.2f TL \n",bil4);
						}
						else
						{
						//Farklı bir sayı girdiğimizde hata değişkenini atadık.
						printf("Hatali Giris !!!\n");
						}		
					}
					break;
			
			default:
			printf("Hatali Giris !!!\n");
			break;
										
		}
		
		printf("**************************************************** \n");
		printf("1- Sepete urun ekle \n");
		printf("2- Ana menuye don \n");
		printf("Seciminiz :");
		scanf("%d",&secm);
		
		if(secm == 1)
		{
			s3++ ;
		}
		
		else if(secm == 2)
		{
			s1++ ;
		}
		
		else{
			printf("Hatali Giris !!!\n");
		}
		
		}
		
		s3++ ;
	}
	
 
	
	else if(secm == 3)
	{	
		printf("**************************************************** \n\n");
		//Toplam fiyat karşılığı burada karşımıza geliyor
		printf("Toplam sepet tutariniz: %.2f TL \n\n" , top);
		printf("**************************************************** \n\n");
		printf("Ana menuye donmek icin 1'e tiklayin --> ");
		scanf("%d" , &secm);
		if(secm == 1)
		{
			s1++ ;
		}
		else
		{
			printf("Hatali Giris !!!\n");
			printf("Program kapaniyor...");
		}
	}		
	else if(secm == 4)
	{	
		printf("**************************************************** \n");
		printf("Iyi gunler dileriz... :) \n");
		printf("Program sonlandiriliyor... \n");
		printf("**************************************************** \n");
	}
	else
	{
		printf("Hatali Giris !!!\n");
	}		
}
	//return ile program sonlanıyor.
	return 0;
}
