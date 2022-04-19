#include <stdio.h> // ǥ������� ���̺귯�� // �ּ� : �����Ϸ��� �м����� �ʴ� ����.
#include <stdlib.h>
#include <time.h>
// ���̺귯�� : �ʿ��� �� �Լ��� ������ ���� ���� �ʿ��� ��.
#define PI 3.141592 // ��ȣ��� : �����Ͻÿ� ��ȣ�� �ִ°��� �ش� ���� �־���.

#pragma region �� ���� ��

// �μ��� ���� ���ϴ� ���α׷�.
void SumMain() // ����� ���� �Լ� : ���� ���� �Լ�.
{
	// ���� : �����͸� �����ϴ� ����
	// Ÿ�� : float, double(�Ǽ�), int(����), char(����) 
	int a = 10; // �ʱ�ȭ : ���������� �����͸� ����.
	int b = 20;
	int c = a + b;
	printf("%d + %d = %d\n", a, b, c); // ���̺귯�� �Լ� : ���̺귯���� �����ϴ� �Լ�.
}

#pragma endregion

#pragma region �� ���� ���ϱ�

// ���� �������ϱ�.(��, ������ ������ * ������ * ������(3.141592)�̴�.)
// ������ : ������(���� : int), ������(�Ǽ� : float), ���� ����(�Ǽ�) ->
// �˰��� : ���� �������� �Է¹޴´�. 
// ���� ���� = ������ * ������ * ������
// ��� ���Ĵ�� ���� �۵��ϴ��� Ȯ���ϱ� ���� ��� ������ ���� �������� ����Ѵ�.
void CircleAreaMain() // ���� ������ �輢�ϴ� ���α׷�	
{
	int radius = 0; // ���� ������
	const float pi = 3.141592; // ������ // ������� : �ʱ�ȭ�� ���� ������ �� ���� ����.
	// pi = 2; // ��������� �����Ϸ� �õ��ϸ� ������ ������ ��.
	float area; // ���� ����

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%d", &radius);
	area = radius * radius * PI; // area = radius * radius * 3.141592; // �����ϵɶ� �̷������� ġȯ�ȴ�.
	// area = radius * radius * pi;
	printf("%d * %d * %f = %f\n", radius, radius, pi, area);
}

#pragma endregion

#pragma region ������ Ÿ��

// ���� Ÿ�԰� ������ ũ�⸦ ����Ͽ���
// (��, sizeof()�� �̿��ϸ� ũ�⸦ �� �� �ִ�.)
// int x, char, int, short, long, float, double
void ValSizeMain()
{
	int x;

	printf("x : %d\n", sizeof(x));
	printf("char : %d\n", sizeof(char));
	printf("int : %d\n", sizeof(int));
	printf("short : %d\n", sizeof(short));
	printf("long : %d\n", sizeof(long));
	printf("float : %d\n", sizeof(float));
	printf("double : %d\n", sizeof(double));
	printf("bool : %d\n", sizeof(bool));
}

#pragma endregion

#pragma region �ƽ�Ű�ڵ�

// 0 ~ 128
void ASCIICodeTestMain()
{
	for (int i = 0; i < 128; i++)
	{
		printf("%d:%c, ", i, i);
		if (i % 12 == 0)
		{
			printf("\n");
		}
	}
}

#pragma endregion

#pragma region ���� �ð� ���ϱ�

// �¾�� ���������� �Ÿ��� d�̰�,
// ���� �ӵ��� s�� ��,
// �¾翡�� ������ ��� �ð� t�� ���Ͽ���.
// ������ : distance, speed, time -> ���� : int // ����, float // �Ǽ�, charX // ����x
// �˰��� : t = d / s
// ����(=����� �´��� Ȯ��)�� �ؾ��Ѵ�. -> ����x, �Ǽ�o -> ������ �������� �����Ƿ� float
void LightSpeedMain()
{
	float s = 300000; // s : 30�� km/s
	float d = 149600000; // d : 14960��km
	float t; // t : �ʴ���
	t = d / s;
	printf("������ ��� �ð� : %f�� = �¾�� ���������� �Ÿ� : %.0f / ���� �ӵ� : %.0f\n", t, d, s);

	// ��ȭ : t�� �� �ʷ� ��Ÿ������
	int min, sec;
	min = t / 60;
	sec = (int)t % 60;
	printf("������ ��� �ð� : %d��, %d��", min, sec);
}

#pragma endregion

#pragma region ����, ���� ������

