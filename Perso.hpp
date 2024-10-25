#ifndef PERSO_HPP__
#define PERSO_HPP__
#include <vector>

template <typename T>
double CalculStatistique(T tab[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += tab[i];
	}
	
	double avg = sum / size;
	return avg;
}

template <>
double CalculStatistique<float>(float tab[], int size) {
	double avg = CalculStatistique(tab, size);
	double variance = 0.0;

	for (int i = 0; i < size; i++) {
		variance += (tab[i] - avg) * (tab[i] - avg);
	}

	return variance / size;
}

class Perso {
public:
	float HP;
	float Attack;
	float Defense;

	Perso(float hp, float attack, float defense)
		: HP(hp), Attack(attack), Defense(defense) {};


};

#endif // !PERSO_HPP__