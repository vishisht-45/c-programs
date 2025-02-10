#include <stdio.h>

int main() {  
    
    float income,tax;
    
    scanf("%f",&income);
    
    if (income < 0 || income > 10000000) {
        printf("INVALID");  
    } 
    
    else if(income<=250000 && income>=0) {
        tax = 0;
        printf("%.2f",tax);
    }
    
    else if(income<=500000) {
        tax= (income - 250000)*0.05; 
        printf("%.2f",tax);
        
    }
    
    else if(income<=1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;

        printf("%.2f",tax);
        
    }
    
    else if(income>1000000) {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
        printf("%.2f",tax);
        
    }
    
    else{
        printf("INVALID");
    }
    
    return 0;
}