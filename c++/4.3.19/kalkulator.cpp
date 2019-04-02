#include <iostream>
using namespace std;
int main()
{
	float a,b,hasil;
	char aritmatika;

	cout << "\nselamat datang di aplikasi kalkulator\n";
	cout << "\nmasukkan angka\n";
	cin >> a;

	cout << "\nsilahkan pilih oerator yang di inginkan (+,-,*,/)\n";
	cin >> aritmatika;
	cout << "\nmasukkan angka kedua\n";
	cin >> b;

	if (aritmatika == '+'){
		hasil = a + b;
	}else if (aritmatika == '-'){
		hasil = a - b;
	}else if (aritmatika == '*'){
		hasil = a * b;
	}else if (aritmatika == '/'){
		hasil = a / b;
	}else{
		cout << "operator salah\n";
	}

	cout << "\nhasil perhitungan " << a << aritmatika << b << " = " << hasil << "\n\n";
	cin.get();
	cin.get();
	return 0;
}
