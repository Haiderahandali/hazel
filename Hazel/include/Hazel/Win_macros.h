#ifdef HZ_PLATFORM_WINDOWS
    #ifdef HZ_DLL_API
        #define HAZEL_API __declspec(dllexport)
    #else
        #define HAZEL_API __declspec(dllimport)
#endif
