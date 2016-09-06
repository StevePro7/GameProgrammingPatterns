#include "ByteCode04.h"
#include <assert.h>

namespace PushPop
{
    void VM::push(int value)
    {
        // Check for stack overflow.
        assert(stackSize < MAX_STACK);
        stack[stackSize++] = value;
    }

    int VM::pop()
    {
        // Ensure the stack is not empty.
        assert(stackSize > 0);
        return stack[--stackSize];
    }

    void VM::interpret(Instruction instruction)
    {
        // Pop instructions.
        switch (instruction)
        {
        case INST_SET_HEALTH:
            {
                int amount = pop();
                int wizard = pop();
                setHealth(wizard, amount);
            }
            break;

        case INST_SET_WISDOM:
            {
                int amount = pop();
                int wizard = pop();
                setWisdom(wizard, amount);
            }
            break;

        case INST_SET_AGILITY:
            {
                int amount = pop();
                int wizard = pop();
                setAgility(wizard, amount);
            }
            break;

        case INST_PLAY_SOUND:
            {
                int soundId = pop();
                playSound(soundId);
            }
            break;

        case INST_SPAWN_PARTICLES:
            {
                int particleType = pop();
                spawnParticles(particleType);
            }
            break;
        }

        // Literals.
        char bytecode[123];
        int i = 0;

        switch (INST_LITERAL)
        {
        case INST_LITERAL:
            {
                // Read the next byte from the bytecode.
                int value = bytecode[++i];
                push(value);
            }
            break;

        case INST_GET_HEALTH:
            {
                int wizard = pop();
                int amount = getHealth(PLAYER);
                setHealth(wizard, amount);
            }
            break;

        case INST_GET_WISDOM:
            {
                int wizard = pop();
                int amount = getWisdom(PLAYER);
                setWisdom(wizard, amount);
            }
            break;

        case INST_GET_AGILITY:
            {
                int wizard = pop();
                int amount = getAgility(PLAYER);
                setAgility(wizard, amount);
            }
            break;

        case INST_ADD:
            {
                int b = pop();
                int a = pop();
                int c = a + b;
                push(c);
            }
            break;
        }
    }
}