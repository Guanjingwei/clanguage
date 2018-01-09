//*************************************老规矩!先写好注释*******************************************
//*************************************************************************************************
//*                                 BIGPROJECT 4   String                                         *
//*                      Assignment4 Strings Processing System                                    *
//*                 Souce Code BY:Brooks (Heodel) in Kaist LIC Program                            *
//****************编译环境Win7 Code::Blocks 16.04 编译器GNU GCC Compiler***************************
//*************************************传说中的分割线**********************************************
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#define N 100                     //利用define定义常量 进行字符串数组操作
#define M 100
#define K 100
//下面定义本程序需要使用的全局变量
int choice = 0;                    //此变量为选择变量  即为用户输入选择的变量
char store[N];                   //储存的全局字符串
char inputch[M];
char insearch[K];
char clipboard[N];
//下面声明本程序需要用到的函数    后面进行代码完善
void welcome();                  //声明界面欢迎函数------函数1
void selectnum();                //用户选择函数    ------函数2
void pipei();                    //匹配功能函数    ------函数3
//程序主要功能函数
void function1();                 //1.输入一个字符串作为文本，并存储它。
void function2();                 //2.显示字符串（文本）。
void function3();                 //3.在文本中查找指定字符串的所有索引，显示所有起始位置。这包括区分大小写和不区分大小写。
void function4();                 //4.用输入的字符串替换文本中的指定字符串。
void function5();                 //5.将由输入的开始位置和结束位置指定的子字符串从文本复制到一个地方（称为剪贴板，它是一个数组）。
void function6();                 //6.将剪贴板中的子字符串粘贴到文本中的指定位置。
void function7();                 //7.将输入的字符串插入文本中的指定位置。
void function8();                 //8.您可以撤消并恢复上一次文字操作。 （选择做）
//程序主体部分--------主函数
void main()
{
	welcome();          //首先显示菜单  然后请用户进行选择
	selectnum();        //用户进行选择
	pipei();
}
//菜单欢迎函数具体代码
void welcome()
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("+                        Welcome to The Function Menu                         +\n");
	printf("+                                                                             +\n");
	printf("+   《1》 Enter a string as a text , and store it                     《1》   +\n");
	printf("+   《2》 Display the string(Text)                                    《2》   +\n");
	printf("+   《3》 Find the indexs of the string in the text                   《3》   +\n");
	printf("+   《4》 Replaces string in the text with a inputted string          《4》   +\n");
	printf("+   《5》 Copy a substring specified(with Start and End)              《5》   +\n");
	printf("+   《6》 Paste the substring from clipboard at the specified location《6》   +\n");
	printf("+   《7》 Insert the inputted string into a specified position        《7》   +\n");
	printf("+   《8》 Undo and resume the last text operation                     《8》   +\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}
//用户选择函数代码
void selectnum()
{
	printf("Please enter your choice (Integar 1---8) :");  //用户进行输入选择菜单的项目
	scanf("%d", &choice);
	fflush(stdin);                                         //防止程序陷入死循环 这里先进行清除缓存区

}
void pipei()
{
    if (choice == 1)
		function1;
	if (choice == 2)
		function2;
	if (choice == 3)
		function3;
	if (choice == 4)
		function4;
	if (choice == 5)
		function5;
	if (choice == 6)
		function6;
	if (choice == 7)
		function7;
	if (choice == 8)
		function8;

}
//输入字符串并且储存
void function1()
{
	printf("Please enter the char : ");
	gets(store);
	selectnum();            //输入完成后用户再次进行选择
}
//显示输入的字符串
void function2()
{
	printf("Your enter is : \n");
	puts(store);
	selectnum();
}
//查找字符串下标  这包括区分大小写和不区分大小写(可采用全部转换为大写思路)  要求是返回所有起始的下标
// 该函数参数定义为指针 传递下标  返回值为整数
void function3()
{
	int flag1 = 0, flag2 = 0;              //返回下标
	int m, i, j, c, b, d;                 //循环查找变量和用户选择变量和输入char长度变量
	int ch;
	int index1[100] = { 0 };
	int index2[100] = { 0 };
	char tran1[100] = { '\0' };
	char tran2[100] = { '\0' };
	printf("**********************************\n");
	printf("Mode 1 : case-sensitive     (区分)\n");
	printf("Mode 2 : case-insensitive (不区分)\n");
	printf("**********************************\n");
	printf("Please enter your choice : ");
	scanf("%d", &c);                   //后期可以加入防错机制
	fflush(stdin);
	if (c == 1)    //区分大小写 思路是直接进行查找
	{
		printf("Please enter your search char: ");
		gets(inputch); //ch = getchar();                            //gets(inputch);
		d = strlen(inputch);
		b = strlen(store);            //防止死循环而取长度
		for (i = 0; i<b; i++)
		{
			ch = i;
			for (j = 0, flag1 = 0; j<d; j++)
			{
				if (store[ch] == inputch[j])
				{
					ch++;                                                                      //index1[flag] = i;  flag++;
				}
				else
				{
					flag1 = 1;
					break;
				}

			}
			if (flag1 == 0)
			{
				index1[flag2] = i;
				flag2++;
			}

		}
		if (flag2 == 0)
		{
			printf("Can't search the char\n");
		}
		else
		{
			printf("The char index start at 0 : \n");
			for (m = 0; m<flag2; m++)
			{
				printf("%d\t", index1[m]);
			}
			printf("\n");
		}

	}
	if (c == 2)    //不区分大小写采用统一转换思路
	{
		ch = 0, flag2 = 0;
		printf("Please enter your search char: ");
		gets(inputch);
		b = strlen(store);      //防止死循环取用户输入的字符串长度
		d = strlen(inputch);
		for (i = 0; i<b; i++)
		{
			tran1[i] = toupper(store[i]);   //统一转化大写
		}
		for (i = 0; i<d; i++)
		{
			tran2[i] = toupper(inputch[i]);   //统一转化大写
		}
		for (i = 0; i<b; i++)
		{
			ch = i;
			for (j = 0, flag1 = 0; j<d; j++)
			{
				if (tran1[ch] == tran2[j])
				{
					ch++;
				}
				else
				{
					flag1 = 1;
					break;
				}

			}
			if (flag1 == 0)
			{
				index2[flag2] = i;
				flag2++;
			}

		}
		if (flag2 == 0)
		{
			printf("Can't search the char\n");
		}
		else
		{
			printf("The char index start at 0 : \n");
			for (m = 0; m<flag2; m++)
			{
				printf("%d\t", index2[m]);
			}
			printf("\n");
		}
	}
	selectnum();
}
//用输入的字符串替换指定的字符串
void function4()
{
	int i, j;                     //循环提取变量
	int e, f,g;                     //指定字符串位置所使用的变量   g为f的转换变量
	char part1[100];
	char part2[100];
	printf("Please enter the new char : ");
	gets(insearch);
	printf("Please enter the index like<1 2 means 1--2 two chars>");
	fflush(stdin);
	scanf("%d %d", &e, &f);
	fflush(stdin);
	g =f ;
	//根据位置进行提取字符串 后三段拼接实现插入
	for (i = 0; i<e; i++)
	{
		part1[i] = store[i];
	}
	for (j = 0; j < (strlen(store) - g); j++)
	{
		part2[j] = store[f + 1];
		f++;
	}
	puts(strcat(strcat(part1, insearch), part2));
	selectnum();
}
void function5()
{
    int i,j=0;    //控制循环变量
    int e,f;
    printf("Please enter the index like<1 2 means 1--2 two chars>");
    fflush(stdin);
    scanf("%d %d",&e,&f);
    fflush(stdin);
    for(i=0;i<(f-e+1);i++)
    {
        clipboard[i] = store[e+j];
        j++;
    }
    puts(clipboard);
    selectnum();
}
//将函数5中获取到的字符粘贴到指定位置
void function6()
{
    int e,f;
    int i,j;
    char part1[100]={'\0'};
    char part2[100]={'\0'};
    printf("Please enter a specified position in the text:");
    scanf("%d",&e);
    fflush(stdin);
    for(i=0;i<e+1;i++) //循环获取前面的字符串
    {
        part1[i] = store[i];
    }
    for(j=0,f=e;j<(strlen(store)-e-1);j++)
    {
        part2[j] = store[f+1];
        f++;
    }
    puts(strcat(strcat(part1,clipboard),part2));
    selectnum();

}
//将输入的字符串插入文本中的指定位置
void function7()
{
	int i, j;                     //循环提取变量
	int e, f,g;                     //指定字符串位置所使用的变量   g为f的转换变量
	char part1[100]={'\0'};
	char part2[100]={'\0'};
	printf("Please enter the new char : ");
	gets(insearch);
	printf("Please enter the index like<2 means the index is two>");
	fflush(stdin);
	scanf("%d", &e);
	fflush(stdin);
	f = e;
	//根据位置进行提取字符串 后三段拼接实现插入
	for (i = 0; i<e+1; i++)
	{
		part1[i] = store[i];
	}
	for (j = 0; j < (strlen(store) - g); j++)
	{
		part2[j] = store[f + 1];
		f++;
	}
	puts(strcat(strcat(part1, insearch), part2));
	selectnum();
}
//撤消并恢复上一次文字操作
void function8()
{
     printf("Undo and resume the last word operation:\n");
	 puts(store);
}

