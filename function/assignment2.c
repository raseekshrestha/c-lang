#include <stdio.h>
#include <math.h>

// Area of cuboid

// Type 1 : no parameter , no return
// void areaOfCuboid(){
// 	float area,len;
// 	printf("Enter length of cuboid in meter: ");
// 	scanf("%f",&len);
// 	area = 6*pow(len,2);
// 	printf("Area is %.2f square meter\n",area );
// }

// int main(){
// 	areaOfCuboid();
// 	return 0;

// }


// Type 2 : no parameter ,return type: float
// float areaOfCuboid(){
// 	float area,len;
// 	printf("Enter length of cuboid in meter: ");
// 	scanf("%f",&len);
// 	area = 6*pow(len,2);
// 	// printf("Area is %.2f square meter\n",area );
// 	return area;
// }

// int main(){
// 	float area = areaOfCuboid();
// 	printf("Area of cuboid is  %.2f meter square\n",area );
// 	return 0;

// }


// Type 3: with parameter , no return
// void areaOfCuboid(float len){
// 	float area;
	
// 	area = 6*pow(len,2);
// 	printf("Area is %.2f square meter\n",area );
// }

// int main(){
// 	float len;
// 	printf("Enter length of cuboid in meter: ");
// 	scanf("%f",&len);
// 	areaOfCuboid(len);
// 	return 0;

// }



// Type 4 : with parameter ,return type float
// float areaOfCuboid(float len){	
// 	return 6*pow(len,2);	
// }

// int main(){
// 	float len,area;
// 	printf("Enter length of cuboid in meter: ");
// 	scanf("%f",&len);
// 	area = areaOfCuboid(len);
// 	printf("Area is %.2f square meter\n",area );
// 	return 0;

// }


// ------------------------------------------------
// Q2. Volume of sphere

// Type 1 : no parameter , no return

// void volumeOfSphere(){
// 	float radius;
// 	printf("Enter raduis of sphere in meter: ");
// 	scanf("%f",&radius);
// 	printf("volume of sphere is %.2f cubic meter\n",(float)4/3*3.14*pow(radius,3) );
// }
// int main(){
// 	volumeOfSphere();
// 	return 0;
// }


// Type 2: no paramter ,return type float
// float volumeOfSphere(){
// 	float radius;
// 	printf("Enter raduis of sphere in meter: ");
// 	scanf("%f",&radius);
// 	return (float)4/3*3.14*pow(radius,3);
	
// }
// int main(){
// 	printf("volume of sphere is %.2f cubic meter\n",volumeOfSphere() );
// 	return 0;
// }



// Type 3: with parameter, no return
// void volumeOfSphere(float radius){	
// 	printf("volume of sphere is %.2f cubic meter\n",(float)4/3*3.14*pow(radius,3) );
// }
// int main(){
// 	float radius;
// 	printf("Enter raduis of sphere in meter: ");
// 	scanf("%f",&radius);
// 	volumeOfSphere(radius);
// 	return 0;
// }



// type 4: with paramter , return type flaot
// float volumeOfSphere(float radius){	
// 	return (float)4/3*3.14*pow(radius,3);
// }
// int main(){
// 	float radius;
// 	printf("Enter raduis of sphere in meter: ");
// 	scanf("%f",&radius);

// 	printf("volume of sphere is %.2f cubic meter\n",volumeOfSphere(radius));

// 	return 0;
// }



// ------------------------------------------------
// Q.3 distance travelled by the body

// type 1: no parameter,no return
// void distance(){
// 	float speed,time;
// 	printf("Speed of object and time taken: ");
// 	scanf("%f %f",&speed,&time);
// 	printf("Distance is %.2f meter",speed*time );

// }

// int main(){
// 	distance();
// 	return 0;
// }

// type 2: with paramter but no return value 
// void distance(float speed,float time){	
// 	printf("Distance is %.2f meter",speed*time );
// }

// int main(){
// 	float speed,time;
// 	printf("Speed of object and time taken: ");
// 	scanf("%f %f",&speed,&time);
// 	distance(speed,time);
// 	return 0;
// }


// type 3: no paramter , return type  float
// float distance(){
// 	float speed,time;
// 	printf("Speed of object and time taken: ");
// 	scanf("%f %f",&speed,&time);	
// 	return speed*time;
// }

// int main(){
	
// 	printf("distance is %.2f meter",distance());
// 	return 0;
// }



// type 4: with paramter and return value
// float distance(float speed,float time){
		
// 	return speed*time;
// }

// int main(){
// 	float speed,time;
// 	printf("Speed of object and time taken: ");
// 	scanf("%f %f",&speed,&time);
// 	printf("distance is %.2f meter",distance(speed,time));
// 	return 0;
// }



// ------------------------------------------------
// Q.4 calulating simple intrest

// type 1 : without parameter and return value

// void simpleIntest(){
// 	float principle,rate,time;
// 	printf("Enter Principle,rate(in %%),time(in yrs): " );
// 	scanf("%f %f %f",&principle,&rate,&time);
// 	printf("Simple intrest is %.2f\n",(principle* time* rate)/100 );

// }
// int main(){
// 	simpleIntest();
// 	return 0;
// }



// type 2 : without parameter but with return value

// float simpleIntest(){
// 	float principle,rate,time;
// 	printf("Enter Principle,rate(in %%),time(in yrs): " );
// 	scanf("%f %f %f",&principle,&rate,&time);
// 	return (principle* time* rate)/100;
	

// }
// int main(){	
// 	printf("Simple intrest is %.2f\n",simpleIntest());
// 	return 0;
// }


// type 3 : with parameter but without return value

// void simpleIntest(float principle,float rate,float time){
	
// 	printf("Simple intrest is %.2f\n",(principle* time* rate)/100 );
	

// }
// int main(){	
// 	float principle,rate,time;
// 	printf("Enter Principle,rate(in %%),time(in yrs): " );
// 	scanf("%f %f %f",&principle,&rate,&time);
// 	simpleIntest(principle,rate,time);
// 	return 0;
// }


// type 4 : with parameter and  return value

// float simpleIntest(float principle,float rate,float time){
	
// 	return (principle* time* rate)/100;
	

// }
// int main(){	
// 	float principle,rate,time;
// 	printf("Enter Principle,rate(in %%),time(in yrs): " );
// 	scanf("%f %f %f",&principle,&rate,&time);
// 	printf("simple intrest is %.2f\n",simpleIntest(principle,rate,time));
// 	return 0;
// }

