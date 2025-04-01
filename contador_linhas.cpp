#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int contarLinhasArquivo(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    int contador = 0;
    string linha;

    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo: " << nomeArquivo << endl;
        return -1;
    }

    while (getline(arquivo, linha)) {
        contador++;
    }

    arquivo.close();
    return contador;
}

int main() {
    string nomeArquivo;

    cout << "Digite o nome do arquivo de texto (ex: dados.txt): ";
    getline(cin, nomeArquivo);

    int totalLinhas = contarLinhasArquivo(nomeArquivo);

    if (totalLinhas >= 0) {
        cout << "O arquivo '" << nomeArquivo << "' possui " << totalLinhas << " linhas." << endl;
    }

    return 0;
}