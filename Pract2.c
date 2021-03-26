#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Enter the number of calculations: ");
	scanf("%d", &n);
	int results[n];
	for (int i = 0; i < n; i++){
		float a, b, c;
		printf("Enter sides of triangle separated by whitespace: ");
		scanf("%f %f %f", &a, &b, &c);
		float p = (a + b + c) / 2;
		float squareSq = p * (p - a) * (p - b) * (p - c);
		if (squareSq <= 0){
			printf("No result\n");
			results[i] = -1; //square cannot be sub-zero
		}
		else{
			float square = sqrt(squareSq);
			printf("Result: %f\n", square);
			results[i] = square;
		}
	}

	int amountOfExistingAnswers = 0;
	float sum = 0;
	for(int i = 0; i < n; i++){
		if (results[i] >= 0){
			amountOfExistingAnswers++;
			sum += results[i];
		}
	}

	float average = sum/amountOfExistingAnswers;
	printf("Average value: %f\n", average);
}

