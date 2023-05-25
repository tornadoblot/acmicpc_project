#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.

	int value, top, bot, DADD;
	double mSumofSCHIST[8], mTable[8];
	int tmp, mOrgtmp[16];
	double mSumofDHIST[8], sum = 0.0, dsum = 0.0;
	double DMAX, DMIN;
	double LOW = 0, HIGH = 7.0;
	double mHIST[8], mSumofHist[8];
	int mReSize, mSize;

	top = 7;
	bot = top - 1;


	mReSize = 4 * 4;
	mSize = mReSize;

	int mOutputImage[16];

	int mInputImage[16] =
	{
		4, 4, 3, 3,
		4, 4, 3, 3,
		4, 1, 2, 3,
		0, 1, 2, 3
	};

	// 초기화
	for (int i = 0; i < 8; i++)
	{
		mHIST[i] = LOW;
		mTable[i] = LOW;
	}


	// 빈도수 조사
	for (int i = 0; i < mSize; i++)
	{
		value = mInputImage[i];
		mHIST[value]++;
	}

	double mDHIST[8] = { 0, 0, 0, 0, 0, 6, 5, 5 };

	// 누적합 구하기
	for (int i = 0; i < 8; i++)
	{
		sum += mHIST[i];
		mSumofHist[i] = sum;
		// 원본 영상의 빈도수 조사
		dsum += mDHIST[i];
		mSumofDHIST[i] = dsum;
		// 입력 영상의 빈도수 조사
	}

	// 원본 영상의 평활화
	for (int i = 0; i < mSize; i++)
	{
		tmp = mInputImage[i];
		mOrgtmp[i] = (int) (round((mSumofHist[tmp] * HIGH / mSize)));
		// mOrgtmp에 원본 영상의 평활화 영상 저장
	}

	// 누적 히스토그램에서 최소값과 최대값 지정
	DMIN = mSumofDHIST[0];
	DMAX = mSumofDHIST[7];

	// 입력 영상 역평활화
	for (int i = 0; i < 8; i++)
	{
		mSumofSCHIST[i] = (mSumofDHIST[i] - DMIN) * HIGH / (DMAX - DMIN);
	}

	// 룩업 테이블을 이용한 맵핑 과정 분석
	// 룩업테이블을 이용한 명세화
	for (;;)
	{
		// 테이블 제작 코드
		// 
		for (int i = mSumofSCHIST[bot]; i <= mSumofSCHIST[top]; i++)
		{
			mTable[i] = top;
		}
		top = bot;
		bot = bot - 1;

		if (bot < -1)
			break;
	}

	{
		int mTable[8] = { 0, 0, 5, 5, 6, 6, 7, 7 };

		for (int i = 0; i < mSize; i++)
		{
			DADD = mOrgtmp[i];
			mOutputImage[i] = mTable[DADD];
		}
	}
}