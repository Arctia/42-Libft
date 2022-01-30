
#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	void	*ptr;

	ptr = malloc(nmem * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (nmem * size));
	return (ptr);
}
