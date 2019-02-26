/*
	Name		: Naufal Ariful Amri 
	Author		: thegangs
	Date		: 26/02/19 09:11
	Description	: get parameter
*/

#include <iostream>
using namespace std ;

void input (int& nilai , int data[])
{
	cout << "Input jumlah data : " ; cin >> nilai ;
	for (int i = 0 ; i < nilai ; i++) {
		cout << "input data" << i+1 << " " ; cin >> data[i] ;
	}
}

float average (int nilai, int data[], float hasil){
	hasil = 0 ;
	for (int i =0 ;i < nilai ; i++) {
		hasil = hasil + data[i] ;
	}
	hasil = hasil/nilai ;
	cout << "rata rata : " << hasil ;
}


int main (){
	int nilai ; int data[10] ; int hasil ;
	input (nilai , data) ;
	average (nilai, data, hasil) ;
}
