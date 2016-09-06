#ifndef cpp_singleton09_h
#define cpp_singleton09_h

namespace Singleton09
{
    class Log
    {
    public:
        virtual ~Log();
        virtual void write(const char* text) = 0;
    };


    class GameObject
    {
    protected:
        Log& getLog() { return log; }

    private:
        static Log& log;
    };



    class Enemy : public GameObject
    {
    public:
        Enemy() {}
        void doSomething()
        {
            getLog().write("I can log");
        }
    };
}

#endif//cpp_singleton09_h