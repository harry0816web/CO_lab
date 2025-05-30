#include <stdio.h>

#define T 999

extern void asm_dp(int *arr, int t, int *arr2);

void dp(int *arr, int t, int *dp_array){
    // this is the dp code written in c 
    
    for(int i=1; i<t+1; i++){
        for(int j=0; j<6; j++){
            if( i - *(arr + (j*2)) < 0){
                continue;
            }
            
            if( dp_array[i] < dp_array[i - *(arr + (j*2))] + *(arr + (j*2) + 1) ){
                dp_array[i] = dp_array[i - *(arr + (j*2))] + *(arr + (j*2) + 1);
            }
        }    
    }
}

int main(void)
{
    int charge[10][2] = {{24, 47}, {3, 26}, {12, 67}, {45, 45}, {32, 90}, {21, 82}, {45, 19}, {19, 51}, {31, 37}, {3, 75}};

    int dp_arr[T+1] = {0};
    
    int dp_arr_2[T+1] = {0};
    
    dp(&charge[0][0], T, dp_arr);
    
    asm_dp(&charge[0][0], T, dp_arr_2);
    
    // you can check whether the answer of c and assembly are the same
    printf("Result of C code: %d, Result of assembly code: %d\n", dp_arr[T], dp_arr_2[T]);
    
    return 0;
}