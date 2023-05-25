#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.

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

	// �ʱ�ȭ
	for (int i = 0; i < 8; i++)
	{
		mHIST[i] = LOW;
		mTable[i] = LOW;
	}


	// �󵵼� ����
	for (int i = 0; i < mSize; i++)
	{
		value = mInputImage[i];
		mHIST[value]++;
	}

	double mDHIST[8] = { 0, 0, 0, 0, 0, 6, 5, 5 };

	// ������ ���ϱ�
	for (int i = 0; i < 8; i++)
	{
		sum += mHIST[i];
		mSumofHist[i] = sum;
		// ���� ������ �󵵼� ����
		dsum += mDHIST[i];
		mSumofDHIST[i] = dsum;
		// �Է� ������ �󵵼� ����
	}

	// ���� ������ ��Ȱȭ
	for (int i = 0; i < mSize; i++)
	{
		tmp = mInputImage[i];
		mOrgtmp[i] = (int) (round((mSumofHist[tmp] * HIGH / mSize)));
		// mOrgtmp�� ���� ������ ��Ȱȭ ���� ����
	}

	// ���� ������׷����� �ּҰ��� �ִ밪 ����
	DMIN = mSumofDHIST[0];
	DMAX = mSumofDHIST[7];

	// �Է� ���� ����Ȱȭ
	for (int i = 0; i < 8; i++)
	{
		mSumofSCHIST[i] = (mSumofDHIST[i] - DMIN) * HIGH / (DMAX - DMIN);
	}

	// ��� ���̺��� �̿��� ���� ���� �м�
	// ������̺��� �̿��� ��ȭ
	for (;;)
	{
		// ���̺� ���� �ڵ�
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