#include "Observer05.h"
#include <assert.h>

using namespace Pool;

void destructEventTest()
{
    BindingPool pool;

    Event* event1 = new Event(pool);
    Event* event2 = new Event(pool);

    Listener listener1("Listener1");
    Listener listener2("Listener2");

    event1->addListener(listener1);
    event1->addListener(listener2);
    event2->addListener(listener1);
    event2->addListener(listener2);

    //assert(2 == listener1.numEvents());
    //assert(2 == listener2.numEvents());

    //delete event1;
    //assert(1 == listener1.numEvents());
    //assert(1 == listener2.numEvents());

    //delete event2;
    //assert(0 == listener1.numEvents());
    //assert(0 == listener2.numEvents());
}
void test()
{
    BindingPool pool;

    Event event1(pool);
    Event event2(pool);

    Listener listener1("Listener1");
    Listener listener2("Listener2");
    Listener listener3("Listener2");

    event1.addListener(listener1);
    event1.addListener(listener2);
    event2.addListener(listener2);
    event2.addListener(listener3);

    event1.send("first");
    event1.send("second");
}

int main()
{
    destructEventTest();
    test();
    return 0;
}