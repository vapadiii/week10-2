#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	int x;

	printf("input number : ");
	scanf("%d", &number);

	//printf("1 is'n prime\n");
	if (number > 1) {
		int n = 2;
		while (n <= number) {
			x = 0;
			int i = 2;
			while (i <= n) {
				//printf("%d ,%d = %d\n", n,i,n%i);

				if (n % i == 0 && i != n) {
					x = 1;
				}
				i++;
			}

			if (x == 1) {
				//printf("%d is'n prime\n", n);
			}
			else {
				printf("%d is prime number\n", n);
			}
			n++;
		}
	}
	else {
		//printf("%d is'n prime\n", number);
	}
	return 0;
}
