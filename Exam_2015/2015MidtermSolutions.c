 /* Solution Author: Sword Lord of the Lonely Peak
  * Date: 2020/02/22
  * Midterm 2015 - APS105
  * Solutions to question 1 to 9: 
  * 1) Answer: D will be printed 150 times
           
            #include <stdio.h> 
            #include <stdlib.h>
            
            int main(void) 
            { 
                int i = 300, count = 0;
                while (i > 0) // Excluding 0. 
                 { 
                   if (i % 2 == 0) // There will only be 150 even numbers in the range of 300. 
                   {
                        printf("D"); 
                        count++;
                   }
                   i--; 
                 }
                printf("\n%d", count);
                return (EXIT_SUCCESS);
            }

  * 2) double distance = (averageSpeed * (1/1000)) * 1800;    
  * 3) int randomGuess = 2*((rand() % (UPPER_BOUND - LOWER_BOUND + 1)) + LOWER_BOUND) + 1;
  * 4) bool yellow = (red && green && !blue)
  * 5) int leftover = fmin(numApples % 3, numApples % 5);
  * 6) There are four errors in this program: 

            #include <stdio.h> 
            #include <math.h> 
             
            int main(void) 
            { 
                 double root; 
                 for (int number = 1; number < 101; number += 2) // ERROR 1
                  { 
                       number = sqrt((double) root); // ERROR 2
                       printf("The Square Root of %0.2f is %.1f\n", number, root); // ERROR 3
                    } 
                 return (EXIT_DENIED); // ERROR 4
             }
            
             ERROR 1 => Should be written as for(number = 1.0; number <= 101.0; number += 2.0). This is logical error. 
                                     The variable number declaration should be declared outside the for loop as to not give run-time error due to conflicting C standards!
             ERROR 2 =>  Should be written as root = sqrt(number); This is a syntax error. 
             ERROR 3 =>  Should be written as printf("The square root of %lf is %0.2lf\n", number, root); This is a syntax error. 
             ERROR 4 =>  This cannot be used in this program, because it needs the <stdlib.h> library to work. 
                                      Without it, it will give a compile-time error. This is considered to be a logical error. 

  * 7) The output of this program is DEBUG

          Remember that A is 65 and Z is 90 in ASCII.
          Also remember that a is 97 and z is 122 in ASCII. 
  
            #include <stdio.h> 
            #include <stdlib.h>
            
            int main(void) { 
                char firstChar = 'A'; 
                char secondChar = 'U';
                printf("%c", firstChar + 3); // 65 + 3 = 68 = D
                firstChar += 4; // 65 + 4 = 69 = E
                printf("%c", firstChar); // E
                printf("%c", firstChar - 3); // 69 - 3 = 66 = B
                printf("%c", secondChar); // U
                firstChar++; // 69 + 1 = 70 = F
                firstChar++; // 70 + 1 = 71 = G
                printf("%c\n", firstChar); // G
                return (EXIT_SUCCESS);
            }

  * 8) Ouput for this program is below!
        
          #include <stdio.h>
          #include <stdlib.h>
         
           int main(void) 
           { 
             int i, j, k;
             for (i = 10; i <= 14; i = i + 2) // 10, 12, 14
                { 
                   for (j = 5; j > 0; j--) // 5, 4, 3, 2,1
                    { 
                         k = i + j; 
                         printf("%d ", k); 
                    } 
                }
             return (EXIT_SUCCESS);
           }
        
           The output for this program is 15 14 13 12 11 17 16 15 14 13 19 18 17 16 15

  * 9) I never went to the 2015 APS105 practical seminar, so I cannot answer these questions that are specific to that seminar class. 
  */
  
   // Solutions for questions 10 - 14
   
   // This is the solution for question 10: 
   
   /* 
      We have to write program that will prompt the user to input a character. 
      From there our program needs to determine if the character is upper case, lower case, special or a digit!
      Remember that in ASCII A is 65 and Z is 90.
      Remember that in ASCII a is 97 and z is 122.
      Remember that in ASCII 0 is 48 and 9 is 57. 
      Remember that any other character beside those stated above would be considered special characters!
      
      #include <stdlib.h>
      #include <stdio.h> 
      
      int main(void)
      {
          char character = '\0'; 
          printf("Enter a character: ");
          scanf(" %c", &character);
          if((int)character >= 65 && (int)character<= 90)
              printf("UPPER CASE.");
          else if((int)character >= 48 && (int)character <=57)
              printf("DIGIT.");
          else if((int)character >= 97 && (int)character <= 122)
              printf("LOWER CASE.");
          else
              printf("SPECIAL.");
      }

 */
 
  // This is solution to question 11: 
  
  /*
      We have to create a program that will reverse a given number (1234 would become 4321 when reversed).
      We would need to use the formula sum = sum * 10 + num; to get the reversed value of the given number. 
      This will be calculated via a while loop with the condition that the given number is not equal 0.  
    
       #include <stdio.h>
          
        int reverseDigits(int value)
        {
            int num = 0, sum = 0; 
            while(value != 0)
            {
                num = value % 10; 
                sum = sum * 10 + num; // 4321
                value /= 10; 
            }
            return sum; 
        }
          
        int main(void)
        {
            int value = 0, result = 0; 
            printf("Enter a number to be reversed: ");
            scanf("%d", &value);
            result = reverseDigits(value);
            printf("%d is the reverse of %d", value, result); 
        }

  */
  
  // This is the solution for question 12: 
  
  /*
    We want to create a program to calculate the arctan(x) without using the artan() function in the math.h library!
    For this, we will need a function to calculate the arctan. We will also need a for loop to loop through 0 to 301.
    These values are our loop starting and ending point. Moreover, these values increment by 2 each time. 
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    
    double artan(double x)
    {
      double sum = 0;
      int i = 0, sign = 1; 
      for(i = 1; i<=301; i+=2)
      {
         sum += (sign) * (pow(x,i)/i);  
         if(sign == 1)// Sign will alternate from 1 to -1 (initial sign value is 1). 
            sign = -1;
         else
            sign = 1; 
      }
      return sum; 
    }
    
    int main(void)
    {
      printf("%.10lf", (4*artan(1/5.0) - artan(1/239.0))*4);
    }

 */

 // This is the solution for question 13: 

 /*
   We have to write a program that will print a pattern of numbers in a certain manner. 
   We would need user to input value of index as well as a nested for loop for printing this pattern.
   
   #include <stdio.h> 
   #include <stdlib.h>
   
   int main(void)
   {
     int index = 0, i = 0, n = 9, j = 0; 
     printf("Enter index: ");
     scanf("%d", &index);
     for(i=0; i<=n; i++)
     {
        for(j=0; j<=n; j++)
        {
          printf("%c", '0' + (index + j + i) % 10); // remember '0' is 48 in ASCII so added to index of 3 with starting values of i and j being 0 gives us 51 (48+3) or C as our starting point.
        }
      }
    }

 */

 // This is the solution for question 14: 

 /* 
    We want to find all the occurences of the word NAN when the user inputs characters.
    We would need a do while loop for this and also some knowledge of basic swapping techniques.
    This mainly seen in the if statement in the code below. 
    Moreover, we would need to user char to store previous user inputs and compare them with the word NAN.
    The word NAN is seperated into characters. 
    
       #include <stdio.h>
       #include <stdlib.h>
       
       int main(void)
        {
           char input; 
           char endLoop = 'F';
           char firstChar = 'N', secondChar = 'A', thirdChar = 'N';
           char C1 = 0, C2 = 0, C3 = 0; 
           do
           {
             printf("Input Next Character: ");
             scanf(" %c", &input);
             if(input != endLoop)
             {
                 C1 = C2; // N
                 C2 = C3; // A
                 C3 = input; // N
             }
             if(C1 == firstChar && C2 == secondChar && C3 == thirdChar)
             {
                 printf("Pattern NAN found!\n"); 
             }
           } while(input != endLoop);
          printf("Done"); 
       }

 */
