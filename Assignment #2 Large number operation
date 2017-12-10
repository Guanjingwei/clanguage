Assignment #2 Large number operation



Problem description: 
Based on the effective use of memory, the programming language provides a variety of different data types, and therefore the size of the largest integer that variables can express is limited, for example, an integer such as 1234567890123456789 cannot be stored in long variables (such as C / C++ Etc.). We call this a large number, or commonly known as large number operations.
Task:
Write a program that can generate the four arithmetic operation (+-*/) results of 20 to 25 significant digits. 
a)	The large numbers are integers.
b)	The operands and the results are all no more than 25 significant digits.

Note that: Do not use array and pointer. Only use what you have learned in CS course, such as expression, selection and loops.







#include <stdio.h>
#include <stdlib.h>//利用fflush<stdin>命令防止scanf存储的时候缓存区出错。
#include <stdlib.h>
#include <windows.h>
void main()
{
    int a1,b1,c1,d1; //a,b,c,d  是四个用来储存整形的变量  例如一个20位的数字，d应该是最后五位数字
	int a2,b2,c2,d2;
	int p1,p2,p3,p4;//控制加法运算四个变量
	int pa,pb,pc,pd;//需要进位的四位数字
	int pr1,pr2,pr3,pr4;
	int ps1,ps2,ps3,ps4;//提前为后面的乘法计算提前定义变量
	char plus = '+',subtract = '-', multiply = '*' , divide = '/';
	char judgeop;
    system("color 4a");
	printf("            ***********************************************************          \n");
	printf("            ***********************************************************          \n");
    printf("            *******Welcome to the Large Number Operations System*******          \n");
    printf("            *******Welcome to the Large Number Operations System*******          \n");
    printf("            *******Welcome to the Large Number Operations System*******          \n");
    printf("            *******Welcome to the Large Number Operations System*******          \n");
    printf("            *******Welcome to the Large Number Operations System*******          \n");
    printf("            *******Welcome to the Large Number Operations System*******          \n");
    printf("            *******Welcome to the Large Number Operations System*******          \n");
    printf("            ***********************************************************          \n");
	printf("            ***********************************************************          \n");
	printf("            PASS ANY KEY TO CONTINUE THIS LARGE NUMBER OPERATIONS SYSTEM           ");
	getchar();
	fflush(stdin);
	system("cls");
	printf("Please enter the long number: \n");
	scanf("%5d%5d%5d%5d",&a1,&b1,&c1,&d1);
	fflush(stdin);
	printf("\n");
    printf("Please enter the operating symbol:\n");
	scanf("%c",&judgeop);
	fflush(stdin);
	printf("\n");
	printf("Please enter the another long number: \n");
    scanf("%5d%5d%5d%5d",&a2,&b2,&c2,&d2);
	fflush(stdin);
	printf("\n");
	//下面进行大数加法操作运算
	if (judgeop == '+')//12345678901234567890
	{
	    printf("****************************************************************\n");
		printf("The following operation is addition of these two large integers!\n");
		printf("****************************************************************\n");
		p1 = a1 + a2;
		p2 = b1 + b2;
		p3 = c1 + c2;
		p4 = d1 + d2;
		pa = p1 / 100000;
		pb = p2 / 100000;
		pc = p3 / 100000;
		pd = p4 / 100000;
	    pr1 =p1 + pb;//p1+pb
		pr2 =p2 - 100000 * pb;//pr2 +pc
		pr3 =p3 - 100000 * pc;//pr3+ pd
		pr4 =p4 - 100000 * pd;//pr4
		if(pb = 0) //判断变量之间是否进位,等于0则不进位 大于1则进位。
		{
		   pr2 = p2;
		}else
		{
		   pr2 = pr2 + pc;
		}
		if(pc = 0)
		{
		   pr3 = p3;
		}else
		{
		   pr3 = pr3 + pd;
		}
		if(pd = 0)
		{
		   pr4 = p4;
		}
		printf("\n\n");
        printf("***********************************\n");
		printf("The result is :%5.5d%5.5d%5.5d%5.5d\n",pr1,pr2,pr3,pr4);
		printf("***********************************\n");
		printf("\n\n");
	}
	//下面进行大数的减法运算
	if (judgeop == '-')//12345678901234567890
	{
		printf("****************************************************************\n");
		printf("The following operation is subtract of these two large integers!\n");
		printf("****************************************************************\n");
		//首先进行借位判断，如果p1p2p3p4中任何一个数为负数则需要向前借一位
	    p1 = a1 - a2;
		p2 = b1 - b2;
		p3 = c1 - c2;
		p4 = d1 - d2;
		if(p4 >= 0)//首先倒序进行是否进位判断
		{
		    pr4 = d1 - d2;	
		}else
		{
		    c1 = c1 -1;
		    pr4 = (100000 + d1) - d2;
		}
		if(p3 >=0)
		{
		    pr3 = c1 - c2;	
		}else
		{
		    b1 = b1 -1;
		    pr3 = (100000 + c1) - c2;
		}
		if(p2 >=0)
		{
		    pr2 = b1 - b2;	
		}else
		{
		    a1 = a1 -1;
		    pr2 = (100000 + b1) - b2;
		}
		if(p1 >=0)
		{
		    pr1 = a1 - a2;	
		}else
		{
		    pr1 = a2 -a1;//先用大数减去小数然后后面结果强行添加负号
		}
		//下面进行减法总体运算符号正负的确定
		if(pr1 >= 0)
		{
		printf("\n\n");
        printf("***********************************\n");
		printf("The result is :%.5d%5.5d%5.5d%5.5d\n",pr1,pr2,pr3,pr4);
        printf("***********************************\n");
		printf("\n\n");
		}else
		{
		printf("\n\n");
        printf("***********************************\n");
		printf("The result is :%.5d%5.5d%5.5d%5.5d\n",pr1,pr2,pr3,pr4);
        printf("***********************************\n");
	    printf("\n\n");
		}

	}
	//下面进行大数的乘法运算---20*20   其结果是40或41位 总体思路可以拆分拆开秒每一个数然后错位进行累加。
	//或者采用乘法本质即重复累加某一个数字 采用循环结构。                  
		if (judgeop == '*')//12345678901234567890
		{   
		    long int s1,s2,s3,s4,s5,s6,s7,s8;
			printf("****************************************************************\n");
			printf("The following operation is multiply of these two large integers!\n");
			printf("****************************************************************\n");
			//下面进行拆分成变量分别计算5 *5 得到的整数
			//第一部分 d1 * --a1
			p1 = d1 * d2;
			p2 = c1 * d2;
			p3 = b1 * d2;
			p4 = a1 * d2;
            //第二部分 c2 * --a1
			pa = c2 * d1;
			pb = c2 * c1;
			pc = c2 * b1;
			pd = c2 * a1;
            //第三部分 b2 * --a1
			pr1 = d1 * b2;
			pr2 = c1 * b2;
			pr3 = b1 * b2;
			pr4 = a1 * b2;
			//第四部分 a1 * --a1
			ps1 = d1 * a2;
			ps2 = c1 * a2;
			ps3 = b1 * a2;
			ps4 = a1 * a2;
			//下面进行变量错位计算  思路取余数分离十位整数
			s8 = (p1 % 100000);
			s7 = (p1 / 100000) + (p2 % 100000) + (pa % 100000);
			s6 = (p2 / 100000) + (p3 % 100000) + (pa / 100000) + (pb % 100000) + (pr1 % 100000);
			s5 = (p3 / 100000) + (p4 % 100000) + (pb / 100000) + (pc % 100000) + (pr1 / 100000) + (pr2 % 100000) + (ps1 % 100000);
			s4 = (p4 / 100000) + (pc / 100000) + (pd % 100000) + (pr2 / 100000) + (pr3 % 100000) + (ps1 / 100000) +(ps2 % 100000);
			s3 = (pd / 100000) + (pr3 / 100000) + (pr4 % 100000) + (ps2 / 100000) +(ps3 % 100000);
			s2 = (pr4 / 100000) + (ps3 / 100000) + (ps4 % 100000);
			s1 = (ps4 / 100000); 
			//下面进行乘法进位判断
			if(s7 / 100000 > 0)
			{
			    s6 = s6 +(s7 / 100000);
				s7 = s7 % 100000;
				
			}
			if(s6 / 100000 > 0)
			{
			    s5 = s5 +(s6 / 100000);
				s6 = s6 % 100000;
				
			}
			if(s5 / 100000 > 0)
			{
			   s4 = s4 +(s5 / 100000);
				s5 = s5 % 100000;
				
			}
			if(s4 / 100000 > 0)
			{
			   	s3 = s3 +(s4 / 100000);
				s4 = s4 % 100000;
			
			}
			if(s3 / 100000 > 0)
			{
			    s2 = s2 +(s3 / 100000);
				s3 = s3 % 100000;
				
			}
			if(s2 / 100000 >= 0)
			{
			    s1 = s1 +(s2 / 100000);
				s2 = s2 % 100000;
				
			}
			printf("\n\n");
            printf("********************************************************\n");
			printf("The result is :  %d%5.5d%5.5d%5.5d%5.5d%5.5d%5.5d%5.5d\n",s1,s2,s3,s4,s5,s6,s7,s8);
			printf("********************************************************\n");
			printf("\n\n");
		
		}
	//下面对大数进行除法运算，思路为减法运算
    if (judgeop == '/')//12345678901234567890
	{
	    int result;//该变量为除法结果累加变量,该变量只考虑整数情况。
		result = 0;//初始化result (计数变量)
		printf("The following operation is multiply of these two large integers!\n");
	    //下面引用减法代码部分

		//首先进行借位判断，如果p1p2p3p4中任何一个数为负数则需要向前借一位
	    p1 = a1 - a2;
		p2 = b1 - b2;
		p3 = c1 - c2;
		p4 = d1 - d2;
		if(p4 >= 0)//首先倒序进行是否进位判断
		{
		    pr4 = d1 - d2;	
		}else
		{
		    c1 = c1 -1;
		    pr4 = (100000 + d1) - d2;
		}
		if(p3 >=0)
		{
		    pr3 = c1 - c2;	
		}else
		{
		    b1 = b1 -1;
		    pr3 = (100000 + c1) - c2;
		}
		if(p2 >=0)
		{
		    pr2 = b1 - b2;	
		}else
		{
		    a1 = a1 -1;
		    pr2 = (100000 + b1) - b2;
		}
		if(p1 >=0)
		{
		    pr1 = a1 - a2;	
		}else
		{
		    pr1 = a2 -a1;//先用大数减去小数然后后面结果强行添加负号
		}


		//情况一   小数除以大数，由于除法只考虑整数故上面数比下面数大的时候结果
        if (pr1 < 0)
		{
			printf("\n\n");
            printf("******************\n");
		    printf("The result is : 0 \n");
			printf("******************\n");
			printf("\n\n");
		}else 
		{
			//情况二   其他整数情况，用累减法来确定大小。 执行完一次的结果pr1 pr2 pr3 pr4
		    while(p1 >= 0)
			{
			     result = result + 1;// 此处是判断剪了多少次 进而确定结果
			     a1 = pr1;           //执行完一次减法后将结果变为第一次输入的数字进行运算     
			     b2 = pr2;
			     c1 = pr3;
			     d1 = pr4;
			     p1 = a1 - a2;
		         p2 = b1 - b2;
		         p3 = c1 - c2;
	             p4 = d1 - d2;
		         if(p4 >= 0)//首先倒序进行是否进位判断
				 {
		             pr4 = d1 - d2;	
				 }else
				 {
		            c1 = c1 -1;
		            pr4 = (100000 + d1) - d2;
				 }
	        	if(p3 >=0)
				{
		            pr3 = c1 - c2;	
				}else
				{
		             b1 = b1 -1;
		             pr3 = (100000 + c1) - c2;
				}
		       if(p2 >=0)
			   {
		             pr2 = b1 - b2;	
			   }else
			   {
		             a1 = a1 -1;
		             pr2 = (100000 + b1) - b2;
			   } 
		       if(p1 >=0)
			   {
		             pr1 = a1 - a2;	
			   }else
			   {
		             pr1 = a2 -a1;//先用大数减去小数然后后面结果强行添加负号
			   }
			}
		 printf("\n\n");
		 printf("******************\n");
         printf("The result is : %d\n",result);
		 printf("******************\n");
		 printf("\n\n");
		}
	}


}
