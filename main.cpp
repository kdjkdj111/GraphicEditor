#include <iostream>
#include "GraphicEditor.h"
using namespace std;

int main() {
	GraphicEditor* editor = new GraphicEditor();
	editor->run();

	delete editor;
}