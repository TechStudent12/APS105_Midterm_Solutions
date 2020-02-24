 /* Solution Author: Sword Lord of the Lonely Peak
  * Date: 2020/02/22
  * Midterm 2011 - APS105
  * Solutions to question 1 to 10: 
  * 1) bool myBool = (myInt % 2 == 0);
  * 2) const double PHI = ((sqrt(5) - 1) / (2));
  * 3) 
            Remember associtivity of arithmetic operators in C goes from LEFT to RIGHT!
            
            double a = 23.0, b = 20.0, c = 15.0, d = 8.0, e = 40.0;
            (int) (a + b / (c - 5.0)) / ((d + 7.0) / (e - 37.0) / 2.0)
             
             Now this becomes: 
             
            (int) ((a + b / 10.0) / ((15.0) / (3.0) / (2.0)))
            (int) ((23 + 2) / (15.0 / (3.0) / (2.0)))
            (int) ((25.0) / (2.5))
            (int) ((10))
            (10) <= This is our ANSWER!
             
            Test this out through this: 
            
              #include <stdio.h> 
  
              int main()
              {
                int result = 0; 
                double a = 23.0, b = 20.0, c = 15.0, d = 8.0, e = 40.0;
                result = (int) (a + b / (c - 5.0)) / ((d + 7.0) / (e - 37.0) / 2.0);
                printf("%d", result);
              }

  * 4)  
           Question states that given the values of i = 5, j = 0 and k = false, find if these expression are true or false!
           
           ((i >= 3) && (j == (int) 0.0))                                  => True
           (((i != 3) || (j != 4)) == !((i == 3) && (j == 4))      =>  True
           !((i-4) <= 0 )                                                           =>  True
           (k && (sin(42.0) == 0.1372))                               =>   False

  * 5) int lotto = (rand() % (649-601+1))+601; // int lotto = (rand() % (UPPER-LOWER+1)) + LOWER;
  * 6) 
            Question states that given this program, what would be its output...
           
            According to ASCII table (you should these values by heart as they are most used!):
            We know that capital A is equal to 65 and Z is 90...
            We also know that lowercase a is equal 97 and z is 122...
            We also know that digit 0 is 48 and digit 9 is 57...
           
           int main (void) 
           { 
                int i; 
                for(i = 0; i < 5; i++) // 0,1,2,3,4
                    printf("%c", ’a’+i); 
                    //This will print the following values and their corresponding letters!
                    // 65 + 0 = 65 = A
                    // 65 + 1 = 66 = B
                    // 65 + 2 = 67 = C
                    // 65 + 3 = 68 = D
                    // 65 + 4 = 69 = E
                return 0;
            }
            
            Thus it will print this: ABCDE
  * 7)
            Question states what would be output from this program...
            
            #include <stdio.h>
             
            int main (void) 
            { 
                 int a = 1; 
                 int b = 2;
                 while (a <= 45) {
                    printf("%d\n", a);
                    a += b; 
                    b++; 
                 }
                 return 0;
             }
            
             This what would be outputed from the program in each iteration (only 'a' values will be outputted to the user): 
              a = 1, b = 3
              a = 3, b = 4
              a = 6, b = 5
              a = 10, b = 6
              a = 15, b = 7
              a = 21, b = 8
              a = 28, b = 9
              a = 36, b = 10
              a = 45, b = 11
        
  * 8)
            Question states to find the output of the given C program....
             
            #include <stdio.h>
            
            int main (void) 
            { 
              int row, col; 
              for (row = 1; row <= 5; row++)  // 1,2,3,4,5
              { 
                    for (col = 1; col <= 9; col++) // 1,2,3,4,5,6,7,8,9
                    { 
                        if ((col > row) && (col <= (9-row))) 
                            printf(" "); 
                        else 
                            printf("*"); 
                     } 
                 printf("\n"); 
                }
             return 0;
            }
            
            This program will print this pattern ( _ represents the spaces!): 
             
               *_______*        //  7 spaces
               **_____**        //  5 spaces
               ***___***        //  3 spaces
               ****_****        //  1 spaces
               *********        //  0 spaces

  * 9 - a) Solution: It will print 45 times!
  
                #include <stdio.h>
                
                int main(void)
                 {
                    int j = 0, i = 0, count = 0; 
                    for (i=0; i < 10; i++) // 0,1,2,3,4,5,6,7,8,9
                     {
                        for (j=0; j < 10; j++) // 0,1,2,3,4,5,6,7,8,9
                         {
                            if (i < j) 
                            {
                                printf("Chicken\n"); 
                                count++; // 9+8+7+6+5+4+3+2+1 = 45. 9 times printed in first iteration and 1 printed in the second last iteration. 
                            }
                        }
                    }
                    printf("%d", count); 
                }

  * 9 - B) Solution: 9801 times!
  
                #include <stdio.h>
                  
                int main(void)
                  {
                      int i = 0, count = 0; 
                      for (i=0; i >= 0; i++) 
                      {
                          for (i = 0; i < 100; i++) 
                          {
                              while (i != 0)
                               {
                                    printf("Chicken\n");
                                    count++; // 99 * 99 = 9801 times it will be printed!
                                }
                          }
                      }
                      printf("%d", count);
                  }

  */

  // Solutions for question 10 to 14 in code!

  // This is solution for question 10: 
  
  /*
       We have to write a program to find which of the two dates inputted by the user is earliest or the same as each other. 
       I used arrays to code this although you dont really need arrays to solve this problem. 
       It can be done without them by replacing every instance of the two arrays with two different int variables. 
    
         #include <stdio.h>
         #include <stdlib.h>
         #include <math.h>
         
         int main(void)
         {
             int arr[3] = {};
             int arr2[3] = {};
             int i = 0; 
             printf("Enter first date (day/month): ");
             scanf("%d/%d", &arr[0], &arr[1]); // We can enter the / in the scanf. This will not yield any errors or warning as this is legal in C!
             printf("Enter second date (day/month): ");
             scanf("%d/%d", &arr2[0], &arr2[1]);
             for(i = 0; i<3; i++)
             {
                 if(arr[1] < arr2[1] && (arr[0] < arr2[0] || arr[0] < arr2[0])){
                    printf("%d/%d is earlier than %d/%d", arr[0], arr[1], arr2[0], arr2[1]);
                    break;
                 }
                 if(arr2[1] < arr[1] && (arr2[0] > arr[0] || arr2[0] < arr[0])){
                    printf("%d/%d is earlier than %d/%d", arr2[0], arr2[1], arr[0], arr[1]);
                    break;
                 }
                 if(arr2[1] == arr[1] && arr2[0] == arr[0]){
                     printf("The two dates are the same.");
                     break;
                 }
             }
         }

  */ 
  
   // This is solution for question 11: 
   
   /* 
       We have to write a program that will ouput the largest positive number out of the user-inputted numbers!
       A while loop would be needed for this program as there is requirements regarding the inputs of the user. 
       Once, the user starts to enter numbers, we would need to store each of these numbers in an array.
       A counter needs to be use to keep track of the array index and its size. 
       Then, we will compare each number in the array to the initial largestNumber of the array which would be the number at index 0. 
       For this, we would need a for loop that uses our counter. After comparing and getting the value needed, we will print the largest number. 
    
        #include <stdio.h>
        
        int main(void)
        {
            int count = 0; 
            double largestNumber = 0; 
            double arr[100] = {}; 
            double n; 
            while(n != 0)
            {
                printf("Enter a number: ");
                scanf("%lf", &n);
                arr[count] = n; 
                count++;
            }
            int i = 0; 
            largestNumber = arr[0];
            for(i = 0; i<count; i++)
            {
                if(largestNumber < arr[i])
                    largestNumber = arr[i]; 
                else
                    continue; 
            }
            printf("The largest positive number entered was: %0.6lf", largestNumber);
        }

  */

   // This is the solution for question 12: 
   
   /* 
       We have to write a function called pythagoreanTriples that accepts a positive integer and prints out one triple (x,y,z).
       It needs to print this triple based on these requirements:
            (a) x2 + y2 = z2; 
            (b) y > 0 and y <= 100; 
            (c) y < z; 
            (d) x,y,z are all positive integers.
       If there is no triple sastifies these requirements, we would need to print out "No solution exists.". 
         
        #include <stdio.h>
        #include <stdlib.h>
        
        void pythagoreanTriples(int a)
        {
            int i = 0, j =0, isTrue = 0; 
            for(i = 1; i<=100; i++)
            {
                for(j = 1; j<=100; j++)
                {
                    if((a*a + j*j == i*i) && j < i)
                    {
                        isTrue = 1; 
                        printf("(%d, %d, %d)\n", a, j, i);
                        break;
                    }
                }
                if(isTrue == 1)
                    break; 
            }
            if(isTrue == 0)
                printf("No solution exists\n");
        }
        
        int main (void) 
        { 
            pythagoreanTriples(3); 
            pythagoreanTriples(12); 
            pythagoreanTriples(20); 
            pythagoreanTriples(49); 
            return 0; 
        }

  */

   // This is the solution for question 13: 
   
   /* 
       We have to create a function called rotate that will rotate 3 user inputted numbers. 
       Rotation must be done in this manner: 
            =>The first has original value of the third. 
            =>The second has the original value of the first. 
            =>The third has the original value of the second.
       For this we would just need a simple swapping technique that involves saving the values in temporary variables. 

            #include <stdio.h>
            #include <stdlib.h>
            
            void rotate(int *a, int *b, int *c)
            {
                int temp1, temp2, temp3; 
                
                // Saving the values of a, b, c in temporary variables so that we can swap them. 
                temp1 = *a;  
                temp2 = *b;
                temp3 = *c; 
                
                // Swapping the values of a, b and c according to the question's requirement. 
                *a = temp3; 
                *b = temp1; 
                *c = temp2; 
            }
            
            int main(void)
            {
                int a, b, c;
                printf("Please input three integers: ");
                scanf("%d %d %d", &a, &b, &c);
                rotate(&a, &b, &c);
                printf("After rotation, the lisy of integers is: %d %d %d", a, b, c);
            }

  */

   // This is solution for question 14: 
   
   /*
        We have to write a function called areAmicable that will check if two numbers are amicable or not. 
        To check this, we would need to add up all the divisors of number and then check if their sum equals to other number.
        We would need a for loop for adding up the sum of their individual divisors. 
        We also need this loop to see which number are divisors of the two given numbers (divisors cannot be the given number itself). 
    
           #include <stdio.h>
           #include <stdbool.h> 
           
           bool areAmicable (int m, int n)
           {
               int i = 0, sumM = 0, sumN = 0; 
               for(i = 1; i <= 1000; i++)
               {
                   if(m % i == 0 && i != m)
                       sumM += i; 
                    if(n % i == 0 && i != n)
                        sumN += i; 
               }
               if(sumM == n && sumN == m)
                   return true; 
                else
                    return false; 
                return false; 
           }
           
           int main(void)
           {
               int m, n; 
               printf("Enter two numbers: ");
               scanf("%d %d", &m, &n);
               if(areAmicable(m, n))
                   printf("These numbers are amicable!");
               else
                   printf("These numbers are not amicable!");
           }

   */ 
