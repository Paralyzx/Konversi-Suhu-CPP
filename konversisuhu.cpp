#include<iostream>
      #include<cstdlib>
      using namespace std;

      int main() 
	  
      {system ("color e");
      float cl, re, kl, fh;
        int menu;
      cout<<"\n|_____________________________________________________________________|"<<endl;
      cout<<"\n|========================   WELCOME TO   =========================|";
      cout<<"\n|====================   PROGRAM KONVERSI SUHU   ======================|";
      cout<<"\n|=======================   FAYENK >_<   =========================|"<<endl;
      cout<<"\n|_____________________________________________________________________|"<<endl;

      cout<<"\n Menu Suhu\n";
      cout<<"\n1.Celcius\n";
      cout<<"2.Kelvin\n";
      cout<<"3.Reamur\n";
      cout<<"4.Fahrenhait\n";
      cout<<"\n Silahkan Masukan Suhu Yang Dipilih = ";cin>>menu;
      switch(menu)
      {

      case 1:
          cout<<"\n \n \t -------------|celsius|----------- \n";
          cout<<"\n Silahkan Masukan Nilai Suhu = ";
          cin>>cl;
          kl=cl+273;
          cout<<"\n Kelvin = "<<kl<<endl;
          re=cl*4/5;
          cout<<"\n Reamur = "<<re<<endl;
          fh=(cl*9/5)+32;
          cout<<"\n Fahrenhait = "<<fh<<endl;
          break;
      case 2:
          cout<<"\n \n \t -------------|Kelvin|----------- \n";
          cout<<"\n Silahkan Masukan Nilai Suhu = ";cin>>kl;
          cl-kl-273;
          cout<<"\n Celcius = "<<cl<<endl;
          re=(kl-273)*0.8;
          cout<<"\n Reamur = "<<re<<endl;
          fh=kl*1.8-459.67;
          cout<< "\n Fahrenhait = "<<fh<<endl;
          break;
      case 3:
          cout<<"\n \n \t -------------|Reamur|----------- \n";
            cout<<"\n Silahkan masukan nilai suhu = ";cin>>re;
            cl=re/0.8;
            cout<<"\n Celcius = "<<cl<<endl;
            kl=re/0.8+273;
            cout<<"\n Kelvin = "<<kl<<endl;
            fh=re*2.25+32;
            cout<<"\n Fahrenheit = "<<fh<<endl;
            break;
      case 4:
          cout<<"\n \n \t -------------|fahrenheit|----------- \n";
            cout<<"\n Silahkan masukan nilai suhu = ";cin>>fh;
            cl=(fh-32)/1.8;
            cout<<"\n Celcius = "<<cl<<endl;
            kl=(fh-32)/1.8+273;
            cout<<"\n Kelvin = "<<kl<<endl;
            re=(fh-32)/2.25;
            cout<<"\n Reamur = "<<re<<endl;
            break;
      default:
                  cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                  cout<<"| GUNAKANLAH NOMER YANG TERSEDIA UNTUK MEMILIH RUMUS |"<<endl;
                  cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;

                  break;


      }
      char LG;
      cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
      if (LG=='Y' || LG=='y')main();
      else if (LG=='T' || LG=='t') goto x;
      x:
      cout<<"\n=============  TERIMAKASIH GUYS ^_^   ==============\n";
      cout<<"\n=============    FAYENK RAWR <3    =============\n";
      cout<<"\n=============TEKAN ENTER UNTUK KELUAR=============\n";

      }