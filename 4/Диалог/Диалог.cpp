#include <iostream>
#include <iomanip>
#include <windows.h>
int main()
{
	setlocale(LC_ALL,"Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, d; char food[20], book[20], doing[20], walk[20];
	printf("Начните диалог (1-Привет!;2-Как дела?;3-Какие новости?;4-Как самочувствие?):\n"); scanf_s("%d", &x);
	switch (x)
	{
	case 1:puts("Привет!Как дела?\n"); break;
	case 2:puts("Неплохо!А у тебя?\n"); break;
	case 3:puts("Ничего особенного не произошло. А у тебя что нового? Как настроение?\n"); break;
	case 4:puts("Прекрасно! А как у тебя дела?\n"); break;
	default:puts("Выбран неверный вариант.\n"); main(); break;
	}
		printf("1-Отлично!;2-Так себе...;3-Плохо...\n"); scanf_s("%d", &x);
		switch (x)
		{
		case 1:puts("Прекрасно! Очень рад за тебя.Чем думаешь заняться?\n"); break;
		case 2:puts("Надеюсь, всё будет хорошо.Что будешь делать?\n"); break;
		case 3:puts("Не следует расстраиваться!Всё образуется. Чем думаешь отвлечься?\n"); break; 
		default:puts("Выбран неверный вариант."); main(); break;
		}
		printf("1-Хочу отдохнуть;2-Хочу перекусить;3-Читать книгу;4-Пойду прогуляюсь\n"); scanf_s("%d", &x);
		switch (x)
		{
		case 1:puts("Неплохо.Как будешь отдыхать?(введите название без пробелов)\n"); break;
		case 2:puts("А что ты будешь есть?(введите название без пробелов)\n"); break;
		case 3:puts("Надеюсь, книга интересная?(введите название без пробелов)\n"); break;
		default:puts("Куда пойдёшь?(введите название места без пробелов)"); break;
		}
		if (x == 1)
		{
			scanf_s("%s", doing, 20);
			printf("Хммм,% s", doing); printf(",звучит захватывающе! Приятного отдыха!");
		}
		if (x == 2)
		{
			scanf_s("%s", food, 20);
			printf("МММ,% s", food); printf(",вкуснятина! Ну тогда приятного аппетита!");
		}
		if (x == 3)
		{
			scanf_s("%s", book, 20);
			printf("Неплохо,% s", book); printf(" - звучит интересно!Приятного чтения!");
		}
		if (x == 4)
		{
			scanf_s("%s", walk, 20);
			printf("В % s", walk); printf(" - хорошая идея! Удачной прогулки!");
		}
}
