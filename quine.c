#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *i=fopen("quine.c","rb"), *o=fopen("quine-out.c","wb");
    fseek(i,0,2);long m=ftell(i);fseek(i,0,0);void *b=malloc(m);
    fread(b,m,1,i);fwrite(b,1,m,o);fclose(o);fclose(i);return 0;
}