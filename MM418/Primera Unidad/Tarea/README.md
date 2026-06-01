# Tarea

En este directorio se guarda la tarea de la primera unidad de MM-418.

## Ejercicio 1

Escriba una función que guarde en un arreglo la representación binaria de un número entero.
El tamaño del arreglo depende del número de dígitos.
Haga dos versiones: una utilizando un tamaño fijo de arreglo y otra usando memoria dinámica.

## Ejercicio 2

Haga una fucion que reciba una lista tamaño `n` y un valor `x`, la funcion debe devolver la ultima
ubicación del valor `x`, los arreglos puede generarlos de manera aleatoria.

## Ejercio 3

Aproximación del número $e$.

El número matemático $e$ (base de los logaritmos naturales) puede aproximarse mediante la siguiente serie:

$$
  e = 1 + \frac{1}{1!} + \frac{1}{2!} + \cdots
$$

donde $n!$ representa el factorial del número $n$.

Desarrolle un programa en C++ utilizando funciones que solicite al usuario un número entero
positivo $n$ y calcule una aproximación del número $e$ utilizando los primeros $n$ términos de la serie.

1. Leer el valor de $n$.
2. Calcular los factoriales necesarios.
3. Sumar cada término de la serie.
4. Mostrar la aproximación obtenida.

No utilice funciones matemáticas predefinidas para calcular factoriales; impleméntelos mediante
ciclos o funciones creadas por usted.

## Ejercicio 4

Utilice enumeraciones para clasificar valores generados aleatoriamente.

1. Defina una enumeración llamada `Categoria` con los siguientes valores:
  1. `BAJO`
  2. `MEDIO`
  3. `ALTO`
2. Genere un arreglo de tamaño $n$ (solicitado al usuario) con números enteros aleatorios en el rango de 1 a 100.
3. Clasifique cada número según las siguientes reglas:
  1. Si el número es menor o igual a 33, pertenece a `BAJO`.
  2. Si el número está entre 34 y 66, pertenece a `MEDIO`.
  3. Si el número es mayor a 66, pertenece a `ALTO`.
4. Muestre cada número junto con su categoría correspondiente.
5. Al finalizar, muestre un resumen con la cantidad de elementos en cada categoría.

## Ejercicio 5

Escriba un programa para simular el tiro de dos dados.

1. Desarrolle una funcion llamada `lanzardado` , 
lo que hara es devolver un numero aleatorio entre 1 y 6.
2. Haga una funcion que devuelva la suma del lanzamiento de dos dados 
(esta funcion debe llamar la funcion `lanzardado`)
3. En el `main` de prueba simulara una cantidad definida por el usuario de lanzamientos de
dados. Dichos lanzamientos se guardaran en 3 arreglos, 2 que guarden cada dado y otro
la suma.
4. Haga un procedimiento que reciba los 3 arreglos con la informacion de los dados e
imprima los siguiente:
  1. Número de lanzamientos donde los dados fueron iguales.
  2. Número de lanzamientos donde la suma fue par.
  3. Porcentaje de lanzamientos donde la suma es 7.


