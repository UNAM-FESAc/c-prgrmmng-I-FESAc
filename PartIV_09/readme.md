# Ejercicios en clase

## Informe de laboratorio

Debes realizar un informe de laboratorio que contenga información sobre la 
lista de ejercicios que aparecen en esta sección. El formato para el informe 
debe seguir el que se muestra en el siguiente archivo:
[PDF](https://www.dropbox.com/s/su6eq5njqy4vvmr/gral-templete.pdf?dl=0)

~~~
	Es posible que en algunas sesiones se use el 
	formato PDF de la [bitácora](https://www.dropbox.com/s/lr2n0dip3psg3e3/bitacora_lab.pdf?dl=0). 
~~~

## Ejercicios

1. *01prime-number.c* Realizar un programa que pida un número y responda 
si es par o impar.

~~~
	if(condición){instrucción si condición es Verdadera}else{instrucción si condición es falsa}
~~~


2. *02numerosdiferentes.c* Realizar un pseudocódigo y dar una salida legible para 
aquel usuario que tenga el archivo ejecutable.


3. *03yes-no.c* Construya el código en C usando el siguiente pseudocódigo:
	```
	INICIO
   		Número: ENTERO
   		ESCRIBA Escriba un número
   		LEA número
   		Si número >= 0 entonces
      			ESCRIBA El número es positivo
   				Sino
         		ESCRIBA El número es negativo
      		Fin-Si
	FIN

	```

4. *04ques-ope.c* 
	a. El estudiante debe cambiar == por =, y reflexionar sobre lo que sucede.

	b. Discute con tus compañeros si la afirmación es correcta:
		i.[X] La declaración switch como una declaración de selección 
		múltiple. Esta declaración se usa para seleccionar un 
		camino de diferentes alternativas en la ejecución de 
		un programa. Funciona asociando una variable con un lista 
		de identificadores y cuando encuentra la opción que se ajusta; 
		entonces la secuencia se ejecuta.
		ii.[ ] La declaración switch como una declaración de selección 
		múltiple. Esta declaración no se usa para seleccionar un 
		camino de diferentes alternativas en la ejecución de 
		un programa. Funciona asociando una variable con un lista 
		de identificadores y cuando encuentra la opción que se ajusta; 
		entonces la secuencia se ejecuta.
		iii.[ ] La declaración switch como una declaración de selección 
		múltiple. Esta declaración se usa para seleccionar un 
		camino de diferentes alternativas en la ejecución de 
		un programa. Funciona asociando una variable con un lista 
		de datos aleatorios y cuando encuentra la opción que se desajusta; 
		entonces la secuencia se ejecuta.
		iv.[ ] La declaración switch como una declaración de selección 
		múltiple. Esta declaración se usa para seleccionar un 
		camino de diferentes alternativas en la ejecución de 
		un programa. Funciona asociando una variable con un lista 
		de enteros y cuando encuentra la opción que se no ajusta; 
		entonces la secuencia se ejecuta.
		iv.[ ] La declaración switch como una declaración de selección 
		múltiple. Esta declaración se usa para seleccionar un 
		camino de diferentes alternativas en la ejecución de 
		un programa. Funciona asociando una variable con un lista 
		de identificadores y cuando encuentra la opción que se ajusta; 
		entonces la secuencia no se ejecuta.
	c. Introduce el teorema del seno y  del coseno en el programa 
	y que el programa calcule el otro lado. 
	En caso necesario, el usuario debe introducir dos lados y un ángulo 
	por consola, y elegir la clasificación del triángulo según sus lados. 



```C
	# Identificador puede ser de diferente tipo. Prueba cuáles...
	switch(Identificador){
	case 1:
	# Instrucciones;
	# ...y casos n-1
	break;
	case n:
	break;
	default: 
	# Instrucciones por defecto;
	break;	
	}

```

	


~~~
	|| significa o y && significa y. Son el equivalente en las conjunciones 
	gramaticales (*y* y *o*).
~~~



5. *05incr-decr-op.c* Reaclice un bitácora en la que de describa cómo funcionan 
los operadores de incremento y reducción (decrement).

# Bibliografía

1. Ir [:link:](https://www.aprenderaprogramar.com/index.php?option=com_content&view=article&id=322:instrucciones-condicionales-si-entonces-sino-if-then-else-ejemplos-en-pseudocodigo-cu00142a&catid=28&Itemid=59)

2. Ir [:link:](http://programavideojuegos.blogspot.com/2013/05/25-ejercicios-resueltos-de-estructuras.html)



