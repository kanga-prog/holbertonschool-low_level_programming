#include <stdio.h>

/**
 * jack_bauer - Prints every minute of Jack Bauer's day.
 */
void jack_bauer(void)
{
	int hour;   /* Variable for hours */
	int minute; /* Variable for minutes */

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute); /* Print time in HH:MM format */
		}
	}
}