// ���� ������ ++data, ���� ������ data++
// �������� ���� ���� �����ڿ� ���� �������� �������� Ȯ���ϴ� ���α׷�
// ������ : ������ 2���� �ʿ��ϴ� -> nDataA, nDataB -> ����
// �˰��� : nDataB = --nDataA, nDataB = nDataA++
void IncDecTestMain()
{
	int nDataA = 10;
	int nDataB = nDataA; // 10
	printf("1.nDataA/B:%d/%d\n", nDataA, nDataB); // 10/10
	nDataB = nDataA++; // ���� ������ : ���Կ����ں��� �켱������ �����Ƿ�, ������ ���� ������ ���Եȴ�.
	printf("2.nDataA/B:%d/%d\n", nDataA, nDataB); // 11/10
	nDataB = --nDataA; // ���� ������ : ���Կ����ں��� �켱������ �����Ƿ�, �����ϰ� ���� ������ ���Եȴ�.
	printf("3.nDataA/B:%d/%d\n", nDataA, nDataB); // 10/10
}

#pragma endregion

#pragma region ���� ��� ���α׷�

// ������ �Է¹޾Ƽ� ������ ����ϴ� ���α׷�
// (A: 90���̻� B: 80���̻� C: 70���̻� D: 60���̻� F: 60���̸�)
// ������ : ����->����, ����->����
// �˰���: �Է¹��� ������( A: 90���̻� B: 80���̻� C: 70���̻� D: 60���̻� F: 60���̸�)�� �ش�Ǹ� ������ ����ϱ�
void GradeTestMain()
{
	int nScore;
	char cGrade;

	printf("Score:");
	scanf("%d", &nScore);

	if (nScore >= 90)
	{
		cGrade = 'A';
	}
	else if (nScore >= 80)
	{
		cGrade = 'B';
	}
	else if (nScore >= 70)
	{
		cGrade = 'C';
	}
	else if (nScore >= 60)
	{
		cGrade = 'D';
	}
	else if (nScore < 80)
	{
		cGrade = 'E';
	}

	printf("Score/Grade:%d/%c", nScore, cGrade);
}

#pragma endregion

#pragma region ���� �����

// �Ի�� �����
// 1. ���� -> (����:����:����?�Ǽ�!)�� (������:����:����)�� (�Է�:scanf)�ϸ� �� (���:����:�Ǽ�)�� ����ϴ� ���
// 2. �����ڴ� ��Ģ���길 �����ϴ�(+, -, *, /)
// 3. ������ �ϱ����ؼ� �ּ� 2���� ������ �ʿ��ϹǷ� 2���� ����Ѵ�.
// 4. ����� ������ ������ (�ݺ�)�ؼ� ����� �Է��ϰ�, Ȯ���� �� �ִ�.
// ������: ����A, ����B, ������, ���
// �˰���: ���ڿ� �����ڸ� �Է¹ް�, 
// �Է¹��� �����ڰ� + �� �� ���� ���Ͽ� ����� �ִ´�.
// �Է¹��� �����ڰ� - �� �� ���� ���� ����� �ִ´�.
// �Է¹��� �����ڰ� * �� �� ���� ���Ͽ� ����� �ִ´�.
// �Է¹��� �����ڰ� / �� �� ���� ������ ����� �ִ´�.
void CalculatorMain()
{
	float fDataA, fDataB, fresult;
	char cOp;
	printf("ex) 1 + 1 >> ");
	scanf("%f %c %f", &fDataA, &cOp, &fDataB);
	if (cOp == '+')
	{
		fresult = fDataA + fDataB;
	}
	else if (cOp == '-')
	{
		fresult = fDataA - fDataB;
	}
	else if (cOp == '*')
	{
		fresult = fDataA * fDataB;
	}
	else if (cOp == '/')
	{
		fresult = fDataA / fDataB;
	}
	else
	{
		printf("%c is not Support!\n", cOp);
		return;
	}

	printf("%f %c %f = %f", fDataA, cOp, fDataB, fresult);
}

void CalculatorSwitchMain()
{
	float fDataA, fDataB, fresult;
	char cOp;
	printf("ex) 1 + 1 >> ");
	scanf("%f %c %f", &fDataA, &cOp, &fDataB);
	switch (cOp)
	{
	case '+':
		fresult = fDataA + fDataB;
		break;
	case '-':
		fresult = fDataA - fDataB;
		break;
	case '*':
		fresult = fDataA * fDataB;
		break;
	case '/':
		fresult = fDataA / fDataB;
		break;
	default:
		printf("%c is not Support!\n", cOp);
		return;
		break;
	}

	printf("%f %c %f = %f", fDataA, cOp, fDataB, fresult);
}

