
#include <stdio.h>

int main()
{
	//1) Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
		//desired operations.
    int a, b;
	char op;

printf("Enter two numbers: ");
scanf("%d%d", &a, &b);

printf("Enter operator (+, -, /, *, %%): ");
scanf(" %c", &op);

if(op == '+')
{
    printf("Addition = %d", a + b);
}
else if(op == '-')
{
    printf("Subtraction = %d", a - b);
}
else if(op == '*')
{
    printf("Multiplication = %d", a * b);
}
else if(op == '/')
{
    printf("Division = %d", a / b);
}
else if(op == '%')
{
    printf("Modulus = %d", a % b);
}
else
{
    printf("Invalid operator");
}
	
    //2) Accept three sides of a triangle from the user and determine whether the triangle is
	//equilateral, isosceles, or scalene.
	
	 int c;

    printf("\nEnter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Equilateral triangle");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    } 
    
    //3) Write a program to find greatest of three numbers using nested if-else.
	int p=10,q=30,r=40;
	if(p>q){
		if(p>r){
			printf("\np is greater than q");
		}
		else{
			printf("r is greater than p");
		}
	}
	else{
		if(q>r){
			printf("\nq is greater number");
		}
		else{
			printf("\nr is greater number");
		}	
	}
	
	//4) Ask the user to enter :
	  int marks;

    printf("\nEnter marks: ");
    scanf("%d", &marks);

    if(marks > 75)
    {
        printf("Distinction");
    }
    else if(marks > 65)
    {
        printf("First Class");
    }
    else if(marks > 55)
    {
        printf("Second Class");
    }
    else if(marks >= 40)
    {
        printf("Pass Class");
    }
    else
    {
        printf("Fail");
    }

    return 0;
	
	//5) discount
	float price, discount, finalPrice;
    char student;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
        {
            discount = price * 20 / 100;
        }
        else
        {
            discount = price * 10 / 100;
        }
    }
    else
    {
        if(price > 600)
        {
            discount = price * 15 / 100;
        }
        else
        {
            discount = 0;
        }
    }

    finalPrice = price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", finalPrice);

    return 0;	
    
    //6) Accept a number and check if it is divisible by 3, 5, or both.
    int no;

    printf("Enter a number: ");
    scanf("%d", &no);

    if(no % 3 == 0 && no % 5 == 0)
    {
        printf("Divisible by both");
    }
    else if(no % 3 == 0)
    {
        printf("Divisible by 3 but not by 5");
    }
    else if(no % 5 == 0)
    {
        printf("Divisible by 5 but not by 3");
    }
    else
    {
        printf("Divisible by None");
    }
    
    //Accept the age and check if the person is
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 12)
    {
        printf("Child");
    }
    else if(age <= 19)
    {
        printf("Teenager");
    }
    else if(age <= 59)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior");
    }

    return 0;
}