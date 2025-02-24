#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    
    if(a<1 || a>1000000 && c<1 || c>1000000 && b<1 || b>1000000 ) {
         printf("Invalid");
         return 0;
     }
    
    else if(a+b<=c || a+c <= b || b+c <= a) {
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape. ");
     }
    
    else if(a==b && a==c ) {
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.\n");
     }
    
    else if(a==b || a==c || b==c) {
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
     }
    
    else if(a!=b && a!=c && b!=c) {
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");
     }
    
    else {
        printf("Lengths: [%d, %d, %d]\n\n",a,b,c);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
     }
    
    
    
    
    
    return 0;
}