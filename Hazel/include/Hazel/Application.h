#ifndef APPLICATION_H
#define APPLICATION_H


namespace Hazel
{
    class Application
    {
    private:

    public:
    Application(/* args */);
    virtual ~Application();

    void Run();
    };

    //To be defined in the Client
    Application* CreateApplication();
    
}


#endif
