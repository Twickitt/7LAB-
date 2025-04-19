#include <stdio.h>
#include "Run_Sort.h"
#include "Selection_Sort.h"
#include "Quick_Sort.h"
#include "Heap_Sort.h"
#include "Print_Massive.h"


void Run_Sort(Student* arr, int n, int alg, int number){
    switch(alg){
        case 1: Selection_Sort(arr, n, number); break;
        case 2: Quick_Sort(arr, 0, n - 1, number); break;
        case 3: Heap_Sort(arr, n, number); break;
        default: printf("Invalid number\n"); return;
    }    
    printf("\nSorted List:\n");
    Print_Massive(arr, n);
}