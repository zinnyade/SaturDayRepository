#include <iostream>
#include <vector>

//class Enemy
//{
//public:
//	Enemy();
//	~Enemy();
//
//private:
//
//
//};

int main()
{
	//Enemy enemy;

	//ベクターを宣言
	std::vector<int> numbers;
	std::vector<float> numbers2;
	//std::vector<Enemy> enemies;

	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	//要素数確認
	std::cout << numbers.size() << std::endl;
	//
	int num = numbers[0];
	std::cout << num;
	//削除
	numbers.clear();

	return 0;
}