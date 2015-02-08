//David Swift  X00073017

#include "ADSCa.h"
#include <vector>
#include <iostream>
using namespace std;

ADSCa::ADSCa()
{
}

ADSCa::~ADSCa()
{
}

void ADSCa::printVector(std::vector<int> vector){
	for (unsigned int i = 0; i < vector.size(); i++){
		cout << vector.at(i) << endl;
	}
}
vector<int> ADSCa::fillVector(int vectorSize){
	std::vector<int> vector (vectorSize);
	mt19937 randomGen(SEED);
	uniform_int_distribution<> dist(0, 100);
	for (unsigned int i = 0; i < vector.size(); i++){
		vector[i] = dist(randomGen);
	}
	return vector;
}

int ADSCa::binarySearch(std::vector<int> vector, int searchValue, int left, int right){
	if (right < left){
		return -1;
	}
	int mid = (left + right) >> 1;
	if (searchValue < vector.at(mid)){
		return binarySearch(vector, searchValue, left, mid - 1);
	}
	else if (searchValue > vector.at(mid)){
		return binarySearch(vector, searchValue, mid + 1, right);
	}
	//cout << vector.at(mid) << endl;
	return mid;
}

int ADSCa::sequentialSearch(std::vector<int> vector, int searchValue){
	int found = -1;
	for (unsigned int i = 0; i < vector.size(); i++){
		if (searchValue == vector[i]){
			found = i;
		}
	}
	return found;
}

void ADSCa::bubbleSort(std::vector<int> &vector){
	bool swapped = true;
	int tmp, j = 0;
	do {
		swapped = false;
		j++;
		for (unsigned int i = 0; i < vector.size()-j; i++){
			if (vector.at(i) > vector.at(i + 1)){
				tmp = vector.at(i);
				vector.at(i) = vector.at(i + 1);
				vector.at(i + 1) = tmp;
				swapped = true;
			}
		}
	} while (swapped);
}

void ADSCa::selectionSort(std::vector<int> &vector){
	int i, j, minIndex, tmp;
	int n = vector.size();
	for (i = 0; i < n - 1; i++){
		minIndex = i;
		for (j = (i + 1); j < n; j++){
			if (vector.at(j) < vector.at(minIndex)){
				minIndex = j;
			}
		}
		if (minIndex != i){
			tmp = vector.at(i);
			vector.at(i) = vector.at(minIndex);
			vector.at(minIndex) = tmp;
		}
	}
}

void ADSCa::combSort(std::vector<int> &vector){
	int gap = vector.size();
	bool swapped = true;
	while (gap > 1 || swapped){
		if (gap > 1){
			gap = (gap * 10) / 13;
		}
		swapped = false;
		for (unsigned int i = 0; i + gap < vector.size(); i++){
			if (vector.at(i) > vector.at(i + gap)){
				int tmp = vector.at(i);
				vector.at(i) = vector.at(i + gap);
				vector.at(i + gap) = tmp;
				swapped = true;
			}
		}
	}
}

void ADSCa::bubbleBinary(int vectorSize){
	std::vector<int> innerVector = ADSCa::fillVector(vectorSize);
	mt19937 randomNum;
	uniform_int_distribution<> dist(0, 100);
	bubbleSort(innerVector);
	binarySearch(innerVector, dist(randomNum), 0, vectorSize - 1);
}
void ADSCa::bubbleSequential(int vectorSize){
	std::vector<int> innerVector = ADSCa::fillVector(vectorSize);
	mt19937 randomNum;
	uniform_int_distribution<> dist(0, 100);
	bubbleSort(innerVector);
	sequentialSearch(innerVector, dist(randomNum));
}
void ADSCa::selectionBinary(int vectorSize){
	std::vector<int> innerVector = ADSCa::fillVector(vectorSize);
	mt19937 randomNum;
	uniform_int_distribution<> dist(0, 100);
	selectionSort(innerVector);
	binarySearch(innerVector, dist(randomNum), 0, vectorSize - 1);
}
void ADSCa::selectionSequential(int vectorSize){
	std::vector<int> innerVector = ADSCa::fillVector(vectorSize);
	mt19937 randomNum;
	uniform_int_distribution<> dist(0, 100);
	selectionSort(innerVector);
	sequentialSearch(innerVector, dist(randomNum));
}
void ADSCa::combBinary(int vectorSize){
	std::vector<int> innerVector = ADSCa::fillVector(vectorSize);
	mt19937 randomNum;
	uniform_int_distribution<> dist(0, 100);
	combSort(innerVector);
	binarySearch(innerVector, dist(randomNum), 0, vectorSize - 1);
}
void ADSCa::combSequential(int vectorSize){
	std::vector<int> innerVector = ADSCa::fillVector(vectorSize);
	mt19937 randomNum;
	uniform_int_distribution<> dist(0, 100);
	combSort(innerVector);
	sequentialSearch(innerVector, dist(randomNum));
}