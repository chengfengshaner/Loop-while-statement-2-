#include <stdio.h>

//int main()
//{
//	int ch = getchar();	//读取一个字符
//	//printf("%c\n", ch);
//	putchar(ch);		//输出一个字符
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl+z - getchar 就读取结束

	while ((ch = getchar()) != EOF)	//EOF - end of file - 文件结束标志
									//! - 检查两个操作数的值是否相等，如果不相等则条件为真
	//getchar:读取一个字符
		putchar(ch);
	return 0;
}

//			缓冲区	键盘
//getchar	A\n		A+enter