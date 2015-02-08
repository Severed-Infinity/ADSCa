//David Swift  X00073017

#include <vector>
#include <random>
using namespace std;

#ifndef ADSCA_H
#define ADSCA_H
class ADSCa
{
public:
	ADSCa();
	~ADSCa();
	static void printVector(vector<int> vector);
	static int binarySearch(vector<int> vector, int searchValue, int left, int right);
	static int sequentialSearch(vector<int> vector, int searchValue);
	static vector<int> fillVector(int vectorSize);
	static void bubbleSort(vector<int> &vector);
	static void selectionSort(vector<int> &vector);
	static void combSort(vector<int> &vector);
	static void bubbleBinary(int vectorSize);
	static void bubbleSequential(int vectorSize);
	static void selectionBinary(int vectorSize);
	static void selectionSequential(int vectorSize);
	static void combBinary(int vectorSize);
	static void combSequential(int vectorSize);
private:
	static vector<int> vector;
	static const long SEED = 43759610L;
	static int calls;
	//timer of some kind
	//static MTRand_int32 randomGen;
	//static mt19937 randomGen2;
};

#endif

