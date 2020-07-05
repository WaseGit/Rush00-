#include <unistd.h>


void ft_putchar(char c); 


void  first_line(int x)
{
	int i;
   	i = 0; 	
	ft_putchar('/');
  	if (x > 2)
    {
		while (i != (x-2))
	    {
		   ft_putchar('*');
		   i++;
	   }
	   
   }
   if (x >= 2 )
   {
	ft_putchar(92);
   }
}   
void	middle_line(int x )
{ 
	int i ; 
	i = 0; 
	ft_putchar('*'); 
	if (x > 2)
	{
	    while (i != (x-2))
	    {
			ft_putchar(' ');
			i++; 
		}
	}
	if (x >= 2)
	{
		ft_putchar('*');
	}
   
}
void	last_line (int x)
{ 
	int i;
    i = 0; 	
	ft_putchar(92);  
	if (x > 2)
	{
		while (i != (x-2))
		{
			ft_putchar('*'); 
			i++; 
	    }
	}
	if (x >= 2 )
	{
		ft_putchar('/');  
	}
	
}
void	rush01(int x , int y )
{
	int i;
    i = 0;	
	if (x <= 0 || y <= 0 )
	{
		return ; 
	}
	first_line(x);  
   if (y > 2)
   {
	   while (i != ( y-2 ))
	   {
		   ft_putchar('\n');
		   middle_line(x); 
		   i++;
	   }
   }
   if (y >=  2 )
	  {
		  ft_putchar('\n'); 
		  last_line(x);
	  }
}	 
