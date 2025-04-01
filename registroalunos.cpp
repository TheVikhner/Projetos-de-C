#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    float nota1, nota2, nota3;
};

int main() {
    fstream arquivo;
    Aluno aluno;
    char opcao = 's';

    arquivo.open("alunos.txt", ios::out | ios::app); 

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

   
    while (opcao == 's' || opcao == 'S') {
        
		cout << "Digite o nome do aluno: ";
        cin.ignore();
        getline(cin, aluno.nome);
        
        cout << "Digite a nota 1: ";
        cin >> aluno.nota1;
        cout << "Digite a nota 2: ";
        cin >> aluno.nota2;
        cout << "Digite a nota 3: ";
        cin >> aluno.nota3;

        arquivo << aluno.nome << endl;
        arquivo << aluno.nota1 << " " << aluno.nota2 << " " << aluno.nota3 << endl;

        cout << "Deseja registrar outro aluno? (s - Sim / n - Não): ";
        cin >> opcao;
    }

    arquivo.close();

    int totalAlunos = 0;
    string linha;
    arquivo.open("alunos.txt", ios::in);

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo para leitura!" << endl;
        return 1;
    }

    while (getline(arquivo, linha)) {
        totalAlunos++;
    }

    totalAlunos /= 2;

    cout << "Total de alunos registrados: " << totalAlunos << endl;

    arquivo.close();

    return 0;
}
