/* An example of object oriented programming in c */

#include <stdio.h>

// The top-level class.
typedef struct _commom_class
{
	int (*open)(struct _commom_class * self, char * fspec);
} commom_class_t;

// Function for the TCP 'class'.
static int tcp_open (commom_class_t * tcp, char * fspec)
{
	printf ("Opening TCP: %s\n", fspec);
	return 0;
}
static int tcp_init (commom_class_t * tcp)
{
	tcp->open = &tcp_open;
	return 0;
}

// Function for the HTTP 'class'.
static int http_open (commom_class_t * http, char * fspec)
{
	printf ("Opening HTTP: %s\n", fspec);
	return 0;
}
static int http_init (commom_class_t * http)
{
	http->open = &http_open;
	return 0;
}

int main (void)
{
	int status;
	commom_class_t commTcp, commHttp;

	// Same 'base' class but initialised to different sub-classes.
	tcp_init (&commTcp);
	http_init (&commHttp);

	// Called in exactly the same manner.
	status = (commTcp.open)(&commTcp, "bigiron.box.com:5000");
	status = (commHttp.open)(&commHttp, "http://www.microsoft.com");

	return 0;
}
