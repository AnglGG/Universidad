#include <unistd.h>

int main()
{
	char buf[3];
	char *p;
	int ret;

	p = buf;
	
	ret = read(0, p, 3);
	write(1, p, 3);

	return ret;
}
