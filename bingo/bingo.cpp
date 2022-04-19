#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void init_shuffle(int(*user1)[5], int(*user2)[5]) //2���� �迭 �ѱ�� (Call by reference)
{
	srand(time(NULL));
	int i, j, k, w = 0, tmp, picked[25] = { 0 }; //picked �迭�� ���� �� ���� ����
	bool flag = false; //picked �迭�� �̹� ����� ���ڰ� ���� ��� true

	for (i = 0; i < 5; i++) { //user1 ������ ����

		for (j = 0; j < 5; j++) {

			while (1) {

				tmp = (rand() % 50) + 1;

				for (k = 0; k < 25; k++) {

					if (tmp == picked[k]) flag = true;

				}

				if (flag) {

					flag = false;

					continue; //�ߺ��̸� �ٽ� while ù �κ�����

				}

				else {

					picked[w++] = user1[i][j] = tmp;

					break;    //���ߺ��̸� ������ �����ϰ� while ��Ż

				}

			}

		}

	}



	w = 0;

	for (i = 0; i < 25; i++) {

		picked[i] = 0;

	}



	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			while (1)
			{
				tmp = (rand() % 50) + 1;

				for (k = 0; k < 25; k++)
				{
					if (tmp == picked[k]) flag = true;
				}
				if (flag)
				{
					flag = false;
					continue;
				}
				else
				{
					picked[w++] = user2[i][j] = tmp;
					break;
				}

			}

		}

	}

}

void prnt_map(int(*user1)[5], int(*user2)[5])

{

	int i, j;



	system("cls");

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {

			if (user1[i][j] == 0) printf("\t*");

			else printf("\t%d", user1[i][j]);

		}

		printf("\n");

	}

	printf("\n\n\n");

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {

			if (user2[i][j] == 0) printf("\t*");

			else printf("\t%d", user2[i][j]);

		}

		printf("\n");

	}

}

int check_bingo(int user[5][5]) //2���� �迭 �ѱ�� (Call by value)

{

	int i, j, sum = 0, bingo = 0;;



	for (i = 0; i < 5; i++) 
	{

		for (j = 0; j < 5; j++) 
		{

			sum += user[i][j];

		}

		if (sum == 0) 
		{

			bingo++;

		}

		else         sum = 0;

	}



	for (j = 0; j < 5; j++) 
	{

		for (i = 0; i < 5; i++) 
		{

			sum += user[i][j];

		}

		if (sum == 0) 
		{

			bingo++;

		}

		else         sum = 0;

	}



	sum = 0;

	for (i = 0; i < 5; i++) 
	{
		sum += user[i][i];
	}

	if (sum == 0) 
	{
		bingo++;
	}

	else  sum = 0;



	sum = 0;

	for (i = 4, j = 0; i > -1, j < 5; i--, j++) {

		sum += user[i][j];

	}

	if (sum == 0) {

		bingo++;

	}



	return bingo;

}

void call_number(int(*user1)[5], int(*user2)[5])

{

	int i, j, num;

	bool flag = false;



	while (!flag) {

		printf("�Է��ض� : ");

		scanf("%d", &num);



		for (i = 0; i < 5; i++) {

			for (j = 0; j < 5; j++) {

				if (num == user1[i][j]) {

					user1[i][j] = 0;

					flag = true;

				}

			}

		}

		if (!flag) printf("���� ���ڴ�.\n");

		else {

			for (i = 0; i < 5; i++) {

				for (j = 0; j < 5; j++) {

					if (num == user2[i][j]) user2[i][j] = 0;

				}

			}

		}

	}

}

void computers_revange(int(*user)[5], int(*followed)[5])

{

	int i, j, ind, tmp_cmp, tmp_gst, AIpick, cnt = 0, compr[12] = { 0 }, ghost[12];



	for (i = 0; i < 12; i++) {

		ghost[i] = i;

	}



	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {

			if (user[i][j] == 0) {

				compr[cnt]++;

			}

		}

		cnt++;

	}



	for (j = 0; j < 5; j++) {

		for (i = 0; i < 5; i++) {

			if (user[i][j] == 0) {

				compr[cnt]++;

			}

		}

		cnt++;

	}



	for (i = 0; i < 5; i++) {

		if (user[i][i] == 0) {

			compr[cnt]++;

		}

	}

	cnt++;



	for (i = 4, j = 0; i > -1, j < 5; i--, j++) {

		if (user[i][j] == 0) {

			compr[cnt]++;

		}

	}



	for (i = 0; i < 11; i++) {

		for (j = i + 1; j < 12; j++) {

			if (compr[i] < compr[j]) {

				tmp_cmp = compr[i];

				tmp_gst = ghost[i];

				compr[i] = compr[j];

				ghost[i] = ghost[j];

				compr[j] = tmp_cmp;

				ghost[j] = tmp_gst;

			}

		}

	}

	for (i = 0; i < 12; i++) printf("%d ", compr[i]);



	for (i = 0; i < 12; i++) {

		if (compr[i] < 5) {

			ind = ghost[i];

			break;

		}

		else continue;

	}



	if (ind >= 0 && ind < 5) {

		for (i = 0; i < 5; i++) {

			if (user[ind][i] != 0) {

				AIpick = user[ind][i];

				user[ind][i] = 0;

				break;

			}

			else continue;

		}

	}

	else if (ind >= 5 && ind < 10) {

		for (i = 0; i < 5; i++) {

			if (user[i][ind - 5] != 0) {

				AIpick = user[i][ind - 5];

				user[i][ind - 5] = 0;

				break;

			}

			else continue;

		}

	}

	else if (ind == 10) {

		for (i = 0; i < 5; i++) {

			if (user[i][i] != 0) {

				AIpick = user[i][i];

				user[i][i] = 0;

				break;

			}

			else continue;

		}

	}

	else {

		for (i = 4, j = 0; i > -1, j < 5; i--, j++) {

			if (user[i][j] != 0) {

				AIpick = user[i][i];

				user[i][j] = 0;

				break;

			}

			else continue;

		}

	}



	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {

			if (followed[i][j] == AIpick) {

				followed[i][j] = 0;

			}

		}

	}

}

int main()

{
	int user1[5][5];
	int user2[5][5];
	int a = 0;

	init_shuffle(user1, user2); //���� �� ����
	prnt_map(user1, user2);



	while (check_bingo(user1) <= 4 && check_bingo(user2) <= 4) {

		call_number(user1, user2);

		computers_revange(user2, user1);

		prnt_map(user1, user2);

		printf("�� ���� = %d\t�� ���� = %d\n", check_bingo(user1), check_bingo(user2));

	}



	if (check_bingo(user1) == check_bingo(user2)) printf("����\n");

	else if (check_bingo(user1) > check_bingo(user2)) printf("�̰��\n");

	else printf("����\n");

	return 0;

}