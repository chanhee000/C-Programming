//�Ǽ������� ������ �Է� �޾Ƽ� 90�� �̻��̸� A, 89~80�̸� B, 79~70�̸� C, 69~60�̸� D, 59�����̸� F�� ����ϵ��� switch��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int h;

	printf("������ �Է����ּ���.");
	scanf("%d", &h);

	switch(h/10)
	{
	case 10:
	{
		printf("A����Դϴ�");
		break;
	}
	case 9:
	{
		printf("A����Դϴ�");
		break;
	}
	case 8:
	{
		printf("B����Դϴ�.");
		break;
	}
	
	case 7:
	{
		printf("C����Դϴ�.");
		break;
	}

	case 6:
	{
		printf("D����Դϴ�.");
		break;
	}

	default:
	{
		printf("F����Դϴ�.");
	}

	}
}