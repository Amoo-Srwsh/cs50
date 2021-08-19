#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 9

typedef struct candid
{
	string name;
	int vote;

} candid;

candid candidates[MAX];
int candida_count;

bool valid (string name)
{
	for (int i = 0; i < candida_count; i++)
	{
		if (strcmp(name, candidates[i].name) == 0)
		{
			candidates[i].vote++;
			return 1;
		}
	}

	return 0;
}

void print_winer (void)
{
	int user = candidates[0].vote;
	string name = candidates[0].name;

	for (int i = 0; i < candida_count; i++)
	{
		if (user < candidates[i].vote)
		{
			name = candidates[i].name;
		}
	}
	printf("%s\n", name);
}


int main (int argc, string argv[])
{
	if (argc < 2)
	{
		printf("Error");
		return 1;
	}

	candida_count = argc - 1;
	if (candida_count > MAX)
	{
		printf("Maximum number of candida is %i\n", MAX);
		return 2;
	}
	for (int i = 0; i < candida_count; i++)
	{
		candidates[i].name = argv[i + 1];
		candidates[i].vote = 0;
	}

	int voiter_count = get_int("Number of voters: ");

	for (int i = 0; i < voiter_count; i++)
	{
		string name = get_string("");

		//check valid name
		if (!valid(name))
		{
			printf("invalid vote. \n");
		}
	}

	print_winer();

	return 0;
}