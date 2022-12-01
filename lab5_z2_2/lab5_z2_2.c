#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	const int i, Low = -100, High = 100;
	int s, k, r = 0, num = 1, a['i'];
	srand(time(0));


	printf_s("insert massive length: ");
	scanf_s("%d", &i);


	for (s = 0; s < i; s++) {	
		
		a[s] = Low + rand() % High;

	}

	printf_s("{");
	for (k = 0; k < i; k++) {
		printf_s("%d,", a[k]);
	}
	printf_s("}\n");


	for (k = 0; k < i; k++) {
		if (a[k] == 0) {
			r++;
		}
	}

	int max = 0, max_ind = 0, p = 0, plural = 1;
	while (p < i)
	{

		if (abs(a[p]) > max)
		{
			max = a[p];
			max_ind = p;
		}
		p++;
	}


	for (k = max_ind + 1; k < i; k++) {
		plural *= a[k];
	}

	printf_s("amount of 0 in array = %d\n", r);
	printf_s("plural array = %d", plural);


}
