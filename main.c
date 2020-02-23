/* Solution Author: Miguel Nonaka
 * Date: 2020/02/22
 * Midterm 2017 - APS105
 * Solutions to questions 1 to 10:
 * 1) double y = sqrt((50.0) / (1.0-exp(((-1)*(x))/z))); 
 * 2) int remainderOfThree = (((a%10)+(b%10)+(c%10))/(3.0));  
 * 3) solutions for m values:
 *     m = c = 30
 *     m = -1
 *     m = b = 0
 *     m = c = 1
 * 4) if(a==b && c!=d && e==f) { printf("Are you kidding me????\n"); }
 * 5) 
 *      int main(int argc, char **argv)
        {
            double arr[19] =  {0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95}; 
            int randomIndex = rand() % 19; <= This is the ANSWER!
            double randomSelection = arr[randomIndex]; 
            printf("%0.2lf", randomSelection); 
            return 0;
        }
 * 6)  
         int a, b, c, d; 
         int *e, *f;
         a = 5; 
         b = 6;
         e = &c; // e = c
         f = &d; // f = d
       *e = a + b; // e = c = 11
       *f = *e + b; // f = d = 17
         e = &a; // e is now equal to a 
         f = &b; // f is now equal to d
       *e = c + d; // e = 11 + 17 = 28. Remember e points to the address of a, which is no longer 5, but 28. 
       *f = a + b;  // f = 5 + 6 = 11. Remember a is now 28 and not 5, because of the previous statement. 
       
        Thus, the answer is a = 28  and b = 34
 
 * 7) Only one combination would not print success: a = true, b = false and c = false. 
 * 8 - a) Solution: 
         
         int main(void){
         int i = 0; 
         int n  = 10; // Example value!
         while(i < n){ 
            printSomething(i); 
            i++; }
        }
          
 * 8 - b) Solution:
            
         int main(void){
         int i  = 10; // Example value!
         printSomething(i)
         while(i >=0){ 
            i = printSomething(i); 
            }
        }

 * 9) Never been to the 2017 Practical, so I do not know how to answer these questions!
 * 10 - a) 
        
        #include <stdio.h> 
        #include <stdbool.h>
        
        bool whichBiggerAndByHowMuch(int a, int b, int *result){
            if(a>=b)
            {
               *result = a - b; 
                return true; 
            }
            else
            {
               *result = b-a;
                return false; 
            }
        }

 * 10 - b)
 
            int main(void){
                int a, b, result; 
                printf("Enter first and second number: ");
                scanf("%d %d", &a, &b); 
                if(whichBiggerAndByHowMuch(a,b,&result))
                    printf("First number is bigger by %d", result); 
                else
                    printf("Second number is bigger by %d", result); 
            }
 */ 
 
 //Solution for question 11 to 14 in code!
 //This is solution question 11!
 
 /*
    We want to print this!
     
    @@@@@@
    @@           @  
    @    @       @
    @        @   @
    @           @@ 
    @@@@@@
     
    We need to print this for any value of n, in which n is the dimension of our square!
     
    #include <stdio.h>
    #include <stdlib.h>

    int main(void)
    {
        int n = 0, i = 0, j = 0; 
        printf("Enter n: ");
        scanf("%d", &n);
        for(i = 1; i <=n; i++)
        {
            for(j = 1; j<=n; j++)
            {
                if(j==1 || i==1 || i ==n|| j ==n || j == i) // If you want to have cross just add "j == (n-i+1)" to the if statement preceded by ||. 
                    printf("@");
                else
                    printf(" "); 
            }
            printf("\n");
        }
    }
 */

//This is solution for question 12:

/*
    We have to calculate the first ten terms of the mcLaurin Series, given the equation in the question!
    To simplify this program, we would need to use recursion for the factorial, as seen in the factorial function. 

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    double factorial(double i)
    {
        if(i >= 1)
            return i*factorial(i-1);
        else
            return 1;
    }

    int main(void)
    {
        double x = 0, result = 0;
        printf("Enter a value: ");
        scanf("%lf", &x);
        int i = 0, temp = 1; 
        for (i = 1; i<=10; i+=2)
        {   
            temp = temp * (-1)* (pow(x,i) / factorial(i));
        }
        printf("result: %0.6lf", result);
    }
 */
 
 //This is solution for question 13:
 
 /* 
      We have to find the first occurence of ECE in an user-inputted string! 
      You have to understand the difference between strstr and strcmp
       In short, strstr is used to compare two string to find the first occurence of the second in the first string.
            => strstr(s1,s2); // It will return NULL if it finds no occurence! 
       In the other hand, strcmp is used to compare two string to see if they are identical. 
       That means if the first character of both string is not same it would not continue to look at the second character.
            => strcmp(s1,s2); // It will return 0 if it finds that both strings are not identical!
        Thus, for this program, it is better and recommended to use strstr if you are not allowed to use arrays!
      
     #include <stdio.h>
     #include <stdlib.h>
     #include <string.h>
     
     int main(void)
     {
         char sentence[1000] = "";
         printf("Please enter a sentence: ");
         fgets(sentence, 1000, stdin);
         if (*sentence != '\0') // We know that fgets puts a \0 character in the string. In order to use strtstr properly, we need to remove this \0 character. 
            sentence[strlen(sentence) - 1] = '\0';
         if(strstr(sentence, "ECE") != NULL)
            printf("Found ECE!");
        else
            printf("ECE not found!");
    }
 */
 
 //This is the solution for question 14: 
 
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 
 int main(void)
 {
     int counter = 0, temp = 0;
     int arr[10] = {}; 
     int arr2[10] = {};
     int n, j, jj, r;
     while(counter < 10 && n != 0)
     {
         printf("Enter a value (0 to stop): ");
         scanf("%d", &n);
         if(n != 0){
            arr[counter] = n; 
            arr2[counter] = n; 
            counter++;
         }
     }
     printf("There are a total of %d numbers.", counter); 
     for(j = 0; j < counter; j++)
     {
         for(jj = j+1; jj < counter; jj++)
         {
             if(arr[j] > arr[jj])
             {
                 temp = arr[j];
                 arr[j] = arr[jj];
                 arr[jj] = temp; 
             }
         }
     }
     int isTrue = 0; 
     int l = 0;
     for(l = 0; l < counter; l++)
     {
        if(arr[l] == arr2[l]){
            isTrue = 1;
            break; 
        }
        else{
            isTrue = 0; 
            break; 
        }
     } 
    printf("\nThe values you entered are: ");
    for(r = 0; r < counter; r++)
     {
        printf("%d ", arr2[r]);
     } 
     if(isTrue == 1)
         printf("\nThe values are in ascending order");
     else
         printf("\nThe values are not in ascending order");
 }




