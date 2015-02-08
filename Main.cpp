//David Swift  X00073017

#include <iostream>
#include <random>
#include "Timer.h"
#include "ADSCa.h"
using namespace std;

void individualTests(mt19937 randomNumber, int numberOfTests, int vectorSize){
	
	double wallTotal = 0;
	double cpuTotal = 0;
	uniform_int_distribution<> dist(0, 100);
	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::binarySearch(ADSCa::fillVector(vectorSize), dist(randomNumber), 0, vectorSize - 1);
			
			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}
	
	cout << "Average time for binary search: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for binary search: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::sequentialSearch(ADSCa::fillVector(vectorSize), dist(randomNumber));

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average time for sequential search: " << (wallTotal / numberOfTests) *1000000 << " microseconds" << endl
		<< "Average CPU time for sequential search: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::bubbleSort(ADSCa::fillVector(vectorSize));

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average time for bubble sort: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for bubble sort: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::selectionSort(ADSCa::fillVector(vectorSize));

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average time for selection sort: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for selection sort: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::combSort(ADSCa::fillVector(vectorSize));

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average time for comb sort: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
	<< "Average CPU time for comb sort: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;
}
void comboTests(mt19937 randomNumber, int numberOfTests, int vectorSize){
	double wallTotal = 0;
	double cpuTotal = 0;
	uniform_int_distribution<> dist(0, 100);
	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::bubbleBinary(vectorSize);

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average wall time for bubble sort and binary search: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for bubble sort and binary search: " <<(cpuTotal / numberOfTests) * 1000000 << " microseconds"<<endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::bubbleSequential(vectorSize);

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average wall time for bubble sort and sequential search: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for bubble sort and sequential search: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::selectionBinary(vectorSize);

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average wall time for selection sort and binary search: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for selection sort and binary search: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::selectionSequential(vectorSize);

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average wall time for selection sort and sequential search: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for selection sort and sequential search: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::combBinary(vectorSize);

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average wall time for comb sort and binary search: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for comb sort and binary search: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;

	for (int i = -10000; i < numberOfTests; i++) {
		if (i >= 0) {
			double wall1 = get_wall_time();
			double cpu1 = get_cpu_time();

			ADSCa::combSequential(vectorSize);

			double wall2 = get_wall_time();
			double cpu2 = get_cpu_time();
			wallTotal += wall2 - wall1;
			cpuTotal += cpu2 - cpu1;
		}
	}

	cout << "Average wall time for comb sort and sequential search: " << (wallTotal / numberOfTests) * 1000000 << " microseconds" << endl
		<< "Average CPU time for comb sort and sequential search: " << (cpuTotal / numberOfTests) * 1000000 << " microseconds" << endl;
	wallTotal = 0;
	cpuTotal = 0;
}
int main(){
	mt19937 randomNumber;
	
	individualTests(randomNumber, 1000, 10000);
	comboTests(randomNumber, 1000, 10000);

	system("pause");
	return 0;
}