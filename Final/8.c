#include <stdio.h>
struct point { int x; int y; };
struct rectangle { struct point tl; struct point br;};

int main() {
	struct rectangle rect;

	printf("Enter x, y of top left.\n");
	scanf("%d %d", &rect.tl.x, &rect.tl.y);
	printf("Enter x, y of bottom right.\n");
	scanf("%d %d", &rect.br.x, &rect.br.y);
	printf("The area of the rectangle is %d.\n", (rect.br.x - rect.tl.x) * (rect.br.y - rect.tl.y));

	return 0;
}