
#include <colorwheel.h>
#include "module.h"

static int value = 10;

static void end_of_everything(void)
{
    CW_TRACE_CRITICAL("It was way worse than expected! Computer will explode in %d s", value);
    CW_TRACE_ALARM("IT IS TOO LATE RUN AWAY");
}

void main(void)
{
    CW_TRACE_NORMAL("This is a normal information");
    CW_TRACE_INFO("This is a noticeable information");
    CW_TRACE_FAULT("Ooops something might have gone wrong");
    CW_TRACE_VALID("Finally it's okay, don't worry");
    CW_TRACE_NORMAL("Nevermind");
    end_of_everything();
}
