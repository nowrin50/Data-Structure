#include<stdio.h>
#include<math.h>

int main () {
    
    double a,b,c,d, x1,x2, x ;
    
    printf ("enter the value of a:") ;
    scanf ("%lf", &a);
    
    printf ("enter the value of b:");
    scanf ("%lf", &b);
    
    printf ("enter the value of c:");
    scanf ("%lf", &c); 
    
    d = (b*b)- (4 *a*c);
    
    if (d>0) {
        
        x1 = (-b -sqrt (d))/ (2*a) ;
        x2 = (-b + sqrt (d))/ (2*a) ;
        
        printf ("x1:%.2lf\n", x1);
        printf ("x2: %.2lf\n", x2);
    }
    
    else if (d==0) {
        
        x = -b / (2*a) ;
        printf ("solution: %2lf\n", x) ;
    }
    else {
        printf ("no solution");
    }
    return 0; 
}
