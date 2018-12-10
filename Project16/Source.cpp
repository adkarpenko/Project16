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
	printf("Ваш выбор?\n1-Для детей;\n2-Заработать;\n3-Я не знаю выберите за меня\n4-Поразвлечься\n5-Интересно;\n6-Саморазвитие;\n");
	scanf_s("%d", &ch);
	switch (ch)
	{
	case 1:
	{
		printf("Начните со Strach,затем Python\n");
	}
	break;
	case 2:
	{
		printf("1-Найти работу;\n2-У меня есть идея для стартапа");
		printf("Какая платформа или сфера?\n1-я просто хочу денег;\n2-3Dигры;\n3-Корп.софт;\n4-Мобильная;\n5-Веб;\n");
		scanf_s("%d", &flag);

		if (flag > 5)
		{
			printf("Такого варианта не существует.Повторите ввод!\n");
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
			printf("Какая ОС?\n1-IOS;\n2-Android;\n");
			scanf_s("%d", &flag);

			if (flag > 3)
			{
				printf("Такого варианта не существует.Повторите ввод!\n");
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
			printf("Что скажете о Microsoft?\n1-люблю его;\n2-Неплохо;\n3-Фууу;\n");
			scanf_s("%d", &flag);
			if (flag > 3)
			{
				printf("Такого варианта не существует.Повторите ввод!\n");
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
			printf("1-Бэкенд(то,что за вебсайтом;\n2-Фронтенд(вебинтерфейс)\n)");
			scanf_s("%d", &flag);
			if (flag > 2)
			{
				printf("Такого варианта не существует.Повторите ввод!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("Хочу работать на...\n1-стартап;\n2-корпорацию");
				scanf_s("%d", &flag);
				if (flag == 1)
				{
					printf("Хотите попробовать что-то новое,но не очень трудоёмкое?\n1-Да;\n2-Не знаю;\n3-Нет\n");
					scanf_s("%d", &flag);
					if (flag > 3)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVASCRIPT\n");
					}
					if (flag == 2 || flag == 3)
					{
						printf("Какая у вас любимая игрушка?\n1-LEGO;\n2-Пластилин;\n3-Старенький,но любимый мишка\n");
						scanf_s("%d", &flag);
						if (flag > 3)
						{
							printf("Такого варианта не существует.Повторите ввод!\n");
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
					printf("Хочу работать на корпорацию\n");
					printf("Что скажете о Microsoft?\n1-люблю его;\n2-Неплохо;\n3-Фууу;\n");
					scanf_s("%d", &flag);
					if (flag > 3)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
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
		printf("Уже есть идея на миллион?\n1-Нет,просто хочу начать;\n2-Да\n");
		scanf_s("%d", &flag);
		if (flag > 3)
		{
			printf("Такого варианта не существует.Повторите ввод!\n");
			goto start;
		}
		if (flag == 1)
		{
			printf("Мне нравится учится...\n1-Простым способом;\n2-Лучшим способом;\n3-Трудненьким способом;\n4-Очень сложный путь(но потом будет легче)");
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
				printf("Какая коробка передач?\n1-автомат;\n2-ручная;\n");
				scanf_s("%d", &flag);
				if (flag > 2)
				{
					printf("Такого варианта не существует.Повторите ввод!\n");
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
			printf("Какая платформа или сфера?\n1-3Dигры;\n2-Корп.софт;\n3-Мобильная;\n4-Веб\n");
			scanf_s("%d", &flag);
			if (flag > 4)
			{
				printf("Такого варианта не существует.Повторите ввод!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("C++\n");
			}
			if (flag == 2)
			{
				printf("Что скажете о Microsoft?\n1-люблю его;\n2-Неплохо;\n3-Фууу;\n");
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
				printf("Какая ОС?\n1-IOS;\n2-Android;\n");
				scanf_s("%d", &flag);
				if (flag > 2)
				{
					printf("Такого варианта не существует.Повторите ввод!\n");
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
				printf("Ваш сервис будет работать в реальном времени ,как Twitter?\n1-Да;\n2-Нет\n");
				scanf_s("%d", &flag);
				if (flag > 2)
				{
					printf("Такого варианта не существует.Повторите ввод!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("JAVASCRIPT\n");
				}
				if (flag == 2)
				{
					printf("Хотите попробовать что-то новое,но не очень трудоёмкое?\n1-Да;\n2-Не знаю;\n3-Нет\n");
					scanf_s("%d", &flag);
					if (flag > 3)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVASCRIPT\n");
					}
					if (flag == 2 || flag == 3)
					{
						printf("Какая у вас любимая игрушка?\n1-LEGO;\n2-Пластилин;\n3-Старенький,но любимый мишка\n");
						scanf_s("%d", &flag);
						if (flag > 3)
						{
							printf("Такого варианта не существует.Повторите ввод!\n");
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
			printf("Уже есть идея на миллион?\n1-Нет,просто хочу начать;\n2-Да\n");
			scanf_s("%d", &flag);
			if (flag > 2)
			{
				printf("Такого варианта не существует.Повторите ввод!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("Мне нравится учится...\n1-Простым способом;\n2-Лучшим способом;\n3-Трудненьким способом;\n4-Очень сложный путь(но потом будет легче)");
				scanf_s("%d", &flag);
				if (flag > 4)
				{
					printf("Такого варианта не существует.Повторите ввод!\n");
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
					printf("Какая коробка передач?\n1-автомат;\n2-ручная;\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
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
				printf("Какая платформа или сфера?\n1-3Dигры;\n2-Корп.софт;\n3-Мобильная;\n4-Веб\n");
				scanf_s("%d", &flag);
				if (flag > 4)
				{
					printf("Такого варианта не существует.Повторите ввод!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("C++\n");
				}
				if (flag == 2)
				{
					printf("Что скажете о Microsoft?\n1-люблю его;\n2-Неплохо;\n3-Фууу;\n");
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
					printf("Какая ОС?\n1-IOS;\n2-Android;\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
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
					printf("Ваш сервис будет работать в реальном времени ,как Twitter?\n1-Да;\n2-Нет\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVASCRIPT\n");
					}
					if (flag == 2)
					{
						printf("Хотите попробовать что-то новое,но не очень трудоёмкое?\n1-Да;\n2-Не знаю;\n3-Нет\n");
						scanf_s("%d", &flag);
						if (flag > 3)
						{
							printf("Такого варианта не существует.Повторите ввод!\n");
							goto start;
						}
						if (flag == 1)
						{
							printf("JAVASCRIPT\n");
						}
						if (flag == 2 || flag == 3)
						{
							printf("Какая у вас любимая игрушка?\n1-LEGO;\n2-Пластилин;\n3-Старенький,но любимый мишка\n");
							scanf_s("%d", &flag);
							if (flag > 3)
							{
								printf("Такого варианта не существует.Повторите ввод!\n");
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
			printf("Уже есть идея на миллион?\n1-Нет,просто хочу начать;\n2-Да\n");
			scanf_s("%d", &flag);
			if (flag > 2)
			{
				printf("Такого варианта не существует.Повторите ввод!\n");
				goto start;
			}
			if (flag == 1)
			{
				printf("Мне нравится учится...\n1-Простым способом;\n2-Лучшим способом;\n3-Трудненьким способом;\n4-Очень сложный путь(но потом будет легче)");
				scanf_s("%d", &flag);
				if (flag > 4)
				{
					printf("Такого варианта не существует.Повторите ввод!\n");
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
					printf("Какая коробка передач?\n1-автомат;\n2-ручная;\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
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
				printf("Какая платформа или сфера?\n1-3Dигры;\n2-Корп.софт;\n3-Мобильная;\n4-Веб\n");
				scanf_s("%d", &flag);
				if (flag > 4)
				{
					printf("Такого варианта не существует.Повторите ввод!\n");
					goto start;
				}
				if (flag == 1)
				{
					printf("C++\n");
				}
				if (flag == 2)
				{
					printf("Что скажете о Microsoft?\n1-люблю его;\n2-Неплохо;\n3-Фууу;\n");
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
					printf("Какая ОС?\n1-IOS;\n2-Android;\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
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
					printf("Ваш сервис будет работать в реальном времени ,как Twitter?\n1-Да;\n2-Нет\n");
					scanf_s("%d", &flag);
					if (flag > 2)
					{
						printf("Такого варианта не существует.Повторите ввод!\n");
						goto start;
					}
					if (flag == 1)
					{
						printf("JAVASCRIPT\n");
					}
					if (flag == 2)
					{
						printf("Хотите попробовать что-то новое,но не очень трудоёмкое?\n1-Да;\n2-Не знаю;\n3-Нет\n");
						scanf_s("%d", &flag);
						if (flag > 3)
						{
							printf("Такого варианта не существует.Повторите ввод!\n");
							goto start;
						}
						if (flag == 1)
						{
							printf("JAVASCRIPT\n");
						}
						if (flag == 2 || flag == 3)
						{
							printf("Какая у вас любимая игрушка?\n1-LEGO;\n2-Пластилин;\n3-Старенький,но любимый мишка\n");
							scanf_s("%d", &flag);
							if (flag > 3)
							{
								printf("Такого варианта не существует.Повторите ввод!\n");
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
