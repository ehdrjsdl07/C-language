#include <stdio.h> // 표준입출력 라이브러리 // 주석 : 컴파일러가 분석하지 않는 문장.
#include <stdlib.h>
#include <time.h>
// 라이브러리 : 필요할 때 함수를 가져다 쓰기 위해 필요한 것.
#define PI 3.141592 // 기호상수 : 컴파일시에 기호가 있는곳에 해당 값을 넣어줌.

#pragma region 두 수의 합

// 두수의 값을 구하는 프로그램.
void SumMain() // 사용자 정의 함수 : 내가 만든 함수.
{
	// 변수 : 데이터를 저장하는 상자
	// 타입 : float, double(실수), int(정수), char(문자) 
	int a = 10; // 초기화 : 변수생성시 데이터를 넣음.
	int b = 20;
	int c = a + b;
	printf("%d + %d = %d\n", a, b, c); // 라이브러리 함수 : 라이브러리가 제공하는 함수.
}

#pragma endregion

#pragma region 원 면적 구하기

// 원의 면적구하기.(단, 면적은 반지름 * 반지름 * 원주율(3.141592)이다.)
// 데이터 : 반지름(정수 : int), 원주율(실수 : float), 원의 면적(실수) ->
// 알고리즘 : 원의 반지름은 입력받는다. 
// 원의 면적 = 반지름 * 반지름 * 원주율
// 계산 공식대로 정상 작동하는지 확인하기 위해 모든 변수의 값을 수직으로 출력한다.
void CircleAreaMain() // 원의 면적을 계샨하는 프로그램	
{
	int radius = 0; // 원의 반지름
	const float pi = 3.141592; // 원주율 // 상수변수 : 초기화된 값을 변경할 수 없는 변수.
	// pi = 2; // 상수변수를 변경하려 시도하면 컴파일 오류가 남.
	float area; // 원의 면적

	printf("원의 반지름을 입력하시오 : ");
	scanf("%d", &radius);
	area = radius * radius * PI; // area = radius * radius * 3.141592; // 컴파일될때 이런식으로 치환된다.
	// area = radius * radius * pi;
	printf("%d * %d * %f = %f\n", radius, radius, pi, area);
}

#pragma endregion

#pragma region 변수의 타입

// 각각 타입과 변수의 크기를 출력하여라
// (단, sizeof()를 이용하면 크기를 젤 수 있다.)
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

#pragma region 아스키코드

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

#pragma region 빛의 시간 구하기

// 태양과 지구사이의 거리가 d이고,
// 빛의 속도가 s일 때,
// 태양에서 지구에 닿는 시간 t를 구하여라.
// 데이터 : distance, speed, time -> 변수 : int // 정수, float // 실수, charX // 문자x
// 알고리즘 : t = d / s
// 검증(=결과가 맞는지 확인)을 해야한다. -> 정수x, 실수o -> 나누어 떨어지지 않으므로 float
void LightSpeedMain()
{
	float s = 300000; // s : 30만 km/s
	float d = 149600000; // d : 14960만km
	float t; // t : 초단위
	t = d / s;
	printf("지구에 닿는 시간 : %f초 = 태양과 지구사이의 거리 : %.0f / 빛의 속도 : %.0f\n", t, d, s);

	// 심화 : t를 분 초로 나타내보기
	int min, sec;
	min = t / 60;
	sec = (int)t % 60;
	printf("지구에 닿는 시간 : %d분, %d초", min, sec);
}

#pragma endregion

#pragma region 전위, 후위 연산자

// 전위 연산자 ++data, 후위 연산자 data++
// 데이터의 값이 전위 연산자와 후위 연산자의 차이점을 확인하느 프로그램
// 데이터 : 데이터 2개가 필요하다 -> nDataA, nDataB -> 정수
// 알고리즘 : nDataB = --nDataA, nDataB = nDataA++
void IncDecTestMain()
{
	int nDataA = 10;
	int nDataB = nDataA; // 10
	printf("1.nDataA/B:%d/%d\n", nDataA, nDataB); // 10/10
	nDataB = nDataA++; // 후위 연산자 : 대입연산자보다 우선순위가 낮으므로, 증감전 값이 변수에 대입된다.
	printf("2.nDataA/B:%d/%d\n", nDataA, nDataB); // 11/10
	nDataB = --nDataA; // 전위 연산자 : 대입연산자보다 우선순위가 높으므로, 증감하고 값이 변수에 대입된다.
	printf("3.nDataA/B:%d/%d\n", nDataA, nDataB); // 10/10
}

#pragma endregion

#pragma region 학점 출력 프로그램

// 점수를 입력받아서 학점을 출력하는 프로그램
// (A: 90점이상 B: 80점이상 C: 70점이상 D: 60점이상 F: 60점미만)
// 데이터 : 점수->정수, 학점->문자
// 알고리즘: 입력받은 점수가( A: 90점이상 B: 80점이상 C: 70점이상 D: 60점이상 F: 60점미만)에 해당되면 학점을 출력하기
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

#pragma region 계산기 만들기

// 게산기 만들기
// 1. 계산기 -> (숫자:변수:정수?실수!)와 (연산자:변수:문자)를 (입력:scanf)하면 그 (결과:변수:실수)를 출력하는 기계
// 2. 연산자는 사칙연산만 가능하다(+, -, *, /)
// 3. 연산을 하기위해서 최소 2개의 변수가 필요하므로 2개만 사용한다.
// 4. 계산을 종료할 때까지 (반복)해서 결과를 입력하고, 확인할 수 있다.
// 데이터: 숫자A, 숫자B, 연산자, 결과
// 알고리즘: 숫자와 연산자를 입력받고, 
// 입력받은 연산자가 + 면 두 수를 더하여 결과에 넣는다.
// 입력받은 연산자가 - 면 두 수를 빼고 결과에 넣는다.
// 입력받은 연산자가 * 면 두 수를 곱하여 결과에 넣는다.
// 입력받은 연산자가 / 면 두 수를 나누어 결과에 넣는다.
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
	float fDataA, fDataB, fresult; // 실수형 변수 fDataA, fDataB, fresult를 선언하고 초기화 하지 않았으므로 값은 알 수 없다.
	char cOp = 0; // 문자형 변수 cOp를 선언하고 초기화 하지 않았으므로 값은 알 수 없다.

	while (cOp != 'x') // 반복문으로 괄호안의 조건이 참인 동안에 중괄호 안에 있는 코드를 반복 실행한다.
	{
		printf("ex) 1 + 1  exit) ? x ? >> "); // 큰따옴표 안에 있는 문자를 출력하는 함수이다.
		scanf("%f %c %f", &fDataA, &cOp, &fDataB); // fDataA, cOp, fData의 값을 입력하는 함수이다.

		if (cOp == 'x') // 만약 cOp가 x라면 종료한다.
		{
			break; // if문을 빠져나온다.
		}
		switch (cOp) 
		{
		case '+': // cOp가 +일 경우 아래에 있는 코드를 실행한다.
			fresult = fDataA + fDataB; // fresult에 fDataA + fDataB의 값을 대입한다.
			break; // switch문을 빠져나온다.
		case '-': // cOp가 -일 경우 아래에 있는 코드를 실행한다.
			fresult = fDataA - fDataB; // fresult에 fDataA - fDataB의 값을 대입한다.
			break; // switch문을 빠져나온다.
		case '*': // cOp가 *일 경우 아래에 있는 코드를 실행한다.
			fresult = fDataA * fDataB; // fresult에 fDataA * fDataB의 값을 대입한다.
			break; // switch문을 빠져나온다.
		case '/': // cOp가 /일 경우 아래에 있는 코드를 실행한다.
			fresult = fDataA / fDataB; // fresult에 fDataA / fDataB의 값을 대입한다.
			break; // switch문을 빠져나온다.
		default: // cOp가 +, -, *, /의 경우가 아니라면 아래에 있는 코드를 실행한다.
			printf("%c is not Support!\n", cOp); // 큰따옴표 안에 있는 문자를 출력하는 함수이다.
			return; // 0을 반환하고 함수가 종료된다.
			break; // 위에 return으로 인하여 함수가 종료되었기 떼문에 실행되지않고 종료된다.
		}

		printf("%f %c %f = %f", fDataA, cOp, fDataB, fresult); // 큰따옴표 안에 있는 문자를 출력하는 함수이다.
	}
}

#pragma endregion

#pragma region 세균 배양

// 세균은 10마리를 배양하고 세균의 수가 100마리 이상이 되는 시간은?
// 세균은 1시간마다 2배씩 증가한다.
// 데이터: 세균의 수, 시간
// 알고리즘: 세균이 100마리 이상이 될 때까지 1시간마다 세균의 수 * 2
// 1.데이터와 알고리즘을 분리한다.
// 2.데이터는 변수 알고리즘은 연산,반복,조건 등이 조합된다.
// 3.반복되는 경우는 먼저 반복하고 정답을 출력한다.

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
// 4.반복되는 규칙성을 찾아서 무한반복을 돌린 후 반복된 과정을 모두 확인한다.
// (프로그래머가 아니라면 여기서 마쳐도 무방함. 그러나 정치질(약점잡아 늘어지기)에 희생양이 될수있음)
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
// 5.break문의 조건을 반대로 if문에 넣는다.(초과,미만:불포함  이상,이하:포함)
// 세균은 10마리를 배양하고 세균의 수가 100마리 이상이 되는 시간은?
// 세균은 1시간마다 2배씩 증가한다.
// 데이터: 세균의 수, 시간
// 알고리즘: 세균이 100마리 이상이 될 때까지 1시간마다 세균의 수 * 2
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

// (세균:변수) 10마리를 배양하여 (10시간 후:조건)의 세균수를 구하여라.
// 이때, 세균이 (1시간 마다 4배)씩 증가한다 
// 세균의 수:10, 시간:0, 세균수*=4
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

#pragma region 종이 접기

// 종이를 접으면 (면적)이 (1/2로 줄어)들때,
// (종이면적이 1/10이하)로 줄어들려면, (종이를 접는 횟수)는 몇 번이어야 하는가?
// 데이터: 종이의 면적, 종이를 접는 횟수
// 알고리즘: 종이의 면적이 1/10이하가 될 때까지 한 번 접을때마다 종이의 면적이 1/2씩 줄어듬
void PaperAreaMain()
{
	float nArea;
	int nNumber = 0;
	printf("종이의 면적을 입력하시오 : ");
	scanf("%f", &nArea);

	while (nNumber < 4)
	{
		nArea = nArea / 2;
		nNumber = nNumber + 1;
		printf("Area:%f Number:%d\n", nArea, nNumber);
	}
}

#pragma endregion

#pragma region 업다운 게임

// 업다운게임
// 숫자를 제시하면 그 숫자가 정해진수 보다 작으면, down 크면 up 맞추면 끝.
// 1.(정답 Q)은 정해져있다.
// 2.정답보다 (큰 수)를  (A 입력)받으면 up이라고 출력
// 3.정답보다 (작은수)를 (A 입력)받으면 down이라고 출력
// 4.정답이 아니라면 다시 입력받음.
// 5.정답이라면 게임을 끝낸다.
// 정답을 랜덤으로 생성하도록 만들기
void UpDownGameMain()
{
	int nInput = 0;
	srand(time(NULL)); // 매번 다른 시드값 생성
	int	nNumber = rand() % 101; // 난수 생성 : 0 ~ 100

	while (nNumber != nInput)
	{
		printf("숫자를 입력하세요 : ");
		scanf("%d", &nInput);
		if (nNumber > nInput)
		{
			printf("입력하신 수 보다 큽니다!\n");
		}
		else if (nNumber < nInput)
		{
			printf("입력하신 수 보다 작습니다!\n");
		}
		else if (nNumber == nInput)
		{
			printf("정답입니다!\n");
		}
	}

}

#pragma endregion

#pragma region 샾 찍기

/*
다음모양을 출력하라.
해당모양의 이름의 함수안에 조건만 변경하여 해당모양이 출력되도록만들기
Full    Rect   Window Stair
y01234x
0#####  #####  #####  #
1#####  #   #  # # #  ##
2#####  #   #  #####  ###
3#####  #   #  # # #  ####
4#####  #####  #####  #####
*/

// 1.규칙을 찾는다.
// Rect(y,x) (1,1)(1,2)(1,3) (2,1)(2,2)(2,3) (3,1)(3,2)(3,3) -> 1~3: x, y가 모두 1~3의 숫자라면 출력x
// Window    (1,1)(1,3) (3,1)(3,3) -> 홀수: x, y 모두 홀수일 경우 출력x
// Stair '#' (0,0) (1,0)(1,1) (2,0)(2,1)(2,2) 
//           (3,0)(3,1)(3,2)(3,3) (4,0)(4,1)(4,2)(4,3)(4,4) -> x<=y
// 2.규칙대로 조건을 모두 준다.
//
// 3.규칙에서 줄일만한 부분이 없는지 찾는다.
// (조건문없이가능) -> y가 증가할때마다 x의 값이 증가한다.
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

#pragma region 방 탈출 게임

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
		
		printf("방에 갇혔다.\n");
		printf("나는 무엇을 해야하는가?\n");
		printf("(책상:1,침대:2,책장:3,옷장:4,문:5)\n");
		scanf("%d", &cRoom);

		switch (cRoom)
		{
		case Desk:
			if (key1 && key2 && key3 && key4)
			{
				printf("도구상자에서 열쇠를 조립하는데 성공했다!\n");
				key = true;
				break;
			}
			else
			{
				printf("열쇠조각1을 획득했다!\n");
				key1 = true;
				break;
			}
		case Bed:
			printf("열쇠조각2을 획득했다!\n\n");
			key2 = true;
			break;
		case Bookcase:
			printf("열쇠조각3을 획득했다!\n\n");
			key3 = true;
			break;
		case Closet:
			printf("열쇠조각4을 획득했다!\n\n");
			key4 = true;
			break;
		case Door:
			if (key == true)
			{
				printf("탈출 성공!\n");
				return;
			}
			else
			{
				printf("열쇠가 없다!\n\n");
			}
		}
	}
}

#pragma endregion

#pragma region 빙고 게임

void Bingoboard(int bingo[5][5]);
void Playbingo(int bingo[5][5]);
void Sumbingo(int bingo[5][5], int sum[12]);



void Bingoboard(int bingo[5][5])
{
	int i, j = 0;
	int temp[50];
	int tem;
	srand(time(NULL));

	// 빙고판 만들기
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
	// printf("Hello World!!!\n"); // 출력함수 // \n : 줄바꿈문자
	// SumMain(); // 세미콜론 : 문장의 끝에 들어가는 기호
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