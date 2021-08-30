#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
            //THE HOOPLAH
    int input;
    printf("How many elements are we sorting?\n");
    scanf("%d", &input);
    int *array = malloc(input * sizeof(*array));

   for(int i = 1; i <= input; i++){
       scanf("%d", &array[i]);
   }

   for(int i = 1; i <= input; i++){
       printf("%d ", array[i]);
   }
   printf("\n\n");

            //THE ALGORITHM
    for(int i = 1; i <= input; i++){
        for(int i = 1; i <= input; i++){
            printf("%d ", array[i]);
        }
        printf("\n");
        for(int j = 1; j <= i; j++){
            int temp;
            int position = (j+1);

            if(array[j] >= array[position]){
                temp = array[position];
                array[position] = array[j];
                array[j] = temp;
            }
        }
    }

            //THE CHECK
    for(int i = 1; i <= input; i++){
       printf("%d ", array[i]);
   }
   return 0;
}