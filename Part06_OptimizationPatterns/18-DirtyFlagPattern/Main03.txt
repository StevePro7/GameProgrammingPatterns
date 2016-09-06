#include "DirtyFlag03.h"

using namespace Dirty;

template<class T>
void use(const T& obj)
{
}

int main()
{
    GraphNode* graph = new GraphNode(NULL);
    graph->render(Transform::origin(), true);
    delete graph;
    return 0;
}