#include <stdio.h>
int	 main(){
	printf("Ex de x");
	int x;

	x = 1;
	printf("%d ", x++);
	printf("%d ", x++);
	printf("%d ", x++);

	printf("\n\nEx de y");
	int y;

	y = 1;
	printf("%d ", ++y);
	printf("%d ", ++y);
	printf("%d ", ++y);

	printf("\n\nEx de a/b");
	int a;
	int b;

	a = 1;
	b = 1;
	if (++a == b++)
		printf("Errei");
	if (++a != b++)
		printf("Funciona");
}
