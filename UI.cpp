#include "UI.h"

void UI::start() {
	cout << "그래픽 에디터 입니다." << endl;
}

int UI::getMainMenu()
{
	// 1,2,3,4가 아닐 시 다시 입력 받는 로직 추가.
	int choiceMenu;
	cout << "삽입:1, 삭제 : 2, 모두보기 : 3, 종료 : 4 >>";
	cin >> choiceMenu;
	return choiceMenu;
}

int UI::getShape()
{
	int choiceShape;
	cout << "선:1, 원:2, 사각형:3 >>";
	cin >> choiceShape;
	return choiceShape;

}

void UI::println(string msg)
{
	cout << msg << endl;
}

void UI::print(string msg)
{
	cout << msg;
}

void UI::print(int msg)
{
	cout << msg;
}

int UI::getRemove()
{
	int choiceIndex;
	cout << "삭제하고자 하는 도형의 인덱스 >>";
	cin >> choiceIndex;
	return choiceIndex;
}
