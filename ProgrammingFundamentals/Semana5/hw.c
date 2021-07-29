/*
    Given the attached file listing elephant seal weights (elephant_seal_data), 
    read them into an array and compute the average weight for the set of the elephant seals.

    Vanessa Jaime 

    26/07/2021

*/

#include <stdio.h>
#include<stdlib.h>

int main (void)
{
    
    int size = 0, letters = 0;
    char buffer;

    int i = 0;
    int temp = 0; 
    
    int weights[size+2] ;
    
    double sum = 0;
    
    

    while((buffer = getchar()) != EOF)
    {
        char *temp2  = &buffer;

        //printf("%c", buffer);

        if(buffer >= '0' && buffer<= '9' ) //whenever is a number
        {
            //printf("%c", buffer);  //to check when does it enter the if statement
            if(letters == 3)    //to count the 4 digits
            {
                letters = 0;
                size++;    //increments the size
                temp += atoi(temp2);
                //printf("\n%d\n\n", temp);
                //weights[i] =  0;
                weights[i] =  temp;
                //printf("\ni = %d\n",i);
                //printf("\n%d\n\n", weights[i]);
                
                i++;
            
            }
            else              //if is not the 4th digit
            {
                
                if(letters == 0)
                    temp = atoi(temp2)*1000;
                else if (letters == 1)
                    temp += atoi(temp2)*100;
                else if (letters == 2)
                    temp += atoi(temp2)*10;
                letters++;
                
                
            }
            
        }
        
        
           

    }
    
    //printf("\n%d\n\n", size);
   /* printf("\n%d\n\n", weights[0]);
    printf("\n%d\n\n", weights[1]);
    printf("\n%d\n\n", weights[2]);*/

    
    
   for(int k = 0; k<size-2; k++)
   {
       sum = sum + weights[k];
       //printf("\n%d\n\n", k);
       //printf("\n%d\n\n", weights[k]);

   }
        

    printf("\n%f\n\n", sum);
    
    
    printf("My average is: %lf\n\n", sum/size);
    
    return 0;
}