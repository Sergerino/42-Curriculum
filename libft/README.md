# **Libft Functions** - ***Base Cased Descriptions Below***

### Functions from `<ctype.h>`

- [*`ft_isalpha`*](ft_isalpha.c)	- checks  for  an  alphabetic  character.
  - `Single character check`
  - `Consider case sensitivity`
  - `Define ASCII range handling`
  - `Return value (1 for true, 0 for false)`
<br>

- [*`ft_isdigit`*](ft_isdigit.c)	- checks for a digit (0 through 9).
  - `Single character check`
  - `Check for digit (0-9)`
  - `Define ASCII range handling`
  - `Return value (1 for true, 0 for false)`
<br>

- [*`ft_isalnum`*](ft_isalnum.c)	- checks for an alphanumeric character.
  - `Single character check`
  - `Check for alphanumeric (letter or digit)`
  - `Define ASCII range handling`
  - `Return value (1 for true, 0 for false)`
<br>

- [*`ft_isascii`*](ft_isascii.c)	- checks ASCII character set.
  - `Single character check`
  - `Ensure character within ASCII range`
  - `Return value (1 for true, 0 for false)`
<br>

- [*`ft_isprint`*](ft_isprint.c)	- checks for any printable character.
  - `Single character check`
  - `Check if printable (visible) character`
  - `Define ASCII character range handling`
  - `Return value (1 for true, 0 for false)`
<br>

- [*`ft_toupper`*](ft_toupper.c)	- convert char to uppercase.
  - `Single character check`
  - `Convert to uppercase if alphabetic`
  - `Define ASCII character range handling`
  - `Return value (1 for true, 0 for false)`
<br>

- [*`ft_tolower`*](ft_tolower.c)	- convert char to lowercase.
  - `Single character check`
  - `Convert to lowercase if alphabetic`
  - `Define ASCII character range handling`
  - `Return value (1 for true, 0 for false)`
<h1></h1>


### Functions from `<string.h>`

- [*`ft_memset`*](ft_memset.c)	- fill memory with a constant byte.
  - `Validate memory pointer and size`
  - `Single-byte value to fill with`
  - `Fill memory with the specified byte`
<br>

- [*`ft_strlen`*](ft_strlen.c)	- calculate the length of a string.
  - `Validate the input string`
  - `Initialize a counter to iterate through each char in string till null terminator`
  - `Increment the counter for each character`
  - `Return the counter as the string length`
<br>

- [*`ft_bzero`*](ft_bzero.c)	- zero a byte string.
  - `Validate memory pointer and size`
  - `Set memory bytes to zero (0)`
  - `Clear the specified memory block`
<br>

- [*`ft_memcpy`*](ft_memcpy.c)	- copy memory area.
  - `Validate source and destination pointers`
  - `Specify the number of bytes to copy`
  - `Copy data from the source to the destination`
  - `Return the destination pointer`
<br>

- [*`ft_memmove`*](ft_memmove.c)	- copy memory area.
  - `Validate source and destination pointers`
  - `Specify the number of bytes to copy`
  - `Copy data from the source to the destination`
  - `Handling overlap when copying data`
  - `Return the destination pointer`
<br>

- [*`ft_strlcpy`*](ft_strlcpy.c)	- copy string to an specific size.
  - `Validate source and destination pointers`
  - `Specify the size of the destination buffer`
  - `Copy the source string to the destination with size limitation`
  - `Ensure null-termination of the destination string`
  - `Return the total length of the source string (i.e., the length it would have been without the size limitation)`
<br>

- [*`ft_strlcat`*](ft_strlcat.c)	- concatenate string to an specific size.
  - `Validate source and destination pointers`
  - `Validate source and destination pointers`
  - `Specify the size of the destination buffer`
  - `Append the source string to the destination with size limitation`
  - `Ensure null-termination of the destination string`
  - `Return the total length of the concatenated string (i.e., the length it would have been without the size limitation)`
<br>

- [*`ft_strchr`*](ft_strchr.c)	- locate character in string.
  - `Validate the input string pointer`
  - `Specify the character to search for`
  - `Iterate through the string to locate the character`
  - `Return a pointer to the first occurrence of the character in the string or NULL if not found`
<br>

- [*`ft_strrchr`*](ft_strrchr.c)	- locate character in string.
  - `Validate the input string pointer`
  - `Specify the character to search for`
  - `Iterate through the string in reverse order to locate the last occurrence of the character`
  - `Return a pointer to the last occurrence of the character in the string or NULL if not found`
<br>

- [*`ft_strncmp`*](ft_strncmp.c)	- compare two strings.
  - `Validate the input string pointers`
  - `Specify the maximum number of characters to compare`
  - `Compare the corresponding characters in both strings`
  - `Stop comparison at the specified length or when a difference is found`
  - `Return an integer value indicating the comparison result (0 if str = str; +int value if s1 greater > than s2; -int value if s1 less > greater s2).`
<br>

- [*`ft_memchr`*](ft_memchr.c)	- scan memory for a character.
  - `Validate the input memory block pointer`
  - `Specify the character to search for`
  - `Specify the number of bytes to search within the memory block`
  - `Scan the memory block for the specified character`
  - `Return a pointer to the first occurrence of the character in the memory block or NULL if not found`
<br>

- [*`ft_memcmp`*](ft_memcmp.c)	- compare memory areas.
  - `Validate the input memory area pointers`
  - `Specify the number of bytes to compare`
  - `Compare the corresponding bytes in both memory areas`
  - `Stop comparison at the specified length or when a difference is found`
  - `Return an integer value indicating the comparison result (0 if the memory areas are equal, a positive value if the first area is greater, and a negative value if the second area is greater)`
<br>

- [*`ft_strnstr`*](ft_strnstr.c)	- locate a substring in a string.
  - `Validate the input string pointers`
  - `Validate the maximum search length`
  - `Specify the substring to search for`
  - `Search for the substring within the string, up to the specified maximum length`
  - `Return a pointer to the first occurrence of the substring in the string or NULL if not found within the specified maximum length`
<br>

- [*`ft_strdup`*](ft_strdup.c)	- creates a dupplicate for the string passed as parameter.
  - `Validate the input string pointer`
  - `Determine the length of the input string`
  - `Allocate memory for the duplicate string of the same length`
  - `Copy the characters from the input string to the duplicate string`
  - `Ensure null-termination of the duplicate string`
  - `Return a pointer to the newly created duplicate string`
<h1></h1>

### Functions from `<stdlib.h>`
- [`ft_atoi`](ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [`ft_substr`](ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of string with specific set of chars.
- [`ft_split`](ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor.

### Linked list functions

- [`ft_lstnew`](ft_lstnew.c)	- creates a new list element.
- [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list.
- [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list.
- [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list.
- [`ft_lstclear`](ft_lstclear.c)	- deletes and free list.
- [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list.
- [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list.
