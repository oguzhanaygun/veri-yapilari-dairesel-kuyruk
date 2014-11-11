// circularqueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int DIZI_MAX = 10;

class circularqueue
{
private:
	int DIZI_MAX = 10;
	int		dizi[10];
	int		kb;
	int		ks;
	int		es;
public:
	circularqueue(){
		ks = -1;
		kb = -1;
		es = 0;
	}
	bool eleman_ekle(int newdata){
		if (es == DIZI_MAX){
			cout << "kuyruk max elaman sayisindayken eleman ekleyemezsiniz..";
			return false;
		}
		if (ks < 0 && kb < 0){
			ks++;
			kb++;
			dizi[ks] = newdata;
			es++;
			return true;
		}
		if (ks == DIZI_MAX-1){
			ks = 0;
			dizi[ks] = newdata;
		es++; return true;
		
		}
		else{ ks++; dizi[ks] = newdata; es++; return true; }
		}
	bool eleman_cýkar(){
		if (es== 0)
		{
			cout << "dizi boþ eleman çýkaramazsýnýz"; return false;
		}
		if (kb == DIZI_MAX - 1){
			cout << "diziden cýkarýlan eleman=" << dizi[kb]<<endl;
			dizi[kb] = NULL;
			es--;
			kb = 0;
			return true;

		}
		else
		{
			cout << "diziden cýkarýlan eleman=" << dizi[kb]<<endl;
			dizi[kb] = NULL;
			kb++;
			es--;
			return true;
		}
			
	}
	void yazdýr(){
		for (int i = 0; i < DIZI_MAX; i++){
			cout << dizi[i] << endl;
		}
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	circularqueue yeni;
	for (int i = 1; i <= 11; i++){
	yeni.eleman_ekle(i);
	yeni.yazdýr();
	cout << endl <<" ---------------------------"<<endl ;
}
	
	yeni.eleman_cýkar();
	yeni.eleman_cýkar();
	yeni.eleman_cýkar();

	cout << endl << "------------" << endl;
	yeni.eleman_ekle(120);
	yeni.yazdýr();

	

	
	system("pause");
	return 0;
}

