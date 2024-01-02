#include<MRay.h>

class Sandbox:public MRay::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}


};

MRay::Application* MRay::CreatApplication() {
	return new Sandbox();
}
