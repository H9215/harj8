/*
jesse v��n�nen
2.10.2014

Harjoitus 8 (palautus vko 41)
Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
j�rjestyksess� (pienimm�st� suurimpaan) n�yt�lle
(katso harj. 1 suunnitelma)
a) k�yt� kokonaislukuja
b) k�yt� liukulukuja (=reaalilukuja)
_______________________________*/

#include <iostream>
using namespace std;
double luku[3] = { 0 };

void main(void)
{
	cout << "Anna ensim�inen luku: ";
	cin >> luku[0];
	cout << "Anna toinen luku: ";
	cin >> luku[1];
	cout << "Anna kolmas luku: ";
	cin >> luku[2];

	if ((luku[0] <= luku[1]) && (luku[0] <= luku[2])) 
	{
		if (luku[1] <= luku[2]) 
		{
			cout  << luku[0] << ", " << luku[1] << ", " << luku[2] << "." << endl;
		}
		else 
		{
			cout << luku[0] << ", " << luku[2] << ", " << luku[1] << "." << endl;
		}
	}


	else if ((luku[1] <= luku[0]) && (luku[1] <= luku[2])) 
	{
		if (luku[0] <= luku[2]) 
		{
			cout << luku[1] << ", " << luku[0] << ", " << luku[2] << "." << endl;
		}
		else 
		{
			cout << luku[1] << ", " << luku[2] << ", " << luku[0] << "." << endl;
		}
	}
	else if ((luku[2] <= luku[0]) && (luku[2] <= luku[1])) 
	{
		if (luku[0] <= luku[1]) 
		{
			cout << luku[2] << ", " << luku[0] << ", " << luku[1] << "." << endl;
		}
		else 
{
			cout << luku[2] << ", " << luku[1] << ", " << luku[0] << "." << endl;
		}
	}
}