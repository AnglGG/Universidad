#include <stdio.h>

void lectura_datos(int *dayType, int *boardHour, int *boardMin, int *distance)
{
	printf("Tipo de día: ");
	scanf(" %d", dayType);
	while(*dayType != 1 && *dayType != 0)
	{
		printf("Error");
		printf("Tipo de día: ");
		scanf(" %d", dayType);
	}
	printf("Hora y minutos de subida: ");
	scanf(" %d %d", boardHour, boardMin);
	printf("Distancia: ");
	scanf(" %d", distance);
}

int create_board_time(int boardHour, int boardMin)
{
	return ((boardHour * 60) + boardMin);
}
float basic_fare(int distance)
{
	float	precio_final = 3.40;
	int cant = 0;

	if (distance <= 1000)
		return (precio_final);
	distance -= 1000;
	if (distance > 9200)
	{
		precio_final += ((9200/400) * 0.22);
		distance -= 9200;
		cant = distance / 350;
		if (distance%350 > 200)
			cant ++;
		precio_final += ((cant) * 0.22);
	}
	else
	{
		int cant = distance/400;
		if (distance%400 > 200)
			cant ++;
		precio_final += (cant * 0.22);
	}
	return (precio_final);
}
float suplemento(int dayType, int boardTime, float precio_final)
{
	float suplement = 0;
	if (dayType == 0)
	{
		if (boardTime >= 0 && boardTime < 360)
			suplement = precio_final * 0.5;
		else if (boardTime >= 1080 && boardTime < 1440)
			suplement = precio_final * 0.25;
	}
	else if (dayType == 1)
	{
		if (boardTime >= 0 && boardTime < 360)
			suplement = precio_final * 0.5;
		else if (boardTime >= 360 && boardTime <= 569)
			suplement = precio_final * 0.25;
		else if (boardTime >= 1080 && boardTime < 1440)
			suplement = precio_final * 0.25;
	}
	return (suplement);
}
float computeFare(int dayType, int boardTime, int distance)
{
	float precio;
	precio = basic_fare(distance);
	precio += suplemento(dayType, boardTime, precio);
	return (precio);
}

int main()
{
	int	dayType;
	int	boardHour;
	int	boardMin;
	int distance;
	int boardTime;
	float result;

	lectura_datos(&dayType, &boardHour, &boardMin, &distance);
	boardTime = create_board_time(boardHour, boardMin);
	result = computeFare(dayType, boardTime, distance);
	printf("Coste $%.2f\n", result);

}