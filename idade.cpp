#include <iostream>
using namespace std;

int main() {
	
	string n;
	int i;
	
	cout << "Digite o Nome: ";
	cin >> n;
	
	cout << "Digite a Idade: ";
	cin >> i;
	
	if (i >= 18) {
		cout << n << "é maior de idade.";	
}
	else {
		cout << n << "é menor de idade";
	}
	
return 0;
}
