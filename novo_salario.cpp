#include <iostream>
using namespace std;

int main() {
	string nome;
	float salario;
	int tempo;
	
	cout << "Digite o nome do funcionario: ";
	cin >> nome;
	
	cout << "Digite o salario atual do funcionario: ";
	cin >> salario;
	
	cout << "Digite o tempo de empresa do funcionario: ";
	cin >> tempo;
	
	if (tempo >= 1 and tempo <= 5) {
		float novo_sal = salario + (salario * 0.06);
		
		cout << "O novo salario do funcionario" << nome << " e :" << novo_sal;	
	}
	
	else if (tempo >= 6 and tempo <= 10) {
		float novo_sal = salario + (salario * 0.10);
		
		cout << "O novo salario do funcionario" << nome <<" e :" << novo_sal;	
	}
	
	else if (tempo >= 11 and tempo <= 15) {
		float novo_sal = salario + (salario * 0.15);
		
		cout << "O novo salario do funcionario" << nome <<" e :" << novo_sal;	
	}

	else if (tempo > 15) {
		float novo_sal = salario + (salario * 0.20);
		
		cout << "O novo salario do funcionario" << nome <<" e :" << novo_sal;	
	}
}





















