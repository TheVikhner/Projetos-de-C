#include <iostream>
using namespace std;

int main() {
	float C, L, P;
	
	cout << "Digite o comprimento: ";
	cin >> C;
	
	cout << "Digite a largura: ";
	cin >> L;
	
	cout << "Digite a profundidade: ";
	cin >> P;
	
	float Cap = C * L * P * 1000;
	
	cout << "O volume da piscina e: " << Cap;


}