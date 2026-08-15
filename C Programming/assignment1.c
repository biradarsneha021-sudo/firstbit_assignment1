#include<stdio.h>

//1) even and odd number
int main()
{
int no=10;
int year;
int num,original,reverse,first,second,third;
char ch;
int age;

if(no %2==0)
	{
	printf("number is even\n");
	}	
	else
	{
		printf("number is odd numbers\n");
	}
	
//2) Write a program to check given 3 digit number is pallindrome or not

	printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;

    reverse = (third * 100) + (second * 10) + first;

    if (original == reverse)
        printf("%d is a Palindrome number.", original);
    else
        printf("%d is not a Palindrome number.", original);
			
//3) Write a program to check whether a given year is a leap year
	
    printf("\nEnter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	 {
        printf("%d is a leap year.\n", year);
    } else 
	{
        printf("%d is not a leap year.\n", year);
    }
    
//4) Write a program to check whether a given character is a vowel or consonant
	
    ch = 'A';
 
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf(" %c is a Vowel", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf(" %c is a Consonant", ch);
    } else {
        printf("Invalid character");
    }
    
//5) Write a program to check whether a person is eligible to vote (age ≥ 18)
printf("\nEnter to age :");
scanf("%d", &age);

if(age>=18)
{
	printf("Person is eligible to vote");
	}	
else{
	printf("Person is not eligible to vote");
}

//6) Write a program to check whether a given character is uppercase or lowercase

char c;

    printf("\nEnter a character: ");
    scanf(" %c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("The character is Uppercase.\n");
    else if (c >= 'a' && c <= 'z')
        printf("The character is Lowercase.\n");
    else
        printf("The entered character is not an alphabet.\n");
        
//7) Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% 
//respectively. 

 float basic, da, ta, hra, total;

    printf("\nEnter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }

    total = basic + da + ta + hra;

    printf("Basic Salary = %.2f\n", basic);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f\n", total);
} 
    


   