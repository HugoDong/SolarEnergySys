#include "stm32f10x.h"

void Delay(u32 count)
{
	u32 i=0;
	for(;i<count;i++);
}

unsigned int gl_couner = 0;
int main(void)
{
	while(1)
	{
		Delay(1000);
		gl_couner++;
		if(gl_couner > 50000)
		{
			gl_couner = 0;
		}
	}
}
