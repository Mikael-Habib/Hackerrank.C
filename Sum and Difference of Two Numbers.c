#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float z,w;
    scanf("%d %d",&x,&y);
    scanf("%f %f",&z,&w);
    printf("%d %d\n",x+y,x-y);
    printf("%.1f %.1f\n",z+w,z-w);

    return 0;
}

