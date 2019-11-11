#include <saber.h>

class Sandbox : public saber::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

saber::Application* saber::create_application() {
	return new Sandbox();
}
