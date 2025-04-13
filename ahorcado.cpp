#include <iostream>
#include <string>
using namespace std;

int main(){

    string palabra = "perro";
    string palabra_usuario = "";
    palabra_usuario.assign(palabra.length(), '_');
    char intento;
    int vidas = 7;


    cout << "Palabra: " << palabra_usuario << endl;
    cout << "____     " << endl;
    cout << "    |    " << endl;
    cout << "   000   " << endl;
    cout << "  0T T0  " << endl;
    cout << "   000   " << endl;
    cout << "  1 + 1  " << endl;
    cout << " 1  +  1 " << endl;
    cout << "1   +   1" << endl;
    cout << "   i i   " << endl;
    cout << "  i   i  " << endl;
    cout << " i     i " << endl;
    

    while(vidas != 0 && palabra_usuario != palabra){

        cout << "Ingresa una letra: " << endl;
        cin >> intento;
        int cierto = 0;

        for(int i = 0; i < palabra.length(); i++){
            
            if(intento == palabra[i]){
                palabra_usuario[i] = intento;
                cierto = 1;

                cout << "Palabra: " << palabra_usuario << endl << endl;
            }
            
        }
        
        if(cierto != 1){
            vidas--;
        }
        cout << "Vidas restantes: " << vidas << endl << endl;
        cout << "Palabra: " << palabra_usuario << endl;

        switch(vidas){
            case 0: cout << "___    " << endl;
                    cout << "   |   " << endl;
                break;
            case 1: 
                    cout << "___    " << endl;
                    cout << "   |   " << endl;
                    cout << "  000  " << endl;
                    cout << " 0   0 " << endl;
                    cout << "  000  " << endl;
                break;
            case 2: cout << "___    " << endl;
                    cout << "   |   " << endl;
                    cout << "  000  " << endl;
                    cout << " 0   0 " << endl;
                    cout << "  000  " << endl;
                    cout << "   +   " << endl;
                    cout << "   +   " << endl;
                    cout << "   +   " << endl;
                break;
            case 3: cout << "____     " << endl;
                    cout << "    |    " << endl;
                    cout << "   000   " << endl;
                    cout << "  0   0  " << endl;
                    cout << "   000   " << endl;
                    cout << "  1 +    " << endl;
                    cout << " 1  +    " << endl;
                    cout << "1   +    " << endl;
                break;
            case 4: cout << "____     " << endl;
                    cout << "    |    " << endl;
                    cout << "   000   " << endl;
                    cout << "  0   0  " << endl;
                    cout << "   000   " << endl;
                    cout << "  1 + 1  " << endl;
                    cout << " 1  +  1 " << endl;
                    cout << "1   +   1" << endl;
                break;
            case 5: cout << "____     " << endl;
                    cout << "    |    " << endl;
                    cout << "   000   " << endl;
                    cout << "  0   0  " << endl;
                    cout << "   000   " << endl;
                    cout << "  1 + 1  " << endl;
                    cout << " 1  +  1 " << endl;
                    cout << "1   +   1" << endl;
                    cout << "   i     " << endl;
                    cout << "  i      " << endl;
                    cout << " i       " << endl;
                break;
            case 6: cout << "____    " << endl;
                    cout << "    |    " << endl;
                    cout << "   000   " << endl;
                    cout << "  0   0  " << endl;
                    cout << "   000   " << endl;
                    cout << "  1 + 1  " << endl;
                    cout << " 1  +  1 " << endl;
                    cout << "1   +   1" << endl;
                    cout << "   i i   " << endl;
                    cout << "  i   i  " << endl;
                    cout << " i     i " << endl;
                break;
            case 7: cout << "____     " << endl;
                    cout << "    |    " << endl;
                    cout << "   000   " << endl;
                    cout << "  0T T0  " << endl;
                    cout << "   000   " << endl;
                    cout << "  1 + 1  " << endl;
                    cout << " 1  +  1 " << endl;
                    cout << "1   +   1" << endl;
                    cout << "   i i   " << endl;
                    cout << "  i   i  " << endl;
                    cout << " i     i " << endl;
            
        }

    }

    

    if(palabra_usuario == palabra){
        cout << "Ganaste";
    }
    else{
        cout << "Perdiste";
    }



    return 0;
}