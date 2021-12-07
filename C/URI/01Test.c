#include <stdio.h>

int main()
{
	int h, m;
	double angle;
	scanf("%d %d", &h, &m);
	double hour = (h +(m / 60.0))* 30.0 ;
	double min = m * 6;
	angle = abs(hour - min);
	if (angle > 180)
		angle = 360 - angle;
	printf("%lf", angle);
	return 0;
}
