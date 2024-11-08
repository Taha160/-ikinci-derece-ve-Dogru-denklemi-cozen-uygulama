//Bu uygulama M.Taha CEVHER tarafindan yapilmistir.
#include <iostream>
#include <cmath>

using namespace std;

main(){
	char devamEt;
	string denklem;
	do{
	double a,b,c,m,n;
	float x,y;
	cout << "DEKCO'nun menusune hosgeldiniz! Lutfen cozmek istediginiz denklem turunu seciniz(dogru,2.derece) : " ;
	cin >> denklem;
	if(denklem == "dogru"){
		cout << "Lutfen dogru denkleminin katsayilarini giriniz(mx+n) : " << endl;
		cout << "m katsayisini giriniz : ";
		cin >> m;
		cout << "n katsayisini giriniz : ";
		cin >> n;
		if(m>0){
			cout << "Denkleminizin egimi : " << m << endl;
		}
		else if(m<0){
			cout << "Denkleminizin egimi : " << m << endl;
		}
		else{
			cout << "Denkleminizin egimi yok" << endl;
		}
			if (m != 0) {
        		x = -n / m;
        		cout << "Denklemin x eksenini kestigi nokta: x = " << x << endl;}
        	else {
        		cout << "Hata: m sifir olamaz!" << endl;}
        	if (m != 0) {
        		y = (m*x)*0+n;
        		cout << "Denklemin y eksenini kestigi nokta: y = " << y << endl;}
 			else {
        		cout << "Hata: m sifir olamaz!" << endl;}
		
	}
	else{
	cout << "Lutfen denkleminizin katsayilarini giriniz(ax^2+bx+c) : " << endl ;
	cout << "a katsayisini giriniz :";
	cin >> a;
	cout << "b katsayisini giriniz : ";
	cin >> b;
	cout << "c katsayisini giriniz : ";
	cin >> c;
	
	
	double diskirminant = b*b-(4*a*c);
	if(diskirminant > 0){
		double root1 = (-b + sqrt(diskirminant)) / (2*a) ;
		double root2 = (-b - sqrt(diskirminant)) / (2*a) ;
		cout << "Denklemin iki adet  koku var!" << endl;
		cout << "1. Kok : " << root1 << endl; 
		cout << "2. Kok : " << root2 << endl;}
	else if(diskirminant == 0){
		double root = -b/(2*a);
		cout << "Denklemin cakisik tek bir koku var!"<< root << endl;}
		else{
			cout << "Denklemin reel koku yok!" << endl;
		}
		}
		cout << "Baþka bir islem yapmak istiyor musunuz? (e/h): ";
        cin >> devamEt;
	}	while (devamEt == 'e' || devamEt == 'E');

		
		
	
	return 0 ;
}
