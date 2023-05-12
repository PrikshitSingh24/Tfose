#include <Tfose.h>

class Sandbox : public Tfose::Application {
public:
	Sandbox(){


	}

	~Sandbox(){


	}
};

Tfose::Application* Tfose::CreateApplication() {
	return new Sandbox();
}