#include <stdio.h>
#include <ctype.h>

int main() {
	char unit;
	float temp;

	printf("\nIs the temperature in (F) or (C)?: ");
	scanf("%c", &unit);

	unit = toupper(unit);

	if(unit == 'C') {
		printf("\nEnter the temp in Celsius: ");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;
		printf("the temperature in farenheit is: %.1f\n", temp); 
	} else if(unit == 'F') {
		printf("\nEnter temperature in Fahrenheit: ");
		scanf("%f", &temp);
		temp = ((temp - 32) * 5) / 9;
		printf("the temperature in celsius is: %.1f\n", temp);
	} else {
		printf("\n %c is not a valid unit of measurement\n", unit); 
	}

}
