#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<string> resultados;
    while (true)
    {
        string palavra;
        int i;
        int quantidade_palavra = 0;
        int tamanho;
        int x = 0;
        int compara[100];
        int check = 0;
        
        //pega a palavra
        getline(cin, palavra);
        tamanho = palavra.size();
        if (palavra == "*"){
            for(auto v = resultados.begin(); v != resultados.end(); v++)
                cout << *v << endl;
            break;
        }

        //marca a posiçao dos espaços
        for (i = 0; i < tamanho; i++)
        {

            if (palavra[i] == ' ')
            {

                compara[x] = i + 1;
                quantidade_palavra++;
                x++;
            }
        }

        //compara a primeira letra das palavras
        for (i = 0; i < quantidade_palavra; i++)
        {
            if (toupper(palavra[0]) == toupper(palavra[compara[i]]))
            {
                check++;
            }
        }
        //verifica se todas sao iguais
        if (check == quantidade_palavra)
        {
            resultados.push_back("Y");
        }
        else
        {
            resultados.push_back("N");
        }
    }
};
