#include "Prototype03.h"

using namespace Templates;

template<class T>
void use(const T& obj)
{
}

int main()
{
    // Use templates.
    Spawner* ghostSpawner = new SpawnerFor<Ghost>();
    use(ghostSpawner);
    delete ghostSpawner;
    return 0;
}