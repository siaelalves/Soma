#include <iostream>
#include <locale.h> /*Incluído por causa da função setlocale*/
#include <conio.h> /*Incluído por causa da função getch*/
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese"); /*Define que a região para exibir acentuação adequada*/
	char p; /*Variável definida unicamente para que o programa pause no final*/
	int a = 0;
	int b = 0;
	cout << "Este programa realiza uma soma simples de 2 números." << endl;
	cout << "Criado em 30 de setembro de 2021. O primeiro Aplicativo em C++ de Siael Alves." << endl;
	cout << "Digite o primeiro número: " << endl;
	cin >> a;
	cout << "Digite o segundo número: " << endl;
	cin >> b;
	cout << "A soma é de " << a + b << endl;
	cout << "Programa finalizado. Pressione qualquer tecla para fechar." << endl;
	p = _getch();
}