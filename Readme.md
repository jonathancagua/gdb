# Instalación
    apt-get update
    apt-get install gdb

## Listar

    gdb lista

    (gdb) l
```C
7       int main() {
8           uint16_t a = 10;
9           uint16_t b = 5;
10
11          uint16_t resultado_suma = suma(a, b);
12          uint16_t resultado_resta = resta(a, b);
13
14          printf("Resultado de la suma: %hu\n", resultado_suma);
15          printf("Resultado de la resta: %hu\n", resultado_resta);
```


    (gdb) l 7,11
```C
7       int main() {
8           uint16_t a = 10;
9           uint16_t b = 5;
10
11          uint16_t resultado_suma = suma(a, b);
```

## Run

    (gdb) run
```C
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home/j/Documents/C/gdb/ejemplo2/bin/myprogram 
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
Resultado de la suma: 15
Resultado de la resta: 5
[Inferior 1 (process 51733) exited normally]
```

## Breakpoint
    (gdb) break suma
```C
Breakpoint 1 at 0x11f8: file componente/src/suma.c, line 4.
(gdb) run
Starting program: /home/j/Documents/C/gdb/ejemplo2/bin/myprogram 
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, suma (a=10, b=5) at componente/src/suma.c:4
4           return a + b;
```
Para avanzar utilizamos el comando next (o su forma abrebiada n): 
    
    (gdb) n
```C
    5       }
```
    (gdb) n
```C
    main () at src/main.c:12
    12          uint16_t resultado_resta = resta(a, b);
```

## Visualización del contenido de las variables

    (gdb) n
```C
main () at src/main.c:12
12          uint16_t resultado_resta = resta(a, b);

```
    (gdb) p resta(a, b)
    $2 = 5

    (gdb) p a
    $3 = 10

Aquí tienes algunos de los comandos más útiles:

- run: Inicia la ejecución del programa desde el principio.
    break <ubicación>: Establece un punto de interrupción en una ubicación específica, como una línea de código, función o dirección de memoria.
    
- continue o c: Continúa la ejecución del programa hasta el siguiente punto de interrupción.
- next o n: Ejecuta la siguiente línea de código, sin entrar en las funciones.

- step o s: Ejecuta la siguiente línea de código, entrando en las funciones si las hay.
    
- finish: Ejecuta el programa hasta que la función actual haya terminado y se haya retornado al llamador.

- print <expresión> o p <expresión>: Imprime el valor de una expresión o variable.

- backtrace o bt: Muestra el rastro de llamadas (call stack) actual.
- info locals: Muestra las variables locales en el contexto actual.
- info breakpoints: Muestra información sobre los puntos de interrupción establecidos.
- delete <número>: Elimina el punto de interrupción especificado por su número.
- watch <expresión>: Establece una condición de vigilancia en una expresión, deteniendo el programa cuando la expresión cambia.
- set <variable> = <valor>: Asigna un valor a una variable.
- display <expresión>: Muestra el valor de una expresión en cada pausa de GDB.
- quit o q: Sale de GDB.