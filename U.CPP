#include<stdio.h>
#include<conio.h>

main()
{
	char i;
	clrscr();
	printf("\nthe alphabet from ato z are : \n");
	i='a';
	do
	{
		printf("%c,",i);
		i++;
	while(i<='z');
	}
}
getch();