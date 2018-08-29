//eclipseはescapeSeaquenceに対応してないっぽい色が変化しない

#include <stdio.h>
#include "etest.h"

int main()
{
	CLS;
	locate(0,0);
	RED;
	printf("赤です\n");
	BLUE;
	printf("青ですね\n");
	MAGENTA;
	printf("紫です\n");
	CYAN;
	printf("水色です\n");
	YELLOW;
	printf("黄色です\n");
	WHITE;
	printf("白です\n");
	return(TRUE);
}
