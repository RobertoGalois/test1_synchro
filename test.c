#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

typedef struct	s_person
{
	char		*name;
	int			size;
}				t_person;

void	show_person(t_person *person)
{
	printf("Name: %s\nsize: %d\n", person->name, person->size);
}

int		main(void)
{
	t_person	*p1;
	
	p1 = (t_person *)(malloc(sizeof (t_person)));
	p1->name = strdup("Jordan");
	p1->size = 36;
	show_person(p1);

	return (0);
}