void CalculatorLoofMain()
{
	float fDataA, fDataB, fresult; // �Ǽ��� ���� fDataA, fDataB, fresult�� �����ϰ� �ʱ�ȭ ���� �ʾ����Ƿ� ���� �� �� ����.
	char cOp = 0; // ������ ���� cOp�� �����ϰ� �ʱ�ȭ ���� �ʾ����Ƿ� ���� �� �� ����.

	while (cOp != 'x') // �ݺ������� ��ȣ���� ������ ���� ���ȿ� �߰�ȣ �ȿ� �ִ� �ڵ带 �ݺ� �����Ѵ�.
	{
		printf("ex) 1 + 1  exit) ? x ? >> "); // ū����ǥ �ȿ� �ִ� ���ڸ� ����ϴ� �Լ��̴�.
		scanf("%f %c %f", &fDataA, &cOp, &fDataB); // fDataA, cOp, fData�� ���� �Է��ϴ� �Լ��̴�.

		if (cOp == 'x') // ���� cOp�� x��� �����Ѵ�.
		{
			break; // if���� �������´�.
		}
		switch (cOp) 
		{
		case '+': // cOp�� +�� ��� �Ʒ��� �ִ� �ڵ带 �����Ѵ�.
			fresult = fDataA + fDataB; // fresult�� fDataA + fDataB�� ���� �����Ѵ�.
			break; // switch���� �������´�.
		case '-': // cOp�� -�� ��� �Ʒ��� �ִ� �ڵ带 �����Ѵ�.
			fresult = fDataA - fDataB; // fresult�� fDataA - fDataB�� ���� �����Ѵ�.
			break; // switch���� �������´�.
		case '*': // cOp�� *�� ��� �Ʒ��� �ִ� �ڵ带 �����Ѵ�.
			fresult = fDataA * fDataB; // fresult�� fDataA * fDataB�� ���� �����Ѵ�.
			break; // switch���� �������´�.
		case '/': // cOp�� /�� ��� �Ʒ��� �ִ� �ڵ带 �����Ѵ�.
			fresult = fDataA / fDataB; // fresult�� fDataA / fDataB�� ���� �����Ѵ�.
			break; // switch���� �������´�.
		default: // cOp�� +, -, *, /�� ��찡 �ƴ϶�� �Ʒ��� �ִ� �ڵ带 �����Ѵ�.
			printf("%c is not Support!\n", cOp); // ū����ǥ �ȿ� �ִ� ���ڸ� ����ϴ� �Լ��̴�.
			return; // 0�� ��ȯ�ϰ� �Լ��� ����ȴ�.
			break; // ���� return���� ���Ͽ� �Լ��� ����Ǿ��� ������ ��������ʰ� ����ȴ�.
		}

		printf("%f %c %f = %f", fDataA, cOp, fDataB, fresult); // ū����ǥ �ȿ� �ִ� ���ڸ� ����ϴ� �Լ��̴�.
	}
}

#pragma endregion

#pragma region ���� ���

// ������ 10������ ����ϰ� ������ ���� 100���� �̻��� �Ǵ� �ð���?
// ������ 1�ð����� 2�辿 �����Ѵ�.
// ������: ������ ��, �ð�
// �˰���: ������ 100���� �̻��� �� ������ 1�ð����� ������ �� * 2
// 1.�����Ϳ� �˰����� �и��Ѵ�.
// 2.�����ʹ� ���� �˰����� ����,�ݺ�,���� ���� ���յȴ�.
// 3.�ݺ��Ǵ� ���� ���� �ݺ��ϰ� ������ ����Ѵ�.

