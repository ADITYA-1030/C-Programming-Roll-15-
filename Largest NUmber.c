//Assignment 2- C Program to find the largest of three number using a Function
//Aditya Gogoi (Roll No-15)
//26-09-2-2024
#include<stdio.h>  
  
int biggest(int, int, int); // function prototype  
  
int main()  
{  
    int a, b, c;  
  
    printf("Enter 3 integer numbers\n");  
    scanf("%d%d%d", &a, &b, &c);  
  
    //function call biggest(a, b, c)  
    printf("Biggest of %d, %d and %d is %d\n", a, b, c, biggest(a, b, c));  
  
    return 0;  
}  
  
// function definition  
int biggest(int x, int y, int z)  
{  
    if(x > y && x > z)  
    {  
       return x;  
    }  
    else  
    {  
       if(y > z)  
          return y;  
       else  
          return z;  
    }  
}
