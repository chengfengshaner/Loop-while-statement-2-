#include <stdio.h>

//int main()
//{
//	int ch = getchar();	//��ȡһ���ַ�
//	//printf("%c\n", ch);
//	putchar(ch);		//���һ���ַ�
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl+z - getchar �Ͷ�ȡ����

	while ((ch = getchar()) != EOF)	//EOF - end of file - �ļ�������־
									//! - ���������������ֵ�Ƿ���ȣ���������������Ϊ��
	//getchar:��ȡһ���ַ�
		putchar(ch);
	return 0;
}

//			������	����
//getchar	A\n		A+enter