void BateriaMain()
{
	int nBateria = 10;
	int nTime = 0;

	nBateria = nBateria * 2;//20
	nTime = 1;

	nBateria = nBateria * 2;//40
	nTime = 2;

	nBateria = nBateria * 2;//80
	nTime = 3;

	nBateria = nBateria * 2;//160
	nTime = 4;

	printf("Time:%d\n", nTime);
}
// 4.�ݺ��Ǵ� ��Ģ���� ã�Ƽ� ���ѹݺ��� ���� �� �ݺ��� ������ ��� Ȯ���Ѵ�.
// (���α׷��Ӱ� �ƴ϶�� ���⼭ ���ĵ� ������. �׷��� ��ġ��(������� �þ�����)�� ������� �ɼ�����)
void BateriaWhileSub()
{
	int nBateria = 10;
	int nTime = 0;

	while (true)
	{
		nBateria = nBateria * 2;//20
		nTime = nTime + 1;
		printf("Bateria:%d Time:%d\n", nBateria, nTime);
		if (nBateria > 100) break;
	}
}
// 5.break���� ������ �ݴ�� if���� �ִ´�.(�ʰ�,�̸�:������  �̻�,����:����)
// ������ 10������ ����ϰ� ������ ���� 100���� �̻��� �Ǵ� �ð���?
// ������ 1�ð����� 2�辿 �����Ѵ�.
// ������: ������ ��, �ð�
// �˰���: ������ 100���� �̻��� �� ������ 1�ð����� ������ �� * 2
void BateriaWhileMain()
{
	int nBateria = 10;
	int nTime = 0;

	while (nBateria <= 100)
	{
		nBateria = nBateria * 2;//20
		nTime = nTime + 1;
		printf("Bateria:%d Time:%d\n", nBateria, nTime);
		//if (nBateria > 100) break;
	}
}

// (����:����) 10������ ����Ͽ� (10�ð� ��:����)�� ���ռ��� ���Ͽ���.
// �̶�, ������ (1�ð� ���� 4��)�� �����Ѵ� 
// ������ ��:10, �ð�:0, ���ռ�*=4
void BateriaCountMain()
{
	int nBateria = 10;
	int nTime = 0;

	while (nTime < 10)
	{
		nBateria = nBateria * 4;// 40
		nTime = nTime + 1;
		printf("Bateria:%d Time:%d\n", nBateria, nTime);
	}
}

#pragma endregion

#pragma region ���� ����

// ���̸� ������ (����)�� (1/2�� �پ�)�鶧,
// (���̸����� 1/10����)�� �پ�����, (���̸� ���� Ƚ��)�� �� ���̾�� �ϴ°�?
// ������: ������ ����, ���̸� ���� Ƚ��
// �˰���: ������ ������ 1/10���ϰ� �� ������ �� �� ���������� ������ ������ 1/2�� �پ��
void PaperAreaMain()
{
	float nArea;
	int nNumber = 0;
	printf("������ ������ �Է��Ͻÿ� : ");
	scanf("%f", &nArea);

	while (nNumber < 4)
	{
		nArea = nArea / 2;
		nNumber = nNumber + 1;
		printf("Area:%f Number:%d\n", nArea, nNumber);
	}
}

#pragma endregion

#pragma region ���ٿ� ����

// ���ٿ����
// ���ڸ� �����ϸ� �� ���ڰ� �������� ���� ������, down ũ�� up ���߸� ��.
// 1.(���� Q)�� �������ִ�.
// 2.���亸�� (ū ��)��  (A �Է�)������ up�̶�� ���
// 3.���亸�� (������)�� (A �Է�)������ down�̶�� ���
// 4.������ �ƴ϶�� �ٽ� �Է¹���.
// 5.�����̶�� ������ ������.
// ������ �������� �����ϵ��� �����
void UpDownGameMain()
{
	int nInput = 0;
	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����
	int	nNumber = rand() % 101; // ���� ���� : 0 ~ 100

	while (nNumber != nInput)
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &nInput);
		if (nNumber > nInput)
		{
			printf("�Է��Ͻ� �� ���� Ů�ϴ�!\n");
		}
		else if (nNumber < nInput)
		{
			printf("�Է��Ͻ� �� ���� �۽��ϴ�!\n");
		}
		else if (nNumber == nInput)
		{
			printf("�����Դϴ�!\n");
		}
	}

}

#pragma endregion

#pragma region �� ���

/*
��������� ����϶�.
�ش����� �̸��� �Լ��ȿ� ���Ǹ� �����Ͽ� �ش����� ��µǵ��ϸ����
Full    Rect   Window Stair
y01234x
0#####  #####  #####  #
1#####  #   #  # # #  ##
2#####  #   #  #####  ###
3#####  #   #  # # #  ####
4#####  #####  #####  #####
*/

