#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int  i, len, max;
char seq[ 5000 ];
max = 0;

for ( i=0 ; i<10 ; i++ )
	{
		scanf("%s",seq);
		len = strlen( seq );
		if ( max < len )
			{
				max = len;
			}
	}
printf("The Maximum length is %d\n", max );
}
