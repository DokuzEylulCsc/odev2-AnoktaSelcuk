//Muhammet Alperen Selçuk 2018280039
#include<iostream>
#include<cstring>
using namespace std;
void declimal();
void roma();
int digit(char);
int main(){
  while(1){
    char sec;
    cout<<"hindu rakamlarını roma rakamına cevirmek için 1'e basınız\n";
    cout<<"roma rakamlarını hindu rakamına cevirmek için 2'e basınız\n";
    cin >> sec;
    switch(sec){
      case'1':
          declimal();
          break;
      case'2':
          roma();
           
    }
  }
}
void declimal(){  
int sayi,birler,onlar,yuzler,binler;
  while(sayi!=-1){
      cout <<"Roma rakamina cevirilecek sayıyı giriniz(ana menu -1)\n";
      cin >> sayi;
        birler=(sayi % 10);
        onlar=((sayi % 100)-birler)/10;
        yuzler=((sayi % 1000)-(sayi % 100))/100; 
        binler= (sayi-(sayi % 1000))/1000;
        if(sayi<=3999 && sayi>0){            
            switch(binler){
                      case 1:cout<<"M";
                      break;
                      case 2:cout<<"MM";
                      break;
                      case 3:cout<<"MMM";
                      break;
                      }
            switch(yuzler){
                      case 1:cout<<"C";
                      break;
                      case 2:cout<<"CC";
                      break;
                      case 3:cout<<"CCC";
                      break;
                      case 4:cout<<"CD";
                      break;
                      case 5:cout<<"D";
                      break;
                      case 6:cout<<"DC";
                      break;
                      case 7:cout<<"DCC";
                      break;
                      case 8:cout<<"DCCC";
                      break;
                      case 9:cout<<"CM";
                      break;
                      }
            switch(onlar){
                      case 1:cout<<"X";
                      break;
                      case 2:cout<<"XX";
                      break;
                      case 3:cout<<"XXX";
                      break;
                      case 4:cout<<"XL";
                      break;
                      case 5:cout<<"L";
                      break;
                      case 6:cout<<"LX";
                      break;
                      case 7:cout<<"LXX";
                      break;
                      case 8:cout<<"LXXX";
                      break;
                      case 9:cout<<"XC";
                      break;
                      }
            switch(birler){
                      case 1:cout<<"I\n";
                      break;
                      case 2:cout<<"II\n";
                      break;
                      case 3:cout<<"III\n";
                      break;
                      case 4:cout<<"IV\n";
                      break;
                      case 5:cout<<"V\n";
                      break;
                      case 6:cout<<"VI\n";
                      break;
                      case 7:cout<<"VII\n";
                      break;
                      case 8:cout<<"VIII\n";
                      break;
                      case 9:cout<<"IX\n";
                      break;
                      }
                      cout<<"\n";
                    }
         else{
            cout<<"girdiğiniz sayi 1 ile 3999 arasında degildir\n";
            
    }
}
}
void roma(){
    char roman_Number[1000];
    int i=0;
    long int number =0;
    cout <<"Buyuk hatfler ile roma rakamlarını giriniz\n";
    cin >>roman_Number;
    while(roman_Number[i]){
         if(digit(roman_Number[i]) < 0){
          cout<<"gecersiz roma basamagı = "<<roman_Number[i]<<endl;   
         }
         if((strlen(roman_Number) -i) > 2){
             if(digit(roman_Number[i]) < digit(roman_Number[i+2])){
                 cout<<"gecersiz roma basamagı";                 
             }
         }
         if(digit(roman_Number[i]) >= digit(roman_Number[i+1]))
             number = number + digit(roman_Number[i]);
         else{
             number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i]));
             i++;
         }
         i++;
    }
    cout <<"Roma rakamı olarak gösterim sekli:"<< number <<endl;
}
int digit(char c){
    int value=0;
    switch(c){
         case 'I': value = 1;
         break;
         case 'V': value = 5; 
         break;
         case 'X': value = 10; 
         break;
         case 'L': value = 50; 
         break;
         case 'C': value = 100; 
         break;
         case 'D': value = 500; 
         break;
         case 'M': value = 1000; 
         break;
         case '\0': value = 0; 
         break;
         default: value = -1; 
    }
    return value;
}
