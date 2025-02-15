#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int h,t;
    float c;
    int grade = 0;
    
    scanf("%d",&h);
    scanf("%f",&c);
    scanf("%d",&t);
    
    if(h<0 || h>500 && c<0.0 || c>1.0 && t<0 || t>50000) {
        return 0;
    }
    
    else if(h>50 && c<0.7 && t>5600) {
        grade = 10;
        printf("The grade of the steel is: %d\n",grade);
        printf("All of the conditions met.");
    }
    
    else if(h>50 && c<0.7) {
        grade = 9;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.");
    }
    
    else if(c<0.7 && t>5600) {
        grade = 8;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.");
    }
    
    else if(h>50 && t>5600) {
        grade = 7;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.");
    }
    
    else if(h>50 || c<0.7 || t>5600) {
        grade = 6;
        printf("The grade of the steel is: %d\n",grade);
        printf("Only one condition met.");
    }
    else{
        
        grade = 5;
        printf("The grade of the steel is: %d\n",grade);
        printf("None of the conditions met.");
        
    }
    
    return 0;
}