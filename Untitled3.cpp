/*
	Name		: Naufal Ariful Amri 
	Author		: thegangs
	Date		: 26/02/19 09:11
	Description	: get parameter
*/

#include <iostream>
using namespace std ;

void swap (int& a ,int& b){
	int temp ;
	temp = a ;
	a = b ;
	b = temp ;
	
}

int main () {
	int x ,y ;
	cout << "input x " ; cin >> x ;
	cout << "input y " ; cin >> y ;
	
	swap (x,y) ;
	cout << "yesss berhasil \n" ;
	cout << "x " << x << endl ;
	cout << "y " << y ;
}
