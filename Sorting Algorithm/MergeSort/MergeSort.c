#include <stdio.h>
#include <string.h>
#include <stdlib.h>

            //THE ALGORITHM
int * sort(int array[], int size, int start){
    for(int i = start; i <= size; i++){

        for(int i = start; i <= size; i++){
            printf("%d ", array[i]);
        }
        printf("\n");

        for(int j = i; j > 1; j--){
            int temp;
            int position = (j-1);

            if(array[j] <= array[position] && position != 0){
                temp = array[position];
                array[position] = array[j];
                array[j] = temp;
            }
        }
    }
    return array;
}

int main() {
            //THE HOOPLAH
    int input;
    printf("How many elements are we sorting?\n");
    scanf("%d", &input);
    int* array = (int*) malloc(input * sizeof(int));

   for(int i = 1; i <= input; i++){
       scanf("%d", &array[i]);
   }

   for(int i = 1; i <= input; i++){
       printf("%d ", array[i]);
   }
   printf("\n\n");

            //THE INITIALIZATION
    
    int half = (input/2);

    int remainder = (input - half);

    int next = ((input/2)+1);

    int* firstarray =(int*) malloc(half * sizeof(int));
    int* secondarray = (int*) malloc(remainder * sizeof(int));

    for(int i = 1; i <= half; i++){
        firstarray[i] = array[i];
    }

    for(int j = next; j <= input; j++){
        secondarray[j] = array[j];
    }

    firstarray = sort(firstarray, half, 1);
    secondarray = sort(secondarray, input, next);

    // for(int i = 1; i <= half; i++){

    //     for(int i = 1; i <= half; i++){
    //         printf("%d ", firstarray[i]);
    //     }
    //     printf("\n");

    //     for(int j = i; j <= half; j++){
    //         int temp;
    //         int position = (j-1);

    //         if(firstarray[j] <= firstarray[position]){
    //             temp = firstarray[position];
    //             firstarray[position] = firstarray[j];
    //             firstarray[j] = temp;
    //         }
    //     }
    // }

    // for(int i = next; i <= input; i++){

    //     for(int i = next; i <= input; i++){
    //         printf("%d ", secondarray[i]);
    //     }
    //     printf("\n");

    //     for(int j = i; j <= input; j++){
    //         int temp;
    //         int position = (j-1);

    //         if(secondarray[j] <= secondarray[position]){
    //             temp = secondarray[position];
    //             secondarray[position] = secondarray[j];
    //             secondarray[j] = temp;
    //         }
    //     }
    // }

            //THE CHECK
    printf("FIRST ARRAY\n");
    for(int i = 1; i <= half; i++){
        printf("%d ", firstarray[i]);
    }
    printf("\n");
    printf("SECOND ARRAY\n");
    for(int i = next; i <= input; i++){
        printf("%d ", secondarray[i]);
    }
    printf("\n");
   return 0;
}