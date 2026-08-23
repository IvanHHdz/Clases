# Tarea

En este directorio se guarda la tarea de la tercera unidad de MM-418.

## Ejercicio 1

Diseñe un programa en C++ que implemente las siguientes clases:

- `Estudiante`, con los atributos necesarios para almacenar el nombre del estudiante, el 
número de cuenta y la carrera. 
- `Beca`, con los atributos necesarios para almacenar el tipo de beca y el porcentaje de 
descuento otorgado.
- `EstudianteBecario`, que herede de las clases Estudiante y Beca.

La clase `EstudianteBecario` debe implementar las siguientes funciones miembro: 
- `mostrainfo()`: muestra todos los datos del estudiante y de la beca asignada.
- `calcularPago(double costoMatricula)`: calcula y retorna el monto que el estudiante debe 
pagar después de aplicar el descuento correspondiente a la beca. 
- `actualizarBeca(string tipo, double porcentaje)`: actualiza el tipo de beca y el 
porcentaje de descuento, 

Hacer un `main` de prueba.

## Ejercicio 2

Se requiere implementar un programa para modelar figuras tridimensionales 
utilizando herencia en programación orientada a objetos. 

La clase base denominada `Figura3D` debe contener un miembro privado de tipo double 
llamado `altura`, junto con sus respectivos métodos `get` y `set`, y los constructores 
por defecto y con parámetros.

Esta clase debe incluir una función virtual llamada `calcularVolumen` que retorne un 
valor double con una implementación por defecto que devuelva cero, y una función virtual 
`imprimirDatos` que muestre la altura de la figura.

A partir de esta clase base, se debe derivar la clase `Cilindro`, que heredará 
todos los miembros de `Figura3D` y agregará un nuevo miembro privado de 
tipo double denominado radio. 

La clase `Cilindro` debe implementar sus propios constructores, así como 
los métodos `get` y `set` para el radio. 

Además, debe proporcionar su propia versión de las funciones `calcularVolumen`, 
que calculará el volumen del cilindro mediante la fórmula por radio al cuadrado 
por altura, y `imprimirDatos`, que mostrará el radio y el área de la base del cilindro.

## Ejercicio 3

Cree una clase llamada `Fraccion` que represente una fracción matemática.

La clase debe tener:

- Dos atributos privados: `int numerador`, `int denominador` y Un constructor que reciba 
el numerador y denominador
- Un método `mostrar()` que muestre la fracción en forma `a/b`

Ahora cree una clase llamada `Termino`, que represente un término de un polinomio de una variable.
Esta clase debe usar composición, ya que su coeficiente sería un objeto `Fraccion`.

La clase `Termino` debe tener:

- Un objeto `Fraccion` coeficiente 
- Un entero `exponente` y constructor que reciba una `Fraccion` y un exponente.
- Un método `mostrar()`

Finalmente, cree una clase llamada `Polinomio`, que también use composición al contener un 
arreglo de objetos `Termino`

La clase Polinomio debe:

- Tener un arreglo o vector privado de términos
- Un constructor que reciba una arreglo de coeficientes 
- Un método `mostrar()` que imprima el polinomio.

