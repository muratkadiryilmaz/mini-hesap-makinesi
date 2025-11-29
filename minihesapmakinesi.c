/* Murat Kadir Yılmaz
   Computer Engineering Student
   Mini Hesap Makinesi
   Kullanıcı iki sayı girer ve seçtiği dört işlemden birini uygular.
   Çıkmak için -1 girilmelidir. */
#include <stdio.h>
int main(){
float sayi1,sayi2,sonuc; // İşlem yapılacak sayılar ve sonucu saklayacak değişken
char islem; // Kullanıcının seçtiği işlem kodu (1-4)
printf("=== MINI HESAP MAKINESI ===\n");
printf("(cikis icin -1 giriniz.)\n");

while(1){ // Program sürekli çalışacak, çıkış için -1 girilmelidir.
printf("\nislem yapilacak sayilari giriniz: \n"); // Kullanıcıdan sayılar istenir.
scanf("%f %f",&sayi1,&sayi2); // İşlem yapılacak sayılar kullanıcıdan alınır.

if(sayi1 == -1 || sayi2 == -1){ // Çıkış kontrolü.
    printf("program sonlandirildi..");
    break;
}
// Kullanıcıya işlem seçenekleri sunulur.
printf("Yapmak istediginiz islemin numarasini giriniz: \n1:Toplama \n2:Cikarma\n3:Carpma\n4:Bolme\n");
scanf(" %c",&islem);
switch (islem) // İşlem seçimine göre hesaplama.
{
case '1': // Toplama işlemi
    sonuc = sayi1 + sayi2;
    printf("iki sayinin toplami: %.2f\n",sonuc);
    printf("----------------------------------------\n");
    break;
case '2': // Çıkarma işlemi
    sonuc = sayi1 - sayi2;
    printf("iki sayinin cikarmasi: %.2f\n",sonuc);
    printf("----------------------------------------\n");
    break;
case '3': // Çarpma işlemi
    sonuc = sayi1 * sayi2;
    printf("iki sayinin carpimi: %.2f\n",sonuc);
    printf("----------------------------------------\n");
    break;
case '4': // Bölme işlemi
    if(sayi2 == 0){ // Sıfıra bölme kontrolü
    printf("Payda 0 olamaz!(TANIMSIZ).\n");
    printf("----------------------------------------\n");
    } else {
    sonuc = sayi1 / sayi2;
    printf("iki sayinin bolumu: %.2f\n",sonuc);
    printf("----------------------------------------\n");
    }
    break;
default: // Yanlış giriş kontrolü
    printf("yanlis bir sey girdiniz.\n");
    printf("----------------------------------------\n");
    break;
}
}  
return 0;
}