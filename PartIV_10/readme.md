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

1. *01while.c* Discute con tus compañeros si la afirmación es correcta:
	
	- [ ] La instruccion while se utiliza para generar bucles (ciclos):
	hasta satisfacer la condicion, un grupo de condiciones se 
	ejecuta de forma repetida.
	- [ ] La instruccion while se utiliza para generar bucles (ciclos):
	hasta evitar la condicion, un grupo de instrucciones se 
	ejecuta de forma repetida.
	- [X] La instruccion while se utiliza para generar bucles (ciclos):
	hasta satisfacer la condicion, un grupo de instrucciones se 
	ejecuta de forma repetida.
	- [ ] La instruccion while se utiliza para generar bucles (ciclos):
	hasta satisfacer la condicion, ningún grupo de instrucciones se 
	ejecuta de forma repetida.
	- [ ] La instruccion while se utiliza para generar bucles (ciclos):
	hasta satisfacer la condicion, un grupo de instrucciones no se 
	ejecuta de forma repetida.

~~~
	while(condicion){instrucciones}
~~~

2. *02do-while.c* Observa cuál es la forma correcta de un do-while

	- [ ]
	```C 
	do 
	{
	# instrucciones
	}
	while(condicion)
	```
	- [X]
	```C 
	do 
	{
	# instrucciones;
	}
	while(condicion)
	```
	- [ ]
	```C 
	do 
	{
	# instrucciones
	}
	while(condicion;)
	```
	- [ ]
	```C 
	do; 
	{
	# instrucciones
	}
	while(condicion)
	```


~~~
	La instrucción do-while se utiliza para generar bucles (ciclos):
	un grupo de instrucciones se ejecuta de forma repetida, hasta 
	satisfacer la condicion.
~~~


3. *03centinela-bucle* Reflexiona sobre el uso de los centinelas. Desde 
	el punto de vista de la programación, responde:	¿Qué es un centinela?

	
~~~
	Repetición definida: Aquella que se implementa a través de un contador.
	Repetición indefinida: Aquella que se implementa a través de un centinela.

~~~

4. *04bandera-bucle.c* Reflexiona sobre las siguientes afirmaciones: Una bandera...

	a.[ ] no es un indicador.
	b.[X] es un indicador.
	c.[ ] no es bandera.
	d.[ ] es un parámetro de iteración.
	e.[ ] es una variables.

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


