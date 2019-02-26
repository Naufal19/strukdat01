/*
	Name		: Naufal Ariful Amri 
	Author		: thegangs
	Date		: 26/02/19 09:11
	Description	: get parameter
*/

#include <iostream>
using namespace std ;

float konversi (float celcius , float fahrenheit) {

	cout << "F = C * 9/5 + 32\n" ;
	cout << "Input nilai celsius : " ; cin >> celcius ;
	fahrenheit = celcius * 9/5 + 32 ;
	cout << fahrenheit ;
}

int main ()
{
	float a , b ;
	konversi (a,b) ;
}

