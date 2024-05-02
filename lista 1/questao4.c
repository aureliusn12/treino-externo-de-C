#include <stdio.h>

int main() {

int a, b, c, d;

int ab, ac, ad, bc, bd, cd; 

printf("Digite quatro números inteiros:\n");

scanf("%d %d %d %d", &a, &b, &c, &d);

ab = a + b;
ac = a + c;
ad = a + d;
bc = b + c;
bd = b + d;
cd = c + d;

printf("Resultados:\n");
printf("%d + %d = %d\n", a, b, ab);
printf("%d + %d = %d\n", a, c, ac);
printf("%d + %d = %d\n", a, d, ad);
printf("%d + %d = %d\n", b, c, bc);
printf("%d + %d = %d\n", b, d, bd);
printf("%d + %d = %d\n", c, d, cd);
printf("%d x %d = %d\n", a, b, a*b);
printf("%d x %d = %d\n", a, c, a*c);
printf("%d x %d = %d\n", a, d, a*d);
printf("%d x %d = %d\n", b, c, b*c);
printf("%d x %d = %d\n", b, d, b*d);
printf("%d x %d = %d\n", c, d, c*d);
}
