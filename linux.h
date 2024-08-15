#ifndef _LINUX_H_
#define _LINUX_H_

#include <string.h>

static size_t strlcpy(char *dest, const char *src, size_t size)
{
	size_t ret = strlen(src);

	if (size) {
		size_t len = (ret >= size) ? size - 1 : ret;
		memcpy(dest, src, len);
		dest[len] = '\0';
	}
	return ret;
}

static const char *progname = NULL;

static void setprogname(const char *name)
{
	if (name) {
		const char *short_name = strrchr(name, '/');
		progname = short_name ? short_name + 1 : name;
	}
}

static const char *getprogname(void)
{
	return progname;
}

#endif /* _LINUX_H_ */
