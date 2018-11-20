/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>


struct corredor{
	char nombre[30];
	short unsigned int edad;
	float altura;
	float califi;
} crrdr1 = {
	"Javier Orduz",
	20,
	1.8,
	9.0}, 
  crrdr2 = {
	"Andres Ducuara",
	23,
	1.7,
	8.0};


int main()
{

printf("Hola %s tienes %d anios, tu estatura es %.1f m y\n tu calificacion en programacion I es %.1f\n", crrdr1.nombre, crrdr1.edad,crrdr1.altura, crrdr1.califi);
printf("\n\n");
printf("Hola %s tienes %d anios, tu estatura es %.1f m y\n tu calificacion en programacion I es %.1f\n", crrdr2.nombre, crrdr2.edad,crrdr2.altura, crrdr2.califi);
printf("Promedio de calificacion es %.1f\n", (crrdr1.califi+crrdr2.califi)/2.0);

return 0;

}

