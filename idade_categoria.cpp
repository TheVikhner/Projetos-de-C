#include <iostream>
using namespace std;

int main() {
	int i;
	
	cout << "Digite a sua Idade: ";
	cin >> i;
	
	if (i < 12) {
		cout << "Voce e: Crianca";	
	}
	
	else if (i >= 12 and i <= 17) {
		cout << "Voce e: Adolescente";	
	}
	
	else if (i >= 18 and i <= 59) {
		cout << "Voce e: Adulto";	
	}
	
	else {
		cout << "Voce e: Idoso";	
	}
	
	
}