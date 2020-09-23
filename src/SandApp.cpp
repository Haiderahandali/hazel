#include "Library.h"

class Sandbox : public Hazel::Application
{
private:
    /* data */
public:
    Sandbox(/* args */);
    ~Sandbox();
};

Hazel::Application *Hazel::CreateApplication()
{
    return new Sandbox();
}
