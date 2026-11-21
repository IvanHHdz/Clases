# Tarea 1

1. Escribe un programa en C++ que genere un vector de $n$ enteros aleatorios en el rango $[1, 50]$.
Implementa una función de busqueda secuencial que reciba el vector, la clave a buscar y un vector de posiciones donde guardara todos los índices donde se encontró la clave.
Imprime los elementos del vector original utilizando los índices almacenados en posiciones para verificar la exactitud.
Añade un contador comparaciones para registrar cuántas veces estuvo en el ultima posicion.
Ejecuta el programa para $𝑛 = 100, 1,000 y 10,000$ e indica si el número de comparaciones depende del valor buscado.

2. Implementa en C++ los algoritmos de evaluación de polinomios $𝑃(𝑥) = 𝑎_𝑛 𝑥^𝑛 + \cdots + 𝑎_1 𝑥 + 𝑎_0$.
   1. Método 1 (Término a término): Calcula cada $𝑎_𝑖 𝑥^𝑖$ de forma independiente con un bucle anidado.
   2. Método 2 (Regla de Horner): Evalúa el polinomio mediante multiplicaciones y sumas anidadas consecutivas.
   Requisito de Análisis:Cuenta el número exacto de multiplicaciones y sumas ejecutadas por cada método para un polinomio de grado $𝑛$.
   Muestra los datos mediante una tabla.

3. Dado un arreglo ordenado con elementos repetidos (ej. $1$, $2$, $4$, $4$, $4$, $5$, $7$), implementa dos funciones basadas en Búsqueda Binaria.
Devuelve el primer índice donde aparece clave.
Compara el conteo de pasos frente a una solución ingenua que encuentra una ocurrencia y luego recorre linealmente hacia la izquierda y derecha.
Muestra en qué caso la solución ingenua degenera a $𝑂(𝑛)$.

4. Codifica dos versiones del algoritmo de la Burbuja:
   1. Versión A (Tradicional): Ejecuta siempre $𝑛 − 1$ pasadas completas.
   2. Versión B (Optimizada): Utiliza una variable booleana `huboIntercambio` para detener el algoritmo si en una pasada no se realiza ningún cambio.

Prueba ambos algoritmos sobre un arreglo "casi ordenado" (donde solo 2 elementos adyacentes están fuera de lugar).
Muestra cómo la versión optimizada reduce el número de comparaciones de Θ(𝑛2) a Θ(𝑛) en entradas casi ordenadas.

```cpp
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// ===================== PROBLEMA 3 =====================

// Primer índice donde aparece clave (-1 si no está). O(log n)
int primerIndice(const vector<int>& a, int clave, long long& pasos) {
    int lo = 0, hi = (int)a.size() - 1, res = -1;
    while (lo <= hi) {
        pasos++;
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == clave) { res = mid; hi = mid - 1; } // sigue buscando a la izquierda
        else if (a[mid] < clave) lo = mid + 1;
        else hi = mid - 1;
    }
    return res;
}

// Último índice donde aparece clave (-1 si no está). O(log n)
int ultimoIndice(const vector<int>& a, int clave, long long& pasos) {
    int lo = 0, hi = (int)a.size() - 1, res = -1;
    while (lo <= hi) {
        pasos++;
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == clave) { res = mid; lo = mid + 1; } // sigue buscando a la derecha
        else if (a[mid] < clave) lo = mid + 1;
        else hi = mid - 1;
    }
    return res;
}

// Solución ingenua: encuentra UNA ocurrencia y recorre linealmente a ambos lados.
pair<int, int> ingenua(const vector<int>& a, int clave, long long& pasos) {
    int lo = 0, hi = (int)a.size() - 1, idx = -1;
    while (lo <= hi) {
        pasos++;
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == clave) { idx = mid; break; }
        else if (a[mid] < clave) lo = mid + 1;
        else hi = mid - 1;
    }
    if (idx == -1) return {-1, -1};
    int i = idx, j = idx;
    while (i > 0 && a[i - 1] == clave) { i--; pasos++; }
    while (j < (int)a.size() - 1 && a[j + 1] == clave) { j++; pasos++; }
    return {i, j};
}

void probarBusqueda(const string& titulo, const vector<int>& a, int clave) {
    long long pB1 = 0, pB2 = 0, pN = 0;
    int primero = primerIndice(a, clave, pB1);
    int ultimo = ultimoIndice(a, clave, pB2);
    auto r = ingenua(a, clave, pN);
    cout << titulo << " (n = " << a.size() << ", clave = " << clave << ")\n";
    cout << "  Binaria: primero=" << primero << ", ultimo=" << ultimo
         << " | pasos = " << pB1 + pB2 << "\n";
    cout << "  Ingenua: primero=" << r.first << ", ultimo=" << r.second
         << " | pasos = " << pN << "\n\n";
}

// ===================== PROBLEMA 4 =====================

// Versión A (tradicional): siempre n-1 pasadas completas
long long burbujaA(vector<int> a) {
    long long comps = 0;
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++) {
            comps++;
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    return comps;
}

// Versión B (optimizada): se detiene si una pasada no hizo intercambios
long long burbujaB(vector<int> a) {
    long long comps = 0;
    int n = a.size();
    bool huboIntercambio = true;
    for (int i = 0; i < n - 1 && huboIntercambio; i++) {
        huboIntercambio = false;
        for (int j = 0; j < n - 1 - i; j++) {
            comps++;
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                huboIntercambio = true;
            }
        }
    }
    return comps;
}

int main() {
    cout << "===== PROBLEMA 3: Busqueda binaria con repetidos =====\n\n";

    vector<int> ejemplo = {1, 2, 4, 4, 4, 5, 7};
    probarBusqueda("Ejemplo del enunciado", ejemplo, 4);

    for (int n : {1000, 100000, 1000000}) {
        // Peor caso de la ingenua: TODOS los elementos iguales a la clave
        vector<int> iguales(n, 5);
        probarBusqueda("Peor caso (todos iguales)", iguales, 5);
    }

    cout << "===== PROBLEMA 4: Burbuja casi ordenada =====\n\n";
    cout << "n\tVersion A\tVersion B\n";
    for (int n : {100, 1000, 5000}) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) a[i] = i + 1;
        swap(a[n / 2], a[n / 2 + 1]); // solo 2 adyacentes fuera de lugar
        cout << n << "\t" << burbujaA(a) << "\t\t" << burbujaB(a) << "\n";
    }
    return 0;
}
