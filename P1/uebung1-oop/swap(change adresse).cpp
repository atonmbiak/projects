
#include <stdio.h>

void change (int *&pi, int *&pj);

int main()
{
	int i=2; int j=5;
	int *pi; int *pj;
	pi =&i; pj =&j;
	printf("vorher waren die Werte: pi=%d, pj=%d\n", pi, pj);
	change (pi, pj);
	printf("Dann: pi=%p, pj=%d\n", pi, pj);
	return 0;
}
void change (int *&pi, int *&pj)
{
	int *ppi;
	ppi = pi;
	pi = pj;
	pj = ppi;
}
