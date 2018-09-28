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

7. *07if_bucle.c* Cambia break por continue y observa lo que sucede.


8. *08if-anidado* Descubre cómo operan los símbolos && y ||.


>	|| significa o y && significa y. Son el equivalente en las conjunciones 
>	gramaticales (_y_ y _o_).




	




## Referencias
1. Lenguaje C [:link:](http://www.carlospes.com/curso_de_lenguaje_c/04_01_instruccion_break.php)





