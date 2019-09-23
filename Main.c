#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#include "Compress.h"
#include "Extract.h"

int main() 
{
	int flag;
	char c;
	char filename[100] , extractfilename[100];
	clock_t t1 , t2; 
	
	while (1)
	{
   		printf ("\t _______________________________________________\n");
   		printf ("\t|                                               |\n");   
   		printf ("\t| C-ѹ���ļ�                                    |\n");   
   		printf ("\t| E-��ѹ��                                      |\n");   
   		printf ("\t| Q-�˳�                                        |\n");
   		printf ("\t|_______________________________________________|\n");
   		printf ("\n");
	   	do
	   	{
	    	printf ("\n\t��ѡ����:"); 
	    	scanf (" %c", &c);
	    	c = toupper(c);
	    	putchar('\n');
	    	if ('C' != c && 'E' != c && 'Q' != c)
	    	{ 
	     		printf ("\tѡ�����,����������!\n");
	    	}
	   	}
		while ('C' != c && 'E' != c && 'Q' != c); 
		
		if ('C' == c)
		{
			printf ("\t����������Ҫѹ�����ļ�:");
			fflush(stdin);
 	 	    gets (filename);
	 	    putchar('\n');
			 
			printf ("\t��������ѹ������ļ�:");
			fflush(stdin);
	   	    gets (extractfilename);
	   	    putchar('\n');
	   	    
			t1 = clock();
			printf ("\t���ڰ���ѹ��...");
			flag = Compress(filename , extractfilename);
			t2 = clock();
			putchar('\n');
			
		   	if (-1 == flag)
		   	{
		   		printf ("\t�ļ���ʧ��!\n"); 
	   			exit(1); 
		   	}
		   	else
		   	{
		   		printf("\n\tѹ���������!\n\n");
		   	}
			
			printf("\tѹ���ķ�ʱ��: %g��\n" , (t2 - t1) / 1000.0);
		}
	   	else if ('E' == c)
		{ 
			printf ("\t����������Ҫ��ѹ���ļ�:");
			fflush(stdin);
	   		gets (extractfilename);
	   		putchar('\n');
	   	    
	   	    printf ("\t���������ѹ������ļ�:");
			fflush(stdin);
	 	    gets (filename);
	 	    putchar('\n');
			
			t1 = clock();
			printf ("\t���ڰ�����ѹ��...");
			flag = Extract(extractfilename , filename);
			t2 = clock();
			putchar('\n');
			
		   	if (-1 == flag)
		   	{
		   		printf ("\t�ļ���ʧ��!\n"); 
	   			exit(1); 
		   	}
		   	else
		   	{
		   		printf("\n\t��ѹ���������!\n\n");
		   	}
			
			printf("\t��ѹ���ķ�ʱ��: %g��\n" , (t2 - t1) / 1000.0);
		}
	   	else 
	   	{
	    	printf ("\t�ټ�!\n"); 
	    	exit(0);
	   	}  
	}
	return 0;
}
