#include "UI.h"

void UI::start() {
	cout << "�׷��� ������ �Դϴ�." << endl;
}

int UI::getMainMenu()
{
	// 1,2,3,4�� �ƴ� �� �ٽ� �Է� �޴� ���� �߰�.
	int choiceMenu;
	cout << "����:1, ���� : 2, ��κ��� : 3, ���� : 4 >>";
	cin >> choiceMenu;
	return choiceMenu;
}

int UI::getShape()
{
	int choiceShape;
	cout << "��:1, ��:2, �簢��:3 >>";
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
	cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
	cin >> choiceIndex;
	return choiceIndex;
}
