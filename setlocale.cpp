/* A linguagem de Programação C++ pode ser considerad por muitos como um dinossauro. Mas a sua constante 
utilização em sistemas operacionais, sistemas críticos, bancários, games, aplicações que exigem rapidez,
e precisão, tornam a C++ uma linguagem atual tanto quanto a maioria das linguagens.*/

//Se me perguntarem qual é a melhor linguagem, eu diria que é a C++.
//Se for para GAMES, eu não tenho dúvidas em recomenda-las no lugar de qualquer outra.
// Lembre-se que a maioria dos GE foram escritos em C++

#include <iostream>
#include <locale.h> //Biblioteca que permite método de localização

using namespace std;

//Método que não retorna valor
void soma(float x=2.0f,float y = 3.0f)
{
	float Soma =x + y;
	cout << "O valor da soma é:" <<Soma << "\n\n";
}


//Programa principal
int main()
{
	float x,y;
	//Método que permite acentuação no DEV C++
	setlocale(LC_ALL,"Portuguese");
	cout << "Digite um valor para (X)" << endl;
	cin >> x;
	cout << "\n" << "Digite um valor para (Y)" << endl;
	cin >> y;
	//Chamada do método
	soma(x,y);
	//Método que segura a execução até que se aperte uma tecla
	//Essa funcionalidade tem praticidade em .exe
	system("PAUSE");
	return 0;
}
