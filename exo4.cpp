#include<iostream>

int compare(const char*chain1, const char*chain2)
{
	int i=0;
	while(chain1[i] !=0 && chain2[i] !=0)
	{
		if(chain1[i] < chain2[i])
		{
			return -1;
		} else if(chain1[i]>chain2[i])
		{
			return 1;
		}
		i++;
	}
	if(chain1[i]==0 && chain2[i]==0)
	{
		return 0;
	} else if(chain1[i]==0)
	{
		return -1;
	
	} else
	{
		return 1;
	}
}
