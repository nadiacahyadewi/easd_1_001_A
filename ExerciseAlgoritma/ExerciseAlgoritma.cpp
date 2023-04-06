//1. karena ruang memori algoritma yang digunakan sedikit dan menggunakan waktu yang cepat 
//2. 2 data struktur algoritma :
		// 1. static = ukuran tertentu 
		// 2. dynamic = fleksibel
//3. faktor yang mempengaruhi efisiensi program 
		//1. speed of the machine
		//2. compiler
		//3. operating system
		//4. programming language
		//5. site of the input
//4. quick sort, karna didasarkan pada pendekatan dan menaklukan secara berturut-turut membagi masalah menjadi bagian-bagian
// yang lebih kecil hingga masalah menjadi sangat kecil.
//5. 
		

#include <iostream>
using namespace std; 

//array of intergers to hold values
int na[21];						//membuat array dengan panjang data 21
int n;

void input() {					//procedure input
	while (true)
	{
		cout << "masukan panjang element array: ";
		cin >> n;

		if (n <= 21) {
		
			cout << "\nMaksimum panjang array adalah 21" << endl;
		}
	}
	cout << "\n---------------------" << endl;
	cout << "\nMasukkan elemnt array" << endl;
	cout << "\n---------------------" << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> na[21];


	}

}

	

