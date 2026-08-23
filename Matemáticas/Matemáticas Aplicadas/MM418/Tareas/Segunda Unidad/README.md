# Tarea

En este directorio se guarda la tarea de la segunda unidad de MM-418.

## Ejercicio 1

Crear una clase Cuadrado con datos miembro: l (longitud del lado)

1. Haga las funciones set que valide la longitud positiva y get.
2. Determine un constructor , y un constructor predeterminado que asigne 1 lado.
3. Determine un constructor sobrecargado que requiera el área y otro con la de la diagonal
4. Determine funciones miembro que Devuelvan el área, perímetro.
5. hacer un main de prueba

## Ejercicio 2

Cree una clase llamada Complejo para realizar operaciones aritméticas con números complejos.
Escriba un programa para evaluar su clase (puede usar el codigo que se uso en clases).
Use variables `double` para representar los datos `private` de la clase.

1. Proporcione un constructor predeterminado y un contructor que permita a un objeto de la clase
2. Sobrecargue dos operadores unarios para calcular el modulo y el conjugado
3. Función miembro que determine la dirección
4. Sobrecargue operadores tales que que:
  1. Sumar y restar dos números Complejo
  2. Multiplicar dos números Complejo
5. Compruebe mediante este codigo las propiedades
  1. $z + \bar{z} = 2𝑅𝑒(𝑧)$
  2. $𝑧 − \bar{𝑧} = 2𝑖𝑚(𝑧)$
6. Haga un función que sume un arreglo de números complejos.
7. Hacer `main` de prueba.

## Ejercicio 3

Desarrollar la clase triangulo.

1. Datos miembro 3 valores de tipo `double`.
2. Crear un constructor predeterminado y un constructor que valide si los 3 lados forman
un triangulo.
3. Utilice la clase punto para sobrecargar el constructor y reciba 3 objetos tipo punto y
tendrá que crear una una función miembro que determine la distancia entre 2 objetos
punto cuales quiera.
4. Hacer una función miembro que devuelva el area del triangulo
5. sobrecargar el operador « para imprimir los lados , el area del triangulo.
6. sobrecargar el operador == para verificar si 2 triángulos son o no semejantes.

## Ejercicio 4

Desarrolle un programa en C++ que permita administrar una colección de libros de una
biblioteca utilizando Programación Orientada a Objetos.

Cree una clase llamada Libro con los siguientes atributos privados:

- Título del libro.
- Autor.
- Cantidad de ejemplares disponibles.

La clase debe incluir:

1. Un constructor por defecto.
2. Un constructor con parámetros.
3. Métodos de acceso (get) y modificación (set) para todos los atributos.
4. Un método que muestre la información completa del libro.
5. Validaciones para evitar que la cantidad de ejemplares sea negativa.

Además, sobrecargue los siguientes operadores:

- Operador + para combinar dos objetos Libro. La operación solo será válida si ambos
libros tienen el mismo título y autor; el resultado será un nuevo objeto cuya cantidad de
ejemplares sea la suma de ambos.
- Operador == para determinar si dos libros corresponden a la misma obra (mismo título
y mismo autor).
- Operador « para mostrar la información del libro utilizando cout.

En la función principal (main):

1. Cree tres objetos de la clase Libro.
2. Muestre la información de cada uno utilizando el operador «.
3. Compare dos libros utilizando el operador ==.
4. Si representan la misma obra, utilice el operador + para combinar la cantidad de ejemplares
y muestre el resultado.
