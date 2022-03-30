
#include <stdio.h>
#include <stdlib.h>
#include "../src/guard.h"
#include <stdint.h>

where char *
_is_hot(int temperature)
{
	_case(temperature <= 10, "It's too cold!");
	_case(temperature <= 20, "This is perfect.");
	_default("Its too hot!");
}

void
is_hot(int * temperature)
{
	if(temperature == NULL)
	{
		printf("NULL");		
		return;
	}	

	printf("%s\n", _is_hot(*temperature));
}


uint64_t 
faktorial(uint32_t n)
{
    _case(n > 1, n * faktorial(n-1));
    _default(1);
}


int 
main(void)
{
    printf("%ld\n", faktorial(5));

	printf("Hello, World\n");
	
	int temperature;
	printf("Enter temperature: ");
	scanf("%d", &temperature);
	is_hot(&temperature);

	return EXIT_SUCCESS;
}
