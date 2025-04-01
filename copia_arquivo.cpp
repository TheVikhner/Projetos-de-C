#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool copiarArquivo(const string& origem, const string& destino) {
    ifstream arquivoOrigem(origem);
    ofstream arquivoDestino(destino);

    if (!arquivoOrigem.is_open()) {
        cerr << "Erro ao abrir o arquivo de origem: " << origem << endl;
        return false;
    }

    if (!arquivoDestino.is_open()) {
        cerr << "Erro ao criar o arquivo de destino: " << destino << endl;
        arquivoOrigem.close();
        return false;
    }

    arquivoDestino << arquivoOrigem.rdbuf();

    arquivoOrigem.close();
    arquivoDestino.close();

    return true;
}

int main() {
    char continuar;

    cout << "=== COPIADOR DE ARQUIVOS ===" << endl;

    do {
        string origem, destino;

        cout << "\nDigite o nome do arquivo de origem: ";
        getline(cin, origem);

        cout << "Digite o nome do arquivo de destino: ";
        getline(cin, destino);

        if (copiarArquivo(origem, destino)) {
            cout << "Copia realizada com sucesso!" << endl;
        } else {
            cout << "Falha na copia. Verifique os nomes dos arquivos." << endl;
        }

        cout << "\nDeseja copiar outro arquivo? (s/n): ";
        cin >> continuar;
        cin.ignore();

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa encerrado." << endl;

    return 0;
}