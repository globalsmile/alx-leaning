#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int _getline(char line[], int maxline);
void _copy(char to[], char from[]);

/**
 * main - entry point
 * Return: always 0
 *
 */
int main(void)
{
	int len;   /* current line length */
	int max;   /* maximum length seen so far */
	char line[MAXLINE];  /* current input line */
	char longest[MAXLINE];   /* longest line saved here */

	max = 0;
	while ((len = _getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			_copy(longest, line);
		}
	}
	if (max > 0)   /* there was a line */
		printf("%s", longest);
	return (0);
}
/**
 * _getline - read a line into s
 * @s: stores the line
 * @lim: length of s
 * Return: length s
 *
 */
int _getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1  && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return (i);
}
/**
 * _copy - copy 'from' into 'to'
 * @to: copy to
 * @from: copy from
 *
 */
void _copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
