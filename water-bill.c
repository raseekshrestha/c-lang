#include <stdio.h>

// water bill calcularor
// first install fee -- 1000
// (0 - 10) units -> Rs 100
// (10 - 20) unit -> Rs 10 per unit
// (>20) unit -> Rs 20 per unit

int main(){
	float unit,total;
	int install = 1000;
	printf("Enter the unit\n");
	scanf("%f",&unit);
	if (unit >= 0 && unit <= 10){
		total = install + 100;
	}
	else if(unit > 10 && unit <=20){
		total = install + 100 + (unit-10)*10;
		// install fee + first 10 unit ko fee + remaining unit at 10 per unit
	}
	else {
		total = install + 100 + 100 + (unit - 20) * 20;
		// install fee + first 10 unit and next 10 unit at 10 per unit + remaining unit at 20 per unit

	}
	printf("total bill is %f\n",total);
	return 0;
}