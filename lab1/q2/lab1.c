#include <stdio.h>
#include "tpl_os.h"

FUNC(int, OS_APPL_CODE) main(void)
{
    StartOS(OSDEFAULTAPPMODE);
    return 0;
}

TASK(task1)
{
	printf("Hello world\r\n");
    ActivateTask(task2);
    ChainTask(task3);
    printf("Is it printing ?\r\n");
}

TASK(task2)
{
    printf("== Task 2 ==\r\n");
    TerminateTask();
}

TASK(task3)
{
    printf("== Task 3 ==\r\n");
    TerminateTask();
}
