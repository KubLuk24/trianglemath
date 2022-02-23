#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

	float cisla[3] = {};
	float max = 0;

	for (int i = 0; i < 3; i++) {
		printf("zadej cislo %d > ", i + 1);
		scanf("%f", &cisla[i]);
	}

	printf("------------------------------\n");

	if (cisla[0] + cisla[1] > cisla[2] && cisla[1] + cisla[2] > cisla[0] && cisla[2] + cisla[0] > cisla[1]) {

		float obvod = cisla[0] + cisla[1] + cisla [2];
		float s = obvod / 2;
		float obsah = sqrt(s * (s - cisla[0]) * (s - cisla[1]) * (s - cisla[1]));

		printf("Obvod: %f\n", obvod);
		printf("Obsah: %f\n", obsah);
		printf("------------------------------\n");
		
		for (int i = 0; i < 3; i++) {
			if (max < cisla[i]) {
				if (max != 0) printf("Odvesna: %f\n", max);
				max = cisla[i];
			}
			else {
				printf("Odvesna: %f\n", cisla[i]);
			}
		}
		
		printf("Prepona: %f\n", max);
		printf("------------------------------\n");

		float pyth = 0;
		if (max == cisla[0]) pyth = pow(cisla[1], 2) + pow(cisla[2], 2);
		if (max == cisla[1]) pyth = pow(cisla[0], 2) + pow(cisla[2], 2);
		if (max == cisla[2]) pyth = pow(cisla[1], 2) + pow(cisla[0], 2);

		printf("Pythagorova veta: %f\n", pyth);
		if (pyth == pow(max, 2)) printf("Trojuhelnik je pravouhly.\n");
		if (cisla[0] == cisla[1] && cisla[1] == cisla[2]) printf("Trojuhelnik je rovnostranny\n");
		if ((cisla[0] == cisla[1] || cisla[1] == cisla[2] || cisla[2] == cisla[0]) && !(cisla[0] == cisla[1] && cisla[1] == cisla[2])) printf("Trojuhelnik je rovnoramenny\n");

		float alpha = acos(((pow(cisla[1], 2) + pow(cisla[2], 2) - pow(cisla[0], 2)) / (2 * cisla[1] * cisla[2])));
		float beta = acos(((pow(cisla[0], 2) + pow(cisla[2], 2) - pow(cisla[1], 2)) / (2 * cisla[0] * cisla[2])));
		float gamma = acos(((pow(cisla[1], 2) + pow(cisla[0], 2) - pow(cisla[2], 2)) / (2 * cisla[0] * cisla[1])));
		printf("------------------------------\n");
		printf("Alpha: %f\n", alpha);
		printf("Beta: %f\n", beta);
		printf("Gamma: %f\n", gamma);


	}
	else {
		printf("\n Vstup neni trojuhelnik");
	}
	

}