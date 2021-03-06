// Commonly used string functions in C.

// strcat(): Appends a copy of the source string to the end of the destination string.
char destination[50] = "Hello ";
char source[50] = "World!";

// strcmp(): Compares two strings lexicographically.
char str1[10] = "hello";
char str2[10] = "hello";

// strcpy(): Copy one string to another.
char dest[50] = "Old Value";
char src[50] = "New Value!";
strcpy(dest, src);

printf("strcpy: %s\n", dest);

// strlen(): Gives you the length of the string. It doesn't count null character.
char name[] = "Rakesh Sharma";
