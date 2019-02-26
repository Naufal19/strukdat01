/*
Nama	: Naufal Ariful Amri
Kelas	: A
*/

#include <iostream>
using namespace std ;

void fizzbuzz (int a , int b)
{
	cout << "Input angka awal " ; cin >> a ;
	cout << "input angka akhir " ; cin >> b ;
	
	for (int i = a ; i <= b ; i++){
		if (i/5 >= 1 && i%5 == 0) {
			if (i%3 == 0) {
				cout << "fizz" ;
			}
			cout << "buzz" << endl ;
			continue ;
		}	
		
		if (i/3 >= 1 && i%3 == 0) {
			cout << "fizz" << endl ;
		}
		else
		{
			cout << i << endl ;
		}
	}
}

int main ()
{
	int a , b ;
	fizzbuzz (a,b) ;
}
