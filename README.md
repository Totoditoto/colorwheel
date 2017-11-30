# colorwheel
Colorwheel provides easy-to-use colored print and trace macros for debuging your C or C++ program.

To install directly to your include path, run the following command : 

```bash
sudo wget -O /usr/include/colorwheel.h https://raw.githubusercontent.com/Totoditoto/colorwheel/master/colorwheel.h
```

Then include to your project using :

```c
#include <colorwheel.h>
```

### Exemples

Here are the ready-to-use macros :

```c
/* Predefined printf styled messages */
CW_PRINT_NORMAL(message, ...)
CW_PRINT_ALARM(message, ...)
CW_PRINT_CRITICAL(message, ...)
CW_PRINT_FAULT(message, ...)
CW_PRINT_VALID(message, ...)
CW_PRINT_INFO(message, ...)

/* Predefined trace styled messages (indicates file, function and line) */
CW_TRACE_NORMAL(message, ...)
CW_TRACE_ALARM(message, ...)
CW_TRACE_CRITICAL(message, ...)
CW_TRACE_FAULT(message, ...)
CW_TRACE_VALID(message, ...)
CW_TRACE_INFO(message, ...)
```
