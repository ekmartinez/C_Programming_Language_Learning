
#include <stdio.h>
#include <math.h>



int main(void)
{
		
	double target = 1.50;
	double target_tenth = floor(target * 10 + .5) / 10;
	double target_hundreth = floor(target * 100 + .5) / 100;
	double target_thousanth = floor(target * 1000 + .5) / 1000;
	


	printf("%.2f\n",target_tenth);
	printf("%.3f\n", target_hundreth);
	printf("%.4f\n", target_thousanth);
	

	


}
