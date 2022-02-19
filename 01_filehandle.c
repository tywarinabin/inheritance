#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
char read = fgetc(ptr);
printf("The characters are %c", read);
    fclose(ptr);
    return 0;
}