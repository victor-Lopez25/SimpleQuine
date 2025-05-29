#include <stdio.h>
int main() {
char *code[] = {
"#include <stdio.h>",
"int main() {",
"char *code[] = {",
"};",
"for(int i=0;i<3;i++)puts(code[i]);",
"for(int i=0;i<sizeof(code)/sizeof(code[0]);i++) {",
"putchar(34);fputs(code[i], stdout);putchar(34);putchar(44);putchar(10);",
"}",
"for(int i=3;i<sizeof(code)/sizeof(code[0]);i++)puts(code[i]);",
"}"
};
for(int i=0;i<3;i++)puts(code[i]);
for(int i=0;i<sizeof(code)/sizeof(code[0]);i++) {
putchar(34);fputs(code[i], stdout);putchar(34);putchar(44);putchar(10);
}
for(int i=3;i<sizeof(code)/sizeof(code[0]);i++)puts(code[i]);
}