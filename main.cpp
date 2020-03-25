#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(){

    Matrix matriz_original, matriz_cofactores, matriz_trans, matriz_respuesta;
	  float numero;
	  zeroes(matriz_original, 3);
    matriz_original.at(0).at(0) = 2;
    matriz_original.at(0).at(1) = 2;
    matriz_original.at(0).at(2) = 3;
    matriz_original.at(1).at(0) = 4;
    matriz_original.at(1).at(1) = 5;
    matriz_original.at(1).at(2) = 6;
    matriz_original.at(2).at(0) = 7;
    matriz_original.at(2).at(1) = 8;
    matriz_original.at(2).at(2) = 9;

    if (determinant(matriz_original) != 0.0){
        cofactors(matriz_original, matriz_cofactores);
        transpose(matriz_cofactores, matriz_trans);
        numero = (1 / determinant(matriz_original));
        productRealMatrix(numero, matriz_trans, matriz_respuesta);

        showMatrix(matriz_respuesta);
    }
    else{
        EXIT_FAILURE;
    }

    return 0;
}
