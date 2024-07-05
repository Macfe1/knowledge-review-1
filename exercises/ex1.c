#include "main.h"

/**
 *
 *
 *
 */
int main (int argc, char argv[])
{
	char *operators[] = {"add, sub, div, mul"};
	int i = 0, j = 0;

	for (i = 0; operators[i] != '\0'; i++)
	{
		if (argv[1] == operators[i])
		{
			
		}
	}
		
}
/** Carlos answer
int i = 0, result = 0;
int *nums = malloc((argc - 2) *  sizeof(int));

	if (!nums)
		return (1);

	while (argv[i] != NULL)
	{
		nums[i] = atoi(argv[i]);
		if (nums[i] == 0 && argv[i] != "0")
		{
			printf("ERROR: argument is not a number");
			return (1);
		}
		i++;
	}

	operation_t *operators = malloc(sizeof(operation_t));

	char *valid_operations[] = {"add", "sub", "mul", "div"};

	for (i = 0; i < 4; i++)
	{
		if(argv[1] == "add")
			result = operators->add(argv[2], ...);
	}

	printf("Answer: %d\n", result);
	return (0);
}**/
