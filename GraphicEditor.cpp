#include "GraphicEditor.h"

GraphicEditor::GraphicEditor()
{
	pStart = nullptr;
	pLast = nullptr;
}

GraphicEditor::~GraphicEditor() {
	Shape* p = pStart;
	while (p != nullptr) {
		Shape* pNext = p->getNext();
		delete p;
		p = pNext;
	}
}

void GraphicEditor::edit()
{
	int shapeType = UI::getShape();
	switch (shapeType)
	{
	case LINE:
		add(new Line());
		break;
	case RECT:
		add(new Rect());
		break;
	case CIRCLE:
		add(new Circle());
		break;
	default:
		UI::println("���� ���� ����");
	}
}

void GraphicEditor::add(Shape* p) {
	if (pStart == nullptr) {
		pStart = p;
		pLast = p;
	}
	else 
	{
		pLast->add(p); //�������� p�߰� (���⼭ add �� Shape�� add)
		pLast = p;
	}
}

void GraphicEditor::remove() {
	int shapeIndex = UI::getRemove();
	remove(shapeIndex);
}

void GraphicEditor::remove(int shapeIndex) {
	if (pLast == nullptr) {
		UI::println("���� ����");
		return;
	}
	int i = 0;
	Shape* p = pStart;
	Shape* beforeP = pStart;
	while (i < shapeIndex) {
		i++;
		beforeP = p;
		p = p->getNext();
		if (p == nullptr) {
			UI::println("�ε��� ����");
			return;
		}
	}
	Shape* pNext = beforeP->add(p->getNext());
	delete p;
	if (p == pStart) {//delete������ p�� �ּҴ� ��������.
		pStart = pNext;
	}
	//������ ������ �������� ���
	if (p == pLast) {
		//ó������ �������ΰ��
		if (pStart == nullptr) {
			pLast = nullptr;
		}
	}
}

void GraphicEditor::paint() {
	Shape* p = pStart;
	if (p == nullptr) {
		UI::println("������ ����");
		return;
	}
	int i = 0;
	while (p != nullptr) {
		UI::print(i);
		UI::print(":");
		p->paint();
		p = p->getNext();
		i++;
	}
}

void GraphicEditor::run() {

	UI::start();


	while (true) {
		int cMenu = UI::getMainMenu();

		switch (cMenu) {
		case EDIT:
			edit();
			break;
		case REMOVE:
			remove();
			break;
		case PAINT:
			paint();
			break;
		case EXIT:
			return;
		default:
			UI::println("�޴� �Է� ����");
		}
	}
}