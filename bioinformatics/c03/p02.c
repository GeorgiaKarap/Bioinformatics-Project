#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int i, len;
float gc, per;
char seq[ 5000 ];
while( scanf("%s",seq) ==1 )
{
	gc=0;
	len = strlen( seq );
	for ( i=0 ; i<len ; i++ )
	{
		if ( seq[i] == 'G' || seq[i] == 'C' )
			{
				gc = gc+1;
			}
	}
per=100*gc/len;
printf("The %%GC is %f\n", per );
}
}
