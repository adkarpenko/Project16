#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
int main()

{
	setlocale(LC_ALL, "");
	int ch;
	int flag;
	start:
	printf("��� �����?\n1-��� �����;\n2-����������;\n3-� �� ���� �������� �� ����\n4-������������\n5-���������;\n6-������������;\n");
	scanf_s("%d", &ch);
	switch (ch)
	{
	case 1:
	{
		printf("������� �� Strach,����� Python\n");
	}
	break;
	case 2:
	{
		printf("1-����� ������;\n2-� ���� ���� ���� ��� ��������");
		printf("����� ��������� ��� �����?\n1-� ������ ���� �����;\n2-3D����;\n3-����.����;\n4-���������;\n5-���;\n");
		scanf_s("%d", &flag);

		if (flag > 5)
		{
			printf("������ �������� �� ����������.��������� ����!\n");
			goto start;
		}

		if (flag == 1)
		{
			printf("Java\n");
		}
		if (flag == 2)
		{
			printf("C++\n");
		}
		if (flag == 4)
		{
			printf("����� ��?\n1-IOS;\n2-Android;\n");
			scanf_s("%d", &flag);

			if (flag > 3)
			{
				printf("������ �������� �� ����������.��������� ����!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("OBJECTIVE-C\n");
			}
			if (flag == 2)
			{
				printf("JAVA\n");
			}
		}
		if (flag == 3)
		{
			printf("��� ������� � Microsoft?\n1-����� ���;\n2-�������;\n3-����;\n");
			scanf_s("%d", &flag);
			if (flag > 3)
			{
				printf("������ �������� �� ����������.��������� ����!\n");
				goto start;
			}

			if (flag == 1)
			{
				printf("C++\n");
			}
			else if (flag == 2 || flag == 3)
			{
				printf("Java\n");
			}

		}
		if (flag == 5)
		{
			printf("1-������(��,��� �� ���������;\n2-��������(������������)\n)");
			scanf_s("%d", &flag);
			if (flag > 2)
			{
				printf("������ �������� �� ����������.��������� ����!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("���� �������� ��...\n1-�������;\n2-����������");
				scanf_s("%d", &flag);
				if (flag == 1)
				{
					printf("������ ����������� ���-�� �����,�� �� ����� ���������?\n1-��;\n2-�� ����;\n3-���\n");
					scanf_s("%d", &flag);
					if (flag > 3)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVASCRIPT\n");
					}
					if (flag == 2 || flag == 3)
					{
						printf("����� � ��� ������� �������?\n1-LEGO;\n2-���������;\n3-����������,�� ������� �����\n");
						scanf_s("%d", &flag);
						if (flag > 3)
						{
							printf("������ �������� �� ����������.��������� ����!\n");
							goto start;
						}
						if (flag == 1)
						{
							printf("PYTHON\n");
						}
						if (flag == 2)
						{
							printf("RUBY\n");
						}
						if (flag == 3)
						{
							printf("PHP\n");
						}
					}
				}
				if (flag == 2)
				{
					printf("���� �������� �� ����������\n");
					printf("��� ������� � Microsoft?\n1-����� ���;\n2-�������;\n3-����;\n");
					scanf_s("%d", &flag);
					if (flag > 3)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("C++\n");
					}
					else if (flag == 2 || flag == 3)
					{
						printf("Java\n");
					}
				}
			}
		}
	}
	case 3:
	{
		printf("PYTHON\n");
	}
	break;
	case 4:
	{
		printf("��� ���� ���� �� �������?\n1-���,������ ���� ������;\n2-��\n");
		scanf_s("%d", &flag);
		if (flag > 3)
		{
			printf("������ �������� �� ����������.��������� ����!\n");
			goto start;
		}
		if (flag == 1)
		{
			printf("��� �������� ������...\n1-������� ��������;\n2-������ ��������;\n3-����������� ��������;\n4-����� ������� ����(�� ����� ����� �����)");
			scanf_s("%d", &flag);
			if (flag == 1)
			{
				printf("PYTHON\n");
			}
			if (flag == 2)
			{
				printf("PYTHON\n");
			}
			if (flag == 3)
			{
				printf("����� ������� �������?\n1-�������;\n2-������;\n");
				scanf_s("%d", &flag);
				if (flag > 2)
				{
					printf("������ �������� �� ����������.��������� ����!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("JAVA\n");
				}
				if (flag == 2)
				{
					printf("C\n");
				}
				if (flag == 4)
				{
					printf("C++");
				}
			}

		}
		else if (flag == 2)
		{
			printf("����� ��������� ��� �����?\n1-3D����;\n2-����.����;\n3-���������;\n4-���\n");
			scanf_s("%d", &flag);
			if (flag > 4)
			{
				printf("������ �������� �� ����������.��������� ����!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("C++\n");
			}
			if (flag == 2)
			{
				printf("��� ������� � Microsoft?\n1-����� ���;\n2-�������;\n3-����;\n");
				scanf_s("%d", &flag);

				if (flag == 1)
				{
					printf("C++\n");
				}
				else if (flag == 2 || flag == 3)
				{
					printf("Java\n");
				}
			}
			if (flag == 3)
			{
				printf("����� ��?\n1-IOS;\n2-Android;\n");
				scanf_s("%d", &flag);
				if (flag > 2)
				{
					printf("������ �������� �� ����������.��������� ����!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("OBJECTIVE-C\n");
				}
				if (flag == 2)
				{
					printf("JAVA\n");
				}
			}
			if (flag == 4)
			{
				printf("��� ������ ����� �������� � �������� ������� ,��� Twitter?\n1-��;\n2-���\n");
				scanf_s("%d", &flag);
				if (flag > 2)
				{
					printf("������ �������� �� ����������.��������� ����!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("JAVASCRIPT\n");
				}
				if (flag == 2)
				{
					printf("������ ����������� ���-�� �����,�� �� ����� ���������?\n1-��;\n2-�� ����;\n3-���\n");
					scanf_s("%d", &flag);
					if (flag > 3)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVASCRIPT\n");
					}
					if (flag == 2 || flag == 3)
					{
						printf("����� � ��� ������� �������?\n1-LEGO;\n2-���������;\n3-����������,�� ������� �����\n");
						scanf_s("%d", &flag);
						if (flag > 3)
						{
							printf("������ �������� �� ����������.��������� ����!\n");
							goto start;
						}
						if (flag == 1)
						{
							printf("PYTHON\n");
						}
						if (flag == 2)
						{
							printf("RUBY\n");
						}
						if (flag == 3)
						{
							printf("PHP\n");
						}
					}

				}
			}
		}
	}
	break;
	case 5:
	{
		{
			printf("��� ���� ���� �� �������?\n1-���,������ ���� ������;\n2-��\n");
			scanf_s("%d", &flag);
			if (flag > 2)
			{
				printf("������ �������� �� ����������.��������� ����!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("��� �������� ������...\n1-������� ��������;\n2-������ ��������;\n3-����������� ��������;\n4-����� ������� ����(�� ����� ����� �����)");
				scanf_s("%d", &flag);
				if (flag > 4)
				{
					printf("������ �������� �� ����������.��������� ����!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("PYTHON\n");
				}
				if (flag == 2)
				{
					printf("PYTHON\n");
				}
				if (flag == 3)
				{
					printf("����� ������� �������?\n1-�������;\n2-������;\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVA\n");
					}
					if (flag == 2)
					{
						printf("C\n");
					}
					if (flag == 4)
					{
						printf("C++");
					}
				}

			}
			else if (flag == 2)
			{
				printf("����� ��������� ��� �����?\n1-3D����;\n2-����.����;\n3-���������;\n4-���\n");
				scanf_s("%d", &flag);
				if (flag > 4)
				{
					printf("������ �������� �� ����������.��������� ����!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("C++\n");
				}
				if (flag == 2)
				{
					printf("��� ������� � Microsoft?\n1-����� ���;\n2-�������;\n3-����;\n");
					scanf_s("%d", &flag);

					if (flag == 1)
					{
						printf("C++\n");
					}
					else if (flag == 2 || flag == 3)
					{
						printf("Java\n");
					}
				}
				if (flag == 3)
				{
					printf("����� ��?\n1-IOS;\n2-Android;\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("OBJECTIVE-C\n");
					}
					if (flag == 2)
					{
						printf("JAVA\n");
					}
				}
				if (flag == 4)
				{
					printf("��� ������ ����� �������� � �������� ������� ,��� Twitter?\n1-��;\n2-���\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVASCRIPT\n");
					}
					if (flag == 2)
					{
						printf("������ ����������� ���-�� �����,�� �� ����� ���������?\n1-��;\n2-�� ����;\n3-���\n");
						scanf_s("%d", &flag);
						if (flag > 3)
						{
							printf("������ �������� �� ����������.��������� ����!\n");
							goto start;
						}
						if (flag == 1)
						{
							printf("JAVASCRIPT\n");
						}
						if (flag == 2 || flag == 3)
						{
							printf("����� � ��� ������� �������?\n1-LEGO;\n2-���������;\n3-����������,�� ������� �����\n");
							scanf_s("%d", &flag);
							if (flag > 3)
							{
								printf("������ �������� �� ����������.��������� ����!\n");
								goto start;
							}
							if (flag == 1)
							{
								printf("PYTHON\n");
							}
							if (flag == 2)
							{
								printf("RUBY\n");
							}
							if (flag == 3)
							{
								printf("PHP\n");
							}
						}

					}
				}
			}
		}
		break;
	case 6:
	{
		{
			printf("��� ���� ���� �� �������?\n1-���,������ ���� ������;\n2-��\n");
			scanf_s("%d", &flag);
			if (flag > 2)
			{
				printf("������ �������� �� ����������.��������� ����!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("��� �������� ������...\n1-������� ��������;\n2-������ ��������;\n3-����������� ��������;\n4-����� ������� ����(�� ����� ����� �����)");
				scanf_s("%d", &flag);
				if (flag > 4)
				{
					printf("������ �������� �� ����������.��������� ����!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("PYTHON\n");
				}
				if (flag == 2)
				{
					printf("PYTHON\n");
				}
				if (flag == 3)
				{
					printf("����� ������� �������?\n1-�������;\n2-������;\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVA\n");
					}
					if (flag == 2)
					{
						printf("C\n");
					}
					if (flag == 4)
					{
						printf("C++");
					}
				}

			}
			else if (flag == 2)
			{
				printf("����� ��������� ��� �����?\n1-3D����;\n2-����.����;\n3-���������;\n4-���\n");
				scanf_s("%d", &flag);
				if (flag > 4)
				{
					printf("������ �������� �� ����������.��������� ����!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("C++\n");
				}
				if (flag == 2)
				{
					printf("��� ������� � Microsoft?\n1-����� ���;\n2-�������;\n3-����;\n");
					scanf_s("%d", &flag);

					if (flag == 1)
					{
						printf("C++\n");
					}
					else if (flag == 2 || flag == 3)
					{
						printf("Java\n");
					}
				}
				if (flag == 3)
				{
					printf("����� ��?\n1-IOS;\n2-Android;\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("OBJECTIVE-C\n");
					}
					if (flag == 2)
					{
						printf("JAVA\n");
					}
				}
				if (flag == 4)
				{
					printf("��� ������ ����� �������� � �������� ������� ,��� Twitter?\n1-��;\n2-���\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("������ �������� �� ����������.��������� ����!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVASCRIPT\n");
					}
					if (flag == 2)
					{
						printf("������ ����������� ���-�� �����,�� �� ����� ���������?\n1-��;\n2-�� ����;\n3-���\n");
						scanf_s("%d", &flag);
						if (flag > 3)
						{
							printf("������ �������� �� ����������.��������� ����!\n");
							goto start;
						}
						if (flag == 1)
						{
							printf("JAVASCRIPT\n");
						}
						if (flag == 2 || flag == 3)
						{
							printf("����� � ��� ������� �������?\n1-LEGO;\n2-���������;\n3-����������,�� ������� �����\n");
							scanf_s("%d", &flag);
							if (flag > 3)
							{
								printf("������ �������� �� ����������.��������� ����!\n");
								goto start;
							}
							if (flag == 1)
							{
								printf("PYTHON\n");
							}
							if (flag == 2)
							{
								printf("RUBY\n");
							}
							if (flag == 3)
							{
								printf("PHP\n");
							}
						}

					}
				}
			}
		}
		break;
	default:
		break;
	}
	}
	}
	system("pause");
}
