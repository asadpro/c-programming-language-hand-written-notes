// C is a strongly typed language this mean that once a variable type assigned it cannot be changed. e.g. int will be int forever

// There are 3 types of integer literals in C programming
// Decimal (base 10)
// Octal (base 8)
// Hexadecimal (base 16)
// int myVar;
// Here myVar is a variable of int(integer) type. The size of int is 4 bytes.
// double 2.3 // 8 bytes
// short int 2 // 2 bytes
// unsigned int 7 // at least 2, usually 4 bytes
// long int	//at least 4, usually 8 bytes
// long long int	//at least 8 bytes
// unsigned long int	//at least 4 bytes
// unsigned long long int	//at least 8 bytes
// signed char // 1 bytes
// unsigned char // 1 bytes
// long double //at least 10, usually 12 or 16

// We can declate multiple variable at once e.g

// 🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒

// Short and Long
// If you need to a use a large number, you can use a type specifier long. Here's how:
// long a;
// long long b;
// long double c;
// Above a & b can store long integer and c can store a floating point number.

//  For a small integer haveing size of [−32,767, +32,767]
// short d;

// we can always checks the size of variable using sizeof(variableName)

// #include <stdio.h>=      
// int main() {
//   short a;
//   long b;
//   long long c;
//   long double d;
//   short int num = 233;
//   char str = 'c';
//   char str2[] = "AsadPsldkfjlaskdjfklasdjlkaro";

//   printf("size of short = %d bytes\n", sizeof(a));
//   printf("size of String = %d bytes\n", sizeof(str2));
//   printf("size of char = %d bytes\n", sizeof(str));
//   printf("size of long = %d bytes\n", sizeof(b));
//   printf("size of long long = %d bytes\n", sizeof(c));
//   printf("size of long double= %d bytes\n", sizeof(d));
//   printf("Size of integer: %d ",sizeof(num));
//   return 0;
// }

// Signed and Unsigned are type modifiers. We can alter the data storage of a 
// datatype by using them: 
// Signed - allows only for storage of a both positive and negative numbers.
// Unsigned - allows only for storage of positive number.

// int x = -345; //signed integer but not unsigned bcz unisigned cannot hold negative integers.

// 🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒🚒


#include <stdio.h>

int main()
{
  int like = 012; //Now remember %d specifier takes only decimal number and if
  // we pass octal number like above (012) it will print only decimal number upto 10
  // printf("Octal number not decimal: %d", like);

  // Accessing input from user

  // int testinteger; 
  // printf("Enter an integer: ");
  // scanf("%d",&testinteger); // Here the & operator is used to fetch the address of testinteger and store that 
  // //integer value in testinteger.
  // printf("Number = %d",testinteger);


  // printing asci value of a-z
  // char str[] = "abcdefghijklmnopqrstuvxyz";
  // for(int i = 0; i <= 24; i++)
  // {
  //   printf("%d\t",str[i]);
  // }

  // 🚒🚒🚒 Multiple inputs from the user
  // int a; 
  // float b;

  // printf("Enter integer and then a float: ");
  // scanf("%d %f",&a,&b);
  // printf("You enetered %d and %f ",a,b);

  // 🚖🚖🚖🚖 C Bitwise Operators 🚖🚖🚖🚖
  /*Bitwise operator work like binary calcuation of AND(&), OR(|) XOR(^), COMPLEMENT(~) like we do in DLD (Digital logic design) */
  // e.g 1101 = 13 , 1111 = 15 addition of both 13+15
  // int num1 = 13; 
  // int num2 = 15; 
  // printf("Output %d\n", num2&num1);
  // printf("Output %d\n", num2|num1);
  /*
  Above line is equal to 
    1111
 OR 1101
  ---------
    1111  = 15 
  ---------
  */
  // printf("Output %d\n", num2^num1);
  // printf("Output %d become %d\n",2, ~2); //Output 2 become -3 (-3 because on positive side of the number is zero also count)

// 🚧🚧🚧🚧 Examples of introduction
// C program to find ASCII value of a character entered by the user
// char str[5] = {'a','b','c','d','e'};
// for(int i = 0; i < 5; ++i)
// {
//   printf("ASCII value of %c : ",str[i]);
//   printf("%d\n",str[i]);
// }

// 🚧🚧🚧🚧 Examples of introduction
// C program to find quotient and remainder of Two Integers
// int dividend = 5;
// int divider = 8;

// float result = dividend/divider;

// printf("%f",result);

// 🚧🚧🚧🚧 Examples of introduction
// int integer = 23; 
// float floating = 23.43;
// double doubling = 234.23423;
// char ch = 'a';

// printf("Size of integer: %d\n",sizeof(integer));
// printf("Size of floating: %f\n",sizeof(floating));
// printf("Size of double: %lf\n",sizeof(doubling));
// printf("Size of character: %c\n",sizeof(ch));
  
// 🚧🚧🚧🚧 C program to swap two numbers

// int num1 = 2;
// int num2 = 33;
// int num3;
// printf("Before swaping: num1 = %d  num2 = %d\n",num1,num2);
// num3 = num1;
// num1 = num2;
// num2 = num3;
// printf("After swaping: num1 = %d  num2 = %d",num1,num2);

// Program to create a simple calculator
// #include <stdio.h>=


//     char operation;
//     double n1, n2;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operation);
//     printf("Enter two operands: ");
//     scanf("%lf %lf",&n1, &n2);

//     switch(operation)
//     {

//         case '+':
//             printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
//             break;

//         case '-':
//             printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
//             break;

//         case '*':
//             printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
//             break;

//         case '/':
//             printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
//             break;

//         // operator doesn't match any case constant +, -, *, /
//         default:
//             printf("Error! operator is not correct");
//     }

//     return 0;

// ⛽⛽⛽⛽⛽⛽⛽ Check whether a number is even or odd
// int num;
// printf("Enter a number to check whether it's EVEN or ODD: ");
// scanf("%d",&num);
// if (num%2 == 0)
// {
//   printf("This number is EVEN.");
// }
// else
// {

//   printf("This number is ODD.");
// }


// ⛽⛽⛽⛽⛽⛽⛽ Check whether a character is a vowel or consonant

// char ch;
// printf("Enter a Character to check whether it's VOWEL or CONSONANT: ");
// scanf("%c",&ch);
// if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
// {
//     printf("%c is VOWEL",ch);
// }
// else
// {
//     printf("%c is CONSONANT",ch);
// }

// ⛽⛽⛽⛽⛽⛽⛽ Find the largest number among three numbers
// int num1 = 0,num2 = 0,num3 = 0;
// printf("Enter 3 numbers to check which one is larger: ");
// scanf("%d %d %d",&num1,&num2,&num3);

// if (num1>=num2 && num1>=num3)
// {
//   printf("%d is larger",num1);
// }
// if (num2>=num1 && num2>=num3)
// {
//   printf("%d is larger",num2);
// }
// if (num3>=num1 && num3>=num2)
// {
//   printf("%d is larger",num3);
// }

// ⛽⛽⛽⛽⛽⛽⛽ Check Whether a Number is Positive or Negative or Zero.
// double number;
// char terminate = 'f';
// while (terminate != 't')
// {
// printf("Enter a numbers to Check Whether a Number is Positive or Negative or Zero: \n");
// scanf("%lf %c",&number,&terminate);
//   if(number>0.0)
//   {
//     printf("Postive number\n");
    
//   }
//   else if( number<0.0)
//   {
//     printf("Negative number\n");
//   }
//   else
//   {
//     printf("Zero\n");
//   }

// }
  

// ⛽⛽⛽⛽⛽⛽⛽ Checker whether a character is an alphabet or not
// char c;
// printf("Enter a character: \n");
// scanf("%c",&c);
// if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
// {
//   printf("%c is Alphabet.",c);
// }
// else
// {
//   printf("%c is not Alphabet.",c);
// }


// ⛽⛽⛽⛽⛽⛽⛽ Find the sum of natural numbers
// int i ,limit, sum =0;
// printf("Enter limit of natural numbers: \n");
// scanf("%d",&limit);
// for(i = 1; i<=limit; i++)
// {
//   sum += i;
// }
// printf("Sum is: %d ",sum);
// return 0;

// ⛽⛽⛽⛽⛽⛽⛽ Generate multiplication table
// int table, i;
// printf("Which table do you want to print: \n");
// scanf("%d",&table);
// for(i=1;i<=10;i++)
// {
//   printf("%d x %d = %d\n",table,i,table*i);
// }

// ⛽⛽⛽⛽⛽⛽⛽ Display factors of a number
// int number,i;
// printf("Enter a number to find it's factors: \n");
// scanf("%d",&number);
// for(i=1;i<=number;i++)
// {
//   if(number%i==0)
//   {
//     printf("%d ",i);
//   }

// }


}


