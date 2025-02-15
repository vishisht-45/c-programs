#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n;
    
    
    scanf("%d",&n);
    
    float bill = 0.0;
    
    if(n<0 || n>1000000) {
        printf("Invalid Input!");
        return 0;
    }
    
    else if(n>=0 && n<=100) {
             bill =n*5;
        }
        
    else if (n>100 && n<=300) {
            bill =  (100 * 5) +(n - 100)*7;
        }
        
    else {
            bill = 100 * 5 + 200 * 7 + (n - 300) * 10;
        }
    
    if(bill>0 && bill <=1200) {
            
            bill = bill * 0.9;
            
            
        }
    
    printf("The electricity bill is: %.2f.",bill);
        
    
        
    
    
    
    return 0;
}