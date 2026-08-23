// Validador de emails

#include <iostream>
#include <string>
using namespace std;

bool validar(string correo) {
    // un correo valido tiene un solo '@'
    int arroba = correo.find('@');
    if (arroba == -1) {
        return false; // No hay '@'
    }
    else if (correo.find('@', arroba + 1) != string::npos) {
        return false; // Hay más de un '@'
    }

    // un correo valido tiene al menos un caracter antes del '@'
    if (arroba == 0) {
        return false; // No hay caracteres antes del '@'
    }

    // un correo valido tiene al menos un '.' después del '@'
    int punto = correo.find('.', arroba);
    if (punto == -1) {
        return false; // No hay '.' después del '@'
    }

    // un correo valido tiene al menos un caracter entre el '@' y el '.'
    if (punto - arroba < 2) {
        return false; // No hay caracteres entre el '@' y el '.'
    }

    // un correo valido tiene al menos un caracter después del '.'
    if (punto == (int)correo.size() - 1) {
        return false; // No hay caracteres después del '.'
    }

    // si la cadena llegó hasta el final, debe ser un correo válido, ya que cumple con las condiciones anteriores
    return true;
}

bool validarCorreoInstitucional(string correo) {
    if (!validar(correo)) {
        return false; // No es un correo válido
    }

    // un correo institucional válido contiene un "unah.hn" después del '@'
    int arroba = correo.find('@');
    int unah = correo.find("unah.hn", arroba);
    if (unah == -1) {
        return false; // No hay "unah.hn" después del '@';
    }

    return true; // Es un correo institucional válido
}

int main() {
    string email;

    cout << "Ingrese un correo electrónico: ";
    cin >> email;

    // ? Nota: Usualmente no se hace la validación de emails por este medio, pues resulta innecesariamente complejo. Lo más común es usar expresiones regulares, o librerías especializadas para ello.
    if (validar(email)) {
        cout << "El correo electrónico es válido." << endl;
    } else {
        cout << "El correo electrónico no es válido." << endl;
    }

    if (validarCorreoInstitucional(email)) {
        cout << "El correo electrónico es institucional." << endl;
    } else {
        cout << "El correo electrónico no es institucional." << endl;
    }

    return 0;
}