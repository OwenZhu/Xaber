#include <xaber.h>

class Sandbox : public xaber::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

xaber::Application* xaber::create_application() {
	return new Sandbox();
}
