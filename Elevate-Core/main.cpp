#include "window.h"

int main()
{
	using namespace elevate;
	using namespace graphics;

	Window window("Elevate Game Engine", 960, 540);
	glClearColor(0.39f,0.58f,0.92f,1.0f);
	
	std::cout << glGetString(GL_VERSION) << std::endl;

	while (!window.closed())
	{

		//std::cout << window.getWidth() << ", " << window.getHeight() << std::endl;
		window.clear();

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();

		window.update();
	}

	return 0;
}