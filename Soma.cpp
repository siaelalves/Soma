#include <iostream>
#include <locale.h> /*Inclu�do por causa da fun��o setlocale*/
#include <conio.h> /*Inclu�do por causa da fun��o getch*/
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese"); /*Define que a regi�o para exibir acentua��o adequada*/
	char p; /*Vari�vel definida unicamente para que o programa pause no final*/
	int a = 0;
	int b = 0;
	cout << "Este programa realiza uma soma simples de 2 n�meros." << endl;
	cout << "Criado em 30 de setembro de 2021. O primeiro Aplicativo em C++ de Siael Alves." << endl;
	cout << "Digite o primeiro n�mero: " << endl;
	cin >> a;
	cout << "Digite o segundo n�mero: " << endl;
	cin >> b;
	cout << "A soma � de " << a + b << endl;
	cout << "Programa finalizado. Pressione qualquer tecla para fechar." << endl;
	p = _getch();
}