/*
Tehtävä: Harjoitus 13a
Tekijä: Hanna Lukkarinen, IIO13S1
Pvm: 8.10.2013

Kuvaus: Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.

a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehdäksesi merkkijonojen yhdistämisen

b) Kayta string-kirjastoa (C++:n merkkijonot)
tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka */


#include <iostream> 
using namespace std; 
#include <cstring>

int main() 
{ 
	char etunimi[10];
	char sukunimi[15];
	char kokonimi[30];

	cout<<"Anna etunimesi: ";
	cin>>ws>>etunimi;
	cout<<"Anna sukunimesi: ";
	cin>>ws>>sukunimi;
	strcpy_s(kokonimi, etunimi);
	strcat_s(kokonimi, " ");
	strcat_s(kokonimi, sukunimi);
	cout<<"Nimesi oli: "<<kokonimi<<endl;

	return 0;
}