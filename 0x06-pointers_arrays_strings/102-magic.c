#include <stdio.h>

int main(void)
{
	int a[] = {5, 12, 98, -3, 6};
	int *p = &a[1];
    /* Your code goes here */
	printf("a[2] = %d\n", *(p + 1));
	return (0);
}
