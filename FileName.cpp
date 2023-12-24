#include <iostream>
using namespace std;

class Animal {
	string name;
	int limb;
	int chromosome;
	int weight;
	int environment;

public:

	Animal() {
		name = "unkmown";
		limb = 0;
		chromosome = 0;
		weight = 0;
		environment = 0;
	}

	Animal(string name_1, int limb_1, int chromosome_1, int weight_1, int environment_1) {
		name = name_1;
		limb = limb_1;
		chromosome = chromosome_1;
		weight = weight_1;
		environment = environment_1;
	}

	Animal(const Animal& other) {
		this->name = other.name;
		this->limb = other.limb;
		this->chromosome = other.chromosome;
		this->weight = other.weight;
		this->environment = other.environment;
	}

	~Animal() {

	}

	string getName() {
		return name;
	}

	int getLimb() {
		return limb;
	}

	int getChromosome() {
		return chromosome;
	}

	int getWeight() {
		return weight;
	}

	int getEnvironment() {
		return environment;
	}

	void setName(string name_1) {
		name = name_1;
	}

	void setLimb(int limb_1) {
		limb = limb_1;
	}

	void setChromosome(int chromosome_1) {
		chromosome = chromosome_1;
	}

	void setWeight(int weight_1) {
		weight = weight_1;
	}

	void setEnvironment(int environment_1) {
		environment = environment_1;
	}

	void printName() {
		cout << "name: " << name << endl;
	}

	void printLimb() {
		cout << "limb: " << limb << endl;
	}

	void printChromosome() {
		cout << "chromosome: " << chromosome << endl;
	}

	void printWeight() {
		cout << "weight: " << weight << endl;
	}

	void printEnvironment() {
		cout << "environment: " << environment << endl;
	}

	void print() {
		cout << "name: " << name << endl;
		cout << "limb: " << limb << endl;
		cout << "chromosome: " << chromosome << endl;
		cout << "weight: " << weight << endl;
		cout << "environment: " << environment << endl << endl;
	}
	

	//question 1
	static int count_N(Animal* animals, int N, int count_animals) {
		int count = 0;
		for (int i = 0; i < count_animals; i++) {
			if (animals[i].getEnvironment() == N) {
				count += 1;
			}
		}
		return count;
	}


	//question 2
	static void list_chromosome(Animal* animals, int count) {
		cout << "������ ��������, ��������������� �� ���������� ��������: " << endl;

		for (int i = 0; i - 1 < count; i++) {
			for (int j = 0; j < count - i - 1; j++) {
				if (animals[j].getChromosome() > animals[j + 1].getChromosome()) {
						swap(animals[j], animals[j + 1]);
				}
			}
		}

		for (int i = 0; i < count; i++) {
			cout << i + 1 << "  " << animals[i].getName() << "  (" << animals[i].getChromosome() << ")" << endl;
		}

	}


	//question 3
	static float average_limb(Animal* animals, int count_animals, int N) {
		int sum = 0;
		int count = 0;
		for (int i = 0; i < count_animals; i++) {
			if (animals[i].getWeight() < N) {
				sum += animals[i].getLimb();
				count += 1;
			}
		}
		if (count == 0) {
			return 0;
		}
		else {
			return sum / count;
		}
	}
	
};

int main() {

	setlocale(LC_ALL, "Russian");

	//lab5
	/*
	Animal cat("cat", 4, 38, 2, 4);
	Animal dog(cat);
	dog.setName("dog");
	dog.print();
	*/


	//lab6

	//���������� ������� �������� �������
	/*
	int count_animals;
	cout << "������� ���������� ��������:" << endl;
	cin >> count_animals;

	Animal* animals = new Animal[count_animals];

	for (int i = 0; i < count_animals; i++) {
		cout << "������� �������� " << i + 1 << "-�� ���������:" << endl;
		string during;
		cin >> during;
		animals[i].setName(during);

		cout << "������� ���������� ����������� " << i + 1 << "-��� ���������:" << endl;
		int limb;
		cin >> limb;
		animals[i].setLimb(limb);

		cout << "������� ���������� �������� " << i + 1 << "-��� ���������:" << endl;
		int chromosome;
		cin >> chromosome;
		animals[i].setChromosome(chromosome);

		cout << "������� ��� " << i + 1 << "-��� ���������:" << endl;
		int weight;
		cin >> weight;
		animals[i].setWeight(weight);

		cout << "������� ����� �������� " << i + 1 << "-��� ���������^" << endl;
		cout << "1. �������-���������" << endl;
		cout << "2. ������" << endl;
		cout << "3. ���������" << endl;
		cout << "4. ������" << endl;
		int environment;
		cin >> environment;
		animals[i].setEnvironment(environment);

		cout << endl;
	}

	cout << "������ ��������:" << endl;
	for (int i = 0; i < count_animals; i++) {
		cout << "�" << i + 1 << ' ';
		animals[i].print();
		cout << endl;
	}
	*/


	// ������� ������ �������� ��� �����
	int count_animals = 5;
	Animal cat("cat", 4, 1, 3, 4);
	Animal dog("dog", 4, 2, 15, 4);
	Animal fish("fish", 0, 0, 1, 2);
	Animal fly("fly", 4, 3, 0, 1);
	Animal bear("bear", 4, 4, 100, 4);
	Animal animals[5];
	animals[0] = fly;
	animals[1] = fish;
	animals[2] = bear;
	animals[3] = dog;
	animals[4] = cat;

	cout << "������ �������� � �� ���������� ��������" << endl;
	for (int i = 0; i < count_animals; i++) {
		cout << i + 1 << "  " << animals[i].getName() << "  (" << animals[i].getChromosome() << ")" << endl;
	}
	cout << endl << endl;


	//question 1
	//���������� ��������, ��������� � ����� N ?
	cout << "������� �����, ����� ������ ���������� ��������, ��������� � ���" << endl;
	cout << "1. �������-���������" << endl;
	cout << "2. ������" << endl;
	cout << "3. ���������" << endl;
	cout << "4. ������" << endl;
	int env;
	cin >> env;
	cout << "���������� ��������, ��������� � ����� " << env << ": " << Animal::count_N(animals, env, count_animals) << endl << endl << endl;

	
	//question 2
	//������ ���� ��������, ��������������� �� ���������� ��������
	Animal::list_chromosome(animals, count_animals);
	cout << endl << endl;


	//question 3
	//������� ���������� ����������� ��� �������� � ����� < N
	int N;
	cout << "������� N: ";
	cin >> N;
	cout << "������� ���������� �����������: " << Animal::average_limb(animals, count_animals, N) << endl << endl;

	//delete[] animals;
	
}