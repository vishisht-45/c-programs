#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    scanf("%d",&n);
    
    if(n<1 || n>1000000) {
        printf("The verdict for the number %d is: INVALID",n);
    }
    
    else if(n>10 && n%2==0) {
        if(n>15 && n%3==0 && n%7==0) {
            printf("The verdict for the number %d is: SUPERNATURAL",n);
        }
        else if(n>15 && n%3==0) {
            printf("The verdict for the number %d is: MIRACULOUS",n);
        }
        
        else if(n%7==0) {
            printf("The verdict for the number %d is: MIRACULOUS",n);
        }
        
        
        else{
           printf("The verdict for the number %d is: MAGICAL",n); 
        }
        
    }
    
    else if(n>15 && n%3==0) {
        if(n%7==0) {
            printf("The verdict for the number %d is: MIRACULOUS",n);
        }
        else{
           printf("The verdict for the number %d is: MAGICAL",n); 
        }
        
    }
    
    else if(n%7==0) {
           printf("The verdict for the number %d is: MAGICAL",n);  
    }
    
    else{
        printf("The verdict for the number %d is: NORMAL",n);
    }
    
    
    
    
    return 0;
}
