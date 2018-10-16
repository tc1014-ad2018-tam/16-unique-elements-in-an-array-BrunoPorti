//Bruno Portilla Hinojosa
//ITESM

#include <stdio.h>
//asigno las variables
int main() {
    int n = 0;
    int num = 0;
    int con;

//le digo al usuario para que sirve el programa, y le pregunto cuantos numeos insertara
    printf("in this program you will input numbers and i will tell you how many numbers aren't duplicates.\n How many numbers will you input?\n");
    scanf("%d", &n);

    int unique[n];
    int array[n];

    for (int i = 0; i < n; i++) { //pido los numeros
        printf("insert numbers one by one:\n");
        scanf("%d", &unique[n]);
    }
// comparo para ver si los valores se repiten y asi saco cuales son los unicos.
    for (int i = 0; i < n; i++) {
        con = 1;
        for (int j = i + 1; j < n; j++) {
            if (unique[i] == unique[j]) {
                con++;
                array[j] = 0;
            }
        }
        if (array[i] != 0) {
            array[i] = con;
        }
    }

    for (i = 0; i < n; i++) {
        if (array[i] == 1) {
            printf("The unique numbers are: %i \n", unique);
        }
    }
    return 0;
}