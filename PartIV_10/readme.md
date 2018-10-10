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

## Enunciados

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

2. *02do-while.c* Observa y discute sobre cuál es la forma correcta de un do-while

	- [ ] 
	```C 
	do 
	{
	// instrucciones
	}
	while(condicion)
	```
	- [X] 
	```C 
	do 
	{
	// instrucciones;
	}
	while(condicion)
	```
	- [ ] 
	```C 
	do 
	{
	// instrucciones
	}
	while(condicion;)
	```
	- [ ] 
	```C 
	do; 
	{
	// instrucciones
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

5. *05ques-ope.c* 
	a. El estudiante debe cambiar == por =, y reflexionar sobre lo que sucede.

	b. Introduce el teorema del seno y  del coseno en el programa 
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

	c. Escriba dos programas en los que implemente un if-else y el otro con 
	el operador ternario.

~~~
	El operador ternario se usa de la forma A ? B : C
	y es una operacion con tres operandos. Se conoce como expresion 
	condicional. Note la similitud con el condicional if-else.
~~~
	

6. *06if_anidado.c*

	a. Realiza un programa que  informe si el caracter introducido es o no un número.


	b. Discute si la respuesta elegida es correcta:
	-[ ] 
	```C
	if(condicion1) 
	{
   // las sentencias que se ejecutaran si la condicion1
   // es cierta
	}
	else if(condicion2) 
	{
   //las sentencias que se ejecutaran si la condicion1
   //es falsa y la expresion2 es verdadera
	}
	else if(condicion3) 
	{
   //las sentencias que se ejecutaran si la condicion1
   //y la expresion2 son verdaderas, y la condicion3 es 
   //verdadera
	}
	...
	else 
	{
   //si todas las declaraciones anteriores son falsas
	}
	```
	-[ ] 
	```C
	if(condicion1) 
	{
   // las sentencias que se ejecutaran si la condicion1
   // es cierta
	}
	else if(condicion2) 
	{
   //las sentencias que se ejecutaran si la condicion1
   //es falsa y la expresion2 es verdadera
	}
	else if(condicion3) 
	{
   //las sentencias que se ejecutaran si la condicion1
   //y la expresion2 son falsas, y la condicion3 es 
   //verdadera
	}
	...
	else 
	{
   //si todas las declaraciones anteriores son verdaderas
	}
	```

	-[X] 
	```C
	if(condicion1) 
	{
   // las sentencias que se ejecutaran si la condicion1
   // es cierta
	}
	else if(condicion2) 
	{
   //las sentencias que se ejecutaran si la condicion1
   //es falsa y la expresion2 es verdadera
	}
	else if(condicion3) 
	{
   //las sentencias que se ejecutaran si la condicion1
   //y la expresion2 son falsas, y la condicion3 es 
   //verdadera
	}
	...
	else 
	{
   //si todas las declaraciones anteriores son falsas
	}
	```

7. *07if_bucle.c* 
	- Cambia break por continue y observa lo que sucede.
	- Descubre cómo operan los símbolos && y ||.
	- Escribe un código que tome un letra en minúscula (mayúscula) 
	y regrese su mayúscula (minúscula). Además debes considerar que 
	el usuario puede incluir números, por lo que debes incluir qué 
	hará tu programa si el usuario escribe un carácter.

8. *08for_bucle* 
	- Modifica el código para que la salida sea:
	+----------------------------------------+
	|                Resultados              |
	+----------------------------------------+
	| i =     0 | i*i =     0 | i*i*i =     0|
	| i =     1 | i*i =     1 | i*i*i =     1|
	| i =     2 | i*i =     4 | i*i*i =     8|
	| i =     3 | i*i =     9 | i*i*i =    27|
	| i =     4 | i*i =    16 | i*i*i =    64|
	| i =     5 | i*i =    25 | i*i*i =   125|
	+-------------+-------+--------+---------+
	- Haz que los valores inicial y final se adquieran a traves 
	de la pantalla.

9. *09for_bucle.c*
	- Modifica el archivo en la línea ```C printf("%d\n",i++); ```
	por ```C printf("%d\n",++i); ```
	Discute con tus compañeros sobre los resultados obtenidos. Explíca.

	- Modifica el archivo para que obtengas (usa el operador incremento):
	+----------+
	|Resultados|
	+----------+
	| 2  | 3   |
  	| 5  | 6   |
  	| 8  | 9   |
 	|11  |12   |
 	|14  |15   |
 	|17  |18   |
 	|20  |21   |
	+----------+
	Discute tu solución.



10.*10for_bucle.c* Edita el código...
	- para que la salida sea parecida a (usa secuencias de escape):
	+-------------+
	| Resultados  |
	+-------------+
	|4 x -5 =  -20|
 	|4 x -4 =  -16| 
 	|4 x -3 =  -12| 
 	|4 x -2 =   -8| 
 	|4 x -1 =   -4| 
 	|4 x  0 =    0| 
 	|4 x  1 =    4| 
 	|4 x  2 =    8| 
 	|4 x  3 =   12| 
 	|4 x  4 =   16| 
 	|4 x  5 =   20|
	+-------------+ 
	- Implementa un switch para que el usuario elija cuál tabla de multiplicar 
	desea ver en pantalla (también puedes usar un for).
	- Modifica el código para la salida se muestre de la siguiente forma (ejemplo):
	+------------------------------------------------------------------------------------+
	| 				Resultados  					     |
	+------------------------------------------------------------------------------------+
 	|6 x  1 =  6.0| 	6 +  1 =  7.0| 		 6 -  1 = -5.0| 	 6 /  1 =  0.2| 
 	|6 x  2 = 12.0| 	6 +  2 =  8.0| 		 6 -  2 = -4.0| 	 6 /  2 =  0.3| 
 	|6 x  3 = 18.0|		6 +  3 =  9.0| 		 6 -  3 = -3.0| 	 6 /  3 =  0.5| 
 	|6 x  4 = 24.0| 	6 +  4 = 10.0| 		 6 -  4 = -2.0| 	 6 /  4 =  0.7| 
 	|6 x  5 = 30.0| 	6 +  5 = 11.0| 		 6 -  5 = -1.0| 	 6 /  5 =  0.8|
	+------------------------------------------------------------------------------------+
11. *11for-anidado.c* Revisa detalladamente la siguiente información y confirma cuál aseveración 
	corresponde con el código que se muestra en el archivo mencionado.
	<!--- La respuesta correcta es la primera--->

	- Primero algoritmo


P1	|			n=0
P2	|     	i = 1				| 	i = 2	
P3	| j = 5	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 12|	|n = 19	| 	|n = 24	| n = 27
P5	|		Bucle j 		|	Bucle j		|	|	
P6	|				Bucle i			  		|FIN	

	- Segundo algoritmo

P1	|			n=1
P2	|     	i = 1				| 	i = 2
P3	| j = 5	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 12|	|n = 19	| 	|n = 24	| n = 27
P5	|		Bucle j 		|	Bucle j		|	|	
P6	|				Bucle i			  		|FIN	

	- Tercer algoritmo

P1	|			n=0
P2	|     	i = 1				| 	i = -2
P3	| j = 5	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 12|	|n = 19	| 	|n = 24	| n = 27
P5	|		Bucle j 		|	Bucle j		|	|	
P6	|				Bucle i			  		|FIN	

	- Cuarto algoritmo

P1	|			n=0
P2	|     	i = 1				| 	i = 2
P3	| j = 5	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 15|	|n = 19	| 	|n = 24	| n = 27
P5	|		Bucle j 		|	Bucle j		|	|	
P6	|				Bucle i			  		|FIN	


## Referencias
1. Lenguaje C [:link:](http://www.carlospes.com/curso_de_lenguaje_c/04_01_instruccion_break.php)





