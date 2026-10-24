#include <stdio.h>
int f(int a, int b) {
    int result=a+b;  
    return result; //´ò¶Ïµã 
}
int main(void) {
    int x = 1;
    int y = 2;
    int z = f(x, y);
    printf("%d",z);
    return 0;
}
