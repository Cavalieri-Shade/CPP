/* A linguagem de Programa��o C++ pode ser considerad por muitos como um dinossauro. Mas a sua constante 
utiliza��o em sistemas operacionais, sistemas cr�ticos, banc�rios, games, aplica��es que exigem rapidez,
e precis�o, tornam a C++ uma linguagem atual tanto quanto a maioria das linguagens.*/

//Se me perguntarem qual � a melhor linguagem, eu diria que � a C++.
//Se for para GAMES, eu tenho d�vidas em recomenda-las no lugar de qualquer outra.
// Lembre-se que a maioria dos GE foram escritos em C++

#include <iostream>
#include <locale.h> //Biblioteca que permite m�todo de localiza��o

using namespace std;

//M�todo que n�o retorna valor
void soma(float x=2.0f,float y = 3.0f)
{
	float Soma =x + y;
	cout << "O valor da soma �:" <<Soma << "\n\n";
}


//Programa principal
int main()
{
	float x,y;
	//M�todo que permite acentua��o no DEV C++
	setlocale(LC_ALL,"Portuguese");
	cout << "Digite um valor para (X)" << endl;
	cin >> x;
	cout << "\n" << "Digite um valor para (Y)" << endl;
	cin >> y;
	//Chamada do m�todo
	soma(x,y);
	//M�todo que segura a execu��o at� que se aperte uma tecla
	//Essa funcionalidade tem praticidade em .exe
	system("PAUSE");
	return 0;
}
