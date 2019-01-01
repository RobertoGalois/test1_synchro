#include	<stdio.h>
#include	<stdlib.h>
#include	<stddef.h>

typedef struct	s_person
{
	char		*name;
	int			size;
}				t_person;

size_t	ft_strlen(char *str)
{
	size_t	ret;

	ret = 0;
	if (str != NULL)
	{
		while (*(str++) != '\0')
			ret++;
	}

	return (ret);
}

char	*ft_strdup(char *str)
{
	char	*ret = NULL;
	char	*init = NULL;

	if (str != NULL)
	{
		ret = (char *)(malloc((ft_strlen(str) + 1) * (sizeof (char))));
		init = ret;

		while ((*str) != '\0')
		{
			*ret = *str;
			ret++;
			str++;
		}

		*ret = '\0';
	}

	return (init);
}

void	show_person(t_person *person)
{
	printf("Name: %s\nsize: %d\n", person->name, person->size);
}

int		main(void)
{
	t_person	*p1 = NULL;
	
	p1 = (t_person *)(malloc(sizeof (t_person)));
	p1->name = ft_strdup("Jordan");
	p1->size = 36;
	show_person(p1);
	return (0);
}
