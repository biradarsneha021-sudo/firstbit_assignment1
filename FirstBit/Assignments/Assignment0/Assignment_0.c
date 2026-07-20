
void main(){
	int a=10,b=20,sum;
	sum=a+b;
	printf("\n1) Addition od %d and %d is = %d\n  ",a,b,sum);
	
	//area of circle
	float area,r=2.2;
	float pi=3.14;
	area=pi*r*r;
	printf("\n2) area of circle %.0f =%.0f\n ", r,area);
	
	//Celsius into fahrenheit..
	int C;
	C= 4;
	int F = (C *9/5) + 32 ;
	printf("\n3) temperature from Celsius to Fahrenheit is %d\n ",F);
	
	//swaping with three varibles
	int x=10;
	int y=20;
	int z=30;
	int final;
	
	final=x;
	x=y;
	y=z;
	z=final;
	
	printf("\n4) x= %d\n" ,x);
	printf("y= %d\n" ,y);
	printf("z= %d\n" ,z);
	
	//five numbers average
 	int c=10, d=10, e=10;
	float avg;
	avg=a+b+c+d+e/5.0;
	printf("\n5) average= %2f\n",avg);
	
	//square and cube
	int s;
	a=10;
	s=a*a;
	printf("\n6) Sqaure of %d is %d\n",a,s);
	b=2;
	c=b*b*b;
	printf("Cube of %d is %d\n",b,c);
	
	//minutes into hrs and remaining hrs
	
    int mins = 135;
    int hrs, rm;

    hrs = mins / 60;
    rm = mins % 60;

    printf("\n7) Total Minutes = %d\n", mins);
    printf("Hours = %d\n", hrs);
    printf("Remaining Minutes = %d\n", rm);
    
    //perimeter of rectangle
    int l=10,w=30;
	int rect,peri;
	rect=1*b;
	printf("\n8) Reactangle = %d\n",rect);
	peri= 2*(l+w);
	printf("Perimeter of rectangle is =%d\n",peri);
	
	//area of triangle
	float q=10,h1=20,area1;
	area = 0.5*(q*h1); //0.5*b*h;
	printf("\n9) the %.0f and %.0f is = %.2f\n  ",q,h1,area1);
	
	//percentage
	float a1=50,a2=60,a3=70,a4=80,a5=90,avg1,per;
	avg1=a1+a2+a3+a4+a5/5.0;
	printf("\n10) average= %2f",avg1);	 

	per=avg1/500*100;
	printf("\nPercentage = %2f",per);
}