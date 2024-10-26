#include <unistd.h>

/**
 * jack_bauer - Prints every minute of Jack Bauer's day.
 */
void jack_bauer(void)
{
	int hour;   /* Variable for hours */
	int minute; /* Variable for minutes */
	char buffer[6]; /* Buffer to hold the time in HH:MM format */

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* Format the time into the buffer */
			buffer[0] = (hour / 10) + '0';  /* Tens of hour */
			buffer[1] = (hour % 10) + '0';  /* Units of hour */
			buffer[2] = ':';                 /* Colon separator */
			buffer[3] = (minute / 10) + '0';/* Tens of minute */
			buffer[4] = (minute % 10) + '0';/* Units of minute */
			buffer[5] = '\n';                /* Newline character */

			write(1, buffer, sizeof(buffer)); /* Write the buffer to stdout */
		}
	}
}
