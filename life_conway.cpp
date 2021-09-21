/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int mat[10][10], mat2[10][10];
    int flag, punto, seguir, vecinos;
    //semilla en 0
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat[i][j]=0;
            mat2[i][j]=0;
        }
    }
    //semillas en 1
    while (1<2)
    {
        cout << "Sembrar una semilla en la posicion: " << "\n";
        cin >> punto;
        
        if ( punto > 0 && punto < 100){
            mat[punto/10][punto%10] = 1;
            mat2[punto/10][punto%10] = 1;
        }
        else{
            break;
        }
    }
    //iterar
    while (1<2)
    {
        cout << "Iterar? (0 = N) " << "\n";
        cin >> seguir;
        if (seguir == 0 ){
            break;
        }
        //imprimir
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                punto = mat[i][j];
                cout << punto;
                //mat2[i][j]=mat[i][j];
            }
            cout << "\n";
        }
        //operar vecinos
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                vecinos = mat[i+1][j]+mat[i-1][j]+mat[i][j+1]+mat[i][j-1]+mat[i+1][j+1]+mat[i-1][j-1]+mat[i-1][j+1]+mat[i+1][j-1];
                if( mat[i][j] == 0 && vecinos == 3 ){
                    mat2[i][j] = 1;
                }
                if( mat[i][j] == 1 && vecinos != 2){
                    if (vecinos != 3)
                    {
                        mat2[i][j] = 0;
                    }
                }
            }
            //cout << "\n";
        }
        //copiar
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                mat[i][j]=mat2[i][j];
            }
            //cout << "\n";
        }
    }
    return 0;
}