// 1.��Ģ�� ã�´�.
// Rect(y,x) (1,1)(1,2)(1,3) (2,1)(2,2)(2,3) (3,1)(3,2)(3,3) -> 1~3: x, y�� ��� 1~3�� ���ڶ�� ���x
// Window    (1,1)(1,3) (3,1)(3,3) -> Ȧ��: x, y ��� Ȧ���� ��� ���x
// Stair '#' (0,0) (1,0)(1,1) (2,0)(2,1)(2,2) 
//           (3,0)(3,1)(3,2)(3,3) (4,0)(4,1)(4,2)(4,3)(4,4) -> x<=y
// 2.��Ģ��� ������ ��� �ش�.
//
// 3.��Ģ���� ���ϸ��� �κ��� ������ ã�´�.
// (���ǹ����̰���) -> y�� �����Ҷ����� x�� ���� �����Ѵ�.
void FullMain()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			printf("#");
		}
		printf("\n");
	}
}

void RectMain()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if ((y >= 1 && y <= 3) && (x >= 1 && x <= 3))
			{
				printf(" ");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
}

void WindowMain()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if ((y == 1 || y == 3) && (x == 1 || x == 3))
			{
				printf(" ");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
}

void StiarMain()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x <= y; x++)
		{
			printf("#");
		}
		printf("\n");
	}
}

#pragma endregion

#pragma region �� Ż�� ����

enum room
{
	Desk = 1, Bed, Bookcase, Closet, Door
};

void EscapeMain()
{
	bool key1 = false;
	bool key2 = false;
	bool key3 = false;
	bool key4 = false;
	bool key = false;
	
	while (true)
	{
		enum room cRoom;
		
		printf("�濡 ������.\n");
		printf("���� ������ �ؾ��ϴ°�?\n");
		printf("(å��:1,ħ��:2,å��:3,����:4,��:5)\n");
		scanf("%d", &cRoom);

		switch (cRoom)
		{
		case Desk:
			if (key1 && key2 && key3 && key4)
			{
				printf("�������ڿ��� ���踦 �����ϴµ� �����ߴ�!\n");
				key = true;
				break;
			}
			else
			{
				printf("��������1�� ȹ���ߴ�!\n");
				key1 = true;
				break;
			}
		case Bed:
			printf("��������2�� ȹ���ߴ�!\n\n");
			key2 = true;
			break;
		case Bookcase:
			printf("��������3�� ȹ���ߴ�!\n\n");
			key3 = true;
			break;
		case Closet:
			printf("��������4�� ȹ���ߴ�!\n\n");
			key4 = true;
			break;
		case Door:
			if (key == true)
			{
				printf("Ż�� ����!\n");
				return;
			}
			else
			{
				printf("���谡 ����!\n\n");
			}
		}
	}
}

#pragma endregion

#pragma region ���� ����

void Bingoboard(int bingo[5][5]);
void Playbingo(int bingo[5][5]);
void Sumbingo(int bingo[5][5], int sum[12]);



void Bingoboard(int bingo[5][5])
{
	int i, j = 0;
	int temp[50];
	int tem;
	srand(time(NULL));

	// ������ �����
	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 5; j++) 
		{
			bingo[i][j] = 0;
		}
	}

	for (i = 0; i < 50; i++)
	{
		temp[i] = 0;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			while (1)
			{
				tem = rand() % 25 + 1;
				if (temp[tem] == 0)
				{
					bingo[i][j] = tem;
					temp[tem] = 1;
					break;
				}
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%5d", bingo[i][j]);
		}
		printf("\n");
	}
}

void Playbingo(int bingo[5][5])
{

}

void Sumbingo(int bingo[5][5], int sum[12])
{

}

void BingoMain()
{
	int bingo[5][5];
	Bingoboard(bingo);
	Playbingo(bingo);

	return;
}

#pragma endregion

void main()
{
	// Ctrl + F5
	// printf("Hello World!!!\n"); // ����Լ� // \n : �ٹٲ޹���
	// SumMain(); // �����ݷ� : ������ ���� ���� ��ȣ
	// CircleAreaMain();
	// ValSizeMain();
	// ASCIICodeTestMain();
	// LightSpeedMain();
	// IncDecTestMain();
	// GradeTestMain();
	// CalculatorMain();
	// CalculatorSwitchMain();
	// CalculatorLoofMain();
	// BateriaMain();
	// BateriaWhileSub();
	// BateriaWhileMain();
	// BateriaCountMain();
	// PaperAreaMain();
	// UpDownGameMain();
	// FullMain();
	// RectMain();
	// WindowMain();
	// StiarMain();
	// EscapeMain();
	BingoMain();
}