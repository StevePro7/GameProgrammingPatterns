    #ifndef cpp_update_method02_h
    #define cpp_update_method02_h

    namespace KeepInMind
    {
       struct Entity
       {
           void setPosition(int x, int y);
           void shootLightning();
           void update();
       };

       static const int MAX_ENTITIES = 10;

       void refreshGame();

       void skipAdded();

       void skipRemoved();
    }

    #endif//cpp_update_method02_h