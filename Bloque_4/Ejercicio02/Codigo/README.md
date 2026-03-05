Crea una clase llamada Persona que siga las siguientes condiciones:

Sus atributos son: nombre, edad, DNI, sexo (H para hombre, M para mujer), peso y altura. No queremos que se acceda directamente a ellos. Piensa qué modificador de acceso es el más adecuado, así como su tipo. Si quieres añadir algún atributo extra, puedes hacerlo. Por defecto, todos los atributos menos el DNI serán valores predeterminados según su tipo (0 para números, cadena vacía para String, etc.). El sexo será hombre por defecto; usa una constante para ello.

Se implementarán varios constructores:
 - Un constructor por defecto.
 - Un constructor con el nombre, la edad y el sexo; el resto por defecto.
 - Un constructor con todos los atributos como parámetros.

Los métodos que se implementarán son:
 - calcularIMC(): calculará si la persona está en su peso ideal (peso/altura2). Si esta fórmula devuelve un valor menor que 20, la función devuelve un -1. Si devuelve un número entre 20 y 25 (incluidos), significa que está por debajo de su peso ideal y la función devuelve un 0. Si devuelve un valor mayor que 25, significa que tiene sobrepeso y la función devuelve un 1. Te recomiendo que uses constantes para devolver estos valores.
 - esMayorDeEdad(): indica si es mayor de edad; devuelve un booleano.
 - comprobarSexo(char sexo): comprueba que el sexo introducido sea correcto. Si no lo es, será H por defecto. No será visible al exterior.
 - toString(): devuelve toda la información del objeto.
 - generaDNI(): genera un número aleatorio de 8 cifras y calcula, a partir de este número, su letra correspondiente. Este método será invocado cuando se construya el objeto. Puedes dividir el método para que te sea más fácil. No será visible al exterior.
 - Métodos set de cada parámetro, excepto del DNI.

Ahora, crea una clase ejecutable que haga lo siguiente:
 - Pide por teclado el nombre, la edad, el sexo, el peso y la altura.
 - Crea 3 objetos de la clase anterior:
    1. El primer objeto obtendrá las variables anteriores pedidas por teclado.
    2. El segundo objeto obtendrá todos los datos anteriores menos el peso y la altura.
    3. El último objeto será por defecto; para este último, utiliza los métodos set para asignar un valor a los atributos.
 - Para cada objeto, deberá comprobar si está en su peso ideal, tiene sobrepeso o está por debajo de su peso ideal, mostrando un mensaje informativo.
 - Indicar para cada objeto si es mayor de edad.
 - Por último, mostrar la información de cada objeto.