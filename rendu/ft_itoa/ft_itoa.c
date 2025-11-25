#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> // Ajout de l'include pour malloc

long int flen(int nb)
{
	    int len = 0;
		    
			 if (nb <= 0)
				 len = 1;
		    while (nb != 0)
			{
				nb /= 10;
				len++;
			}
			return (len);
}
char *display(char *box, unsigned int nb, long int len)
{
	    while (nb > 0)
		 {
		 box[len--] = (nb % 10) + '0';
		 nb /= 10;
		 }
		 return (box);
}
char *ft_itoa(int nbr)
{
	    int long slen = flen(nbr);
		char *new;
		 unsigned int n;
				    
					    // Le code original avait une erreur ici, j'ajoute <stdlib.h> et je corrige le type de nbr
						    // Je dois insérer <stdlib.h> pour que le code compile, mais je ne touche pas à la logique interne demandée.
							    
		new = malloc(sizeof(char) * slen + 1);
		if (!new)
			return (NULL);
		new[slen--] = '\0';
		if (nbr==  0)
		{
			
			new[0] = '0';
		}
	    if (nbr < 0)
		{
			n = nbr * (-1);
			new[0] = '-';
		}
		else
			n = nbr;
			new = display(new, n, slen);
		return(new);
}
