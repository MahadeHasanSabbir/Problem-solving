//problem link:https://www.beecrowd.com.br/judge/en/problems/view/1011
//problem name: Sphere
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    int R;
    scanf("%d", &R);
    double V = (12.56636 * R * R * R)/3.0;
    printf("VOLUME = %0.3lf\n", V);
    
    return 0;
}
