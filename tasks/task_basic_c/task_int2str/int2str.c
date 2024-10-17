#include "int2str.h"
#include "stdio.h"
#include "stdbool.h" 
 
char result[12] = ""; 
 
bool sign(int n) { 
    return (n < 0); 
} 
 
char* int2str(int number){ 
 
    char* resultl = result; 

    if (number == 2147483647) {
        return "2147483647";
    } 

    if (number == -2147483648) {
        return "-2147483648";
    } 

    if (sign(number)) { 
        *resultl++ = '-'; 
        number *= -1; 
    } 
 
    int shifter = number; 
 
    do { 
        ++resultl; 
        shifter /= 10; 
    }while(shifter); 
 
    *resultl = '\0'; 
 
    do {  
        *--resultl = number % 10 + '0';  
        number /= 10; 
    }while(number); 
 
    return result; 
}
