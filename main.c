#include <stdio.h>
 
const int first_array[] = {1, 2, 3, 4, 5};
const int second_array[] = {5, 4, 3, 2, 1};
 
int scalar(const int* first_arr, const int* second_arr, size_t length) {
    size_t i;
    int result = 0;
    for(i = 0; i < length; i++) {
        result += (first_arr[i] * second_arr[i]);
    }
    return result;
}
 
int is_prime(unsigned long n) {
    size_t i;
    if(n%2 == 0 && n != 2){
	return 0;
    }
    for(i = 3; i*i <= n ; i+=2) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
void print_array(const int* arr, size_t length) {
    size_t i;
    for(i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
 
 
int main(int argc, char** argv) {
    unsigned long n = 0;
    
    size_t first_len = sizeof(first_array) / sizeof(int);
    size_t second_len = sizeof(second_array) / sizeof(int);
    size_t length = first_len > second_len ? second_len : first_len;
    
    print_array(first_array, first_len);
    print_array(second_array, second_len);
    printf( "A scalar product of two vectors is: %d \n", scalar(first_array, second_array, length));
    printf("Input unsigned long for checking as prime: ");
    scanf("%lu", &n);
    if(is_prime(n)) {
        printf("Result: True\n");
    } else {
        printf("Result: False\n");
    }
    return 0;
}
