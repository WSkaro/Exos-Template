#include <vector>
#include <list>
#include "Projectile.hpp"

//Ex 3 ========================================
//.1
//template <typename T>
//
//T Min(T tab[], int size) {
//	T Minelt = tab[0];
//	for (int i = 0; i < size; i++) {
//		if (tab[i] < Minelt) {
//			Minelt = tab[i];
//		}
//	}
//	return Minelt;
//}
//
////.2
//template <typename V>
//
//int PushBack(std::vector<V>& vector, V elt) {
//	vector.push_back(elt);
//	return vector.size();
//}
//
////.3
//template <typename L>
//
//L Sum(std::list<L>& list) {
//	L sum = 0;
//	for (auto it = list.begin(); it != list.end(); ++it) {
//		sum += *it;
//	}
//	return sum;
//}
//
////.4
//template <typename M>
//
//M Avg(M tab[], int size) {
//	M sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += tab[i];
//	}
//
//	if (typeid(tab[0]) == typeid(int)) {
//		double avg = sum / size;
//		return avg;
//	}
//	else {
//		M avg = sum / size;
//		return avg;
//	}
//}
//Ex 3 ========================================


int main() {
	//Ex 3 ========================================
	//.1
	//int TabInt[] = {5, 2, 9, 1, 5, 6};
	//int SizeTabInt = sizeof(TabInt) / sizeof(TabInt[0]);
	//std::cout << "Int minimum : " << Min(TabInt, SizeTabInt) << "\n" << std::endl;
	//float TabFloat[] = {5.0f, 2.0f, 9.0f, 1.0f, 5.0f, 6.0f};
	//int SizeTabFloat = sizeof(TabFloat) / sizeof(TabFloat[0]);
	//std::cout << "Float minimum : " << Min(TabFloat, SizeTabFloat) << "\n" << std::endl;
	////.2
	//std::vector<int> VectorInt = { 5, 2, 9, 1, 5, 6 };
	//std::cout << "Size of VectorInt : " << PushBack(VectorInt, 3) << ", after adding an element." << "\n" << std::endl;
	//std::vector<float> VectorFloat = { 5.0f, 2.0f, 9.0f, 1.0f, 5.0f, 6.0f };
	//std::cout << "Size of VectorFloat : " << PushBack(VectorFloat, 3.0f) << ", after adding an element." << "\n" << std::endl;
	////.3
	//std::list<int> ListInt = { 5, 2, 9, 1, 5, 6 };
	//std::cout << "Sum of elements is : " << Sum(ListInt) << "\n" << std::endl;
	//std::list<float> ListFloat = { 5.0f, 2.0f, 9.0f, 1.0f, 5.0f, 6.0f };
	//std::cout << "Sum of elements is : " << Sum(ListFloat) << "\n" << std::endl;
	////.4
	//int TabInt2[] = { 5, 2, 9, 1, 5, 6 };
	//int SizeTabInt2 = sizeof(TabInt2) / sizeof(TabInt2[0]);
	//std::cout << "the TabInt average is : " << Avg(TabInt2, SizeTabInt2) << "\n" << std::endl;
	//float TabFloat2[] = { 5.0f, 2.0f, 9.0f, 1.0f, 5.0f, 6.0f };
	//int SizeTabFloat2 = sizeof(TabFloat2) / sizeof(TabFloat2[0]);
	//std::cout << "the TabFloat average is : " << Avg(TabFloat2, SizeTabFloat2) << "\n" << std::endl;
	//Ex 3 ========================================

	//Ex 4 ========================================
	//Entity pour imaginer les checkcollisions etc.. 
	//mais pas de boucle de gameplay donc ne marche pas.
	Entity* enemy = new Entity(Vector2(4, 4), 1.0f, 1.0f);
	
	Projectile<int> arrow(10, Vector2(1, 1), Vector2(5, 5), 0.1f, 1.0f, 1.0f);
	arrow.Move(*enemy);
	arrow.Impact();

	FireBall fireball(10.0f, 5.0f, Vector2(1, 1), Vector2(5, 5), 0.1f, 1.0f, 1.0f);
	fireball.Move(*enemy);
	fireball.Impact();

	//Ex 4Bis dans Perso.hpp
	//Pas vraiment bien compris les instructions,
	//j'ai donc mis pas mal de temps à le faire et le rendu n'est pas vraiment ce que je voulais 


	//Ex 4 ========================================



	return 0;
}