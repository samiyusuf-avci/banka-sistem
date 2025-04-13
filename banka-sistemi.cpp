#include<iostream>
#include<string>
using namespace std;

class banka{
	public:
		string isim;
		int sifre;
		int bakiye=0;
		int yatirilan;
		int cekilen;
		int z;
		
		void yenihesap(){
			cout<<"\nisim: ";
			cin>> isim;
			cout<<"sifre: ";
			cin>> sifre;
			
		}
		void yatir(){
			cout<<"\nyatirmak istediginiz tutar: ";
			cin>> z;
			bakiye+= z;
			cout<<"\paraniz yatirildi.\n ";
		}
		void cek(){
			cout<<"\ncekmek istediginiz tutar: ";
			cin>> z;
			if(bakiye-z < 0){
			cout<<"\nbakiye yetersiz.\n";
			}else{
			bakiye-= z;
			cout<<"\nparaniz cekildi.\n";
		    }
		}
		void bakiy(){
			cout<<"\nbakiyeniz: "<< bakiye <<" TL\n";
		}		
};

int main(){
	int x, y, k, a=0, i=0, j=0, sifre;
	string isim;
	banka hesap[50];
	do{
	    cout<<"\n====================================================================\n";
		cout<<"1-)yeni hesap olustur.\n";
	    cout<<"2-)hesaba giris yap.\n";
	    cout<<"3-)sistemden cik.\n";
	    cout<<"SECIM YAPINIZ: ";
	    cin>> x;
	    
	    if(x==1){
	    	hesap[j].yenihesap();
	    	j++;
		}else if(x==2){
			
			cout<<endl<<"hesap isminizi girin: ";
			cin>> isim;
			cout<<"hesap sifrenizi girin: ";
			cin>> sifre;
			
			for(k=0; k<j; k++){
				if(hesap[k].isim==isim && hesap[k].sifre==sifre){
					cout<<"\n====================================================================";
					cout<<"\nhesabiniza giris yapildi.\n";
					do{
				        cout<<endl;
	                    cout<<"1-)para yatir.\n";
	                    cout<<"2-)para cek.\n";
	                    cout<<"3-)bakiye ogren.\n";
	                    cout<<"4-)hesaptan cik.\n";
	                    cout<<"SECIM YAPINIZ: ";
	                    cin>> y;
	                    
	                    if(y==1)
	                    hesap[k].yatir();
	                    else if(y==2)
	                    hesap[k].cek();
	                    else if(y==3)
	                    hesap[k].bakiy();
	                    else if(y==4)
	                    cout<<"\nhesaptan cikildi\n";
	                    else
	                    cout<<"\nlutfen gecerli bir sayi girin.\n";
	                    a=1;
					}while(y!=4);
					
			    }	
			}
		
		if(a!=1)
		cout<<"\nhesabiniz bulunamadi.\n";
		}else if(x==3){
			cout<<"\nsistemden ciktiniz.\n";
		}else{
			cout<<"gecerli bir sayi giriniz.\n\n";
		}
	    
    }while(x!=3);
	
	return 0;
}

