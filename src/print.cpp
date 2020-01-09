#include<iostream>
#include"print.h"
 
void print(int *a, int n)
{
	std::cout<<"\tHola\n";
	
    for(int i=0;i<n;i++)
		std::cout<<*(a+i)<<std::endl;
	
    std::cout<<"\tAdios\n";
}
