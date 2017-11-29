
/**
* Colorwheel is an easy coloring print tool using AINSI escape codes
*
* This work is licensed under a Creative Commons
* Attribution-NonCommercial-NoDerivatives 4.0 International License.
*
* @author : Timothee Pons
* @version : 1.0
*
*/

#ifndef H_COLORWHEEL
#define H_COLORWHEEL

#include <unistd.h>
#include <stdio.h>

#define CW_TRACE(hd, ...)                                      \
    do                                                         \
    {                                                          \
        fprintf(stderr, "%s:%d/%s(): " hd, __FILE__, __LINE__, \
                __func__, ##__VA_ARGS__);                      \
        fflush(stderr);                                        \
    } while (0)

#define CW_CMD(color_code) "\033[1;" #color_code "m"

/* Style */
#define CW_BRIGHT CW_CMD(1)
#define CW_DIM CW_CMD(2)

/* Foreground colors */
#define CW_RESET CW_CMD(0)
#define CW_BLACK CW_CMD(30)
#define CW_RED CW_CMD(31)
#define CW_GREEN CW_CMD(32)
#define CW_YELLOW CW_CMD(33)
#define CW_BLUE CW_CMD(34)
#define CW_PURPLE CW_CMD(35)
#define CW_CYAN CW_CMD(36)
#define CW_WHITE CW_CMD(37)

/* Special commands */
#define CW_ITALIC CW_CMD(03)
#define CW_UNDERLINE CW_CMD(04)

/* Background colors */
#define CW_BG_BLACK CW_CMD(40)
#define CW_BG_RED CW_CMD(41)
#define CW_BG_GREEN CW_CMD(42)
#define CW_BG_YELLOW CW_CMD(43)
#define CW_BG_BLUE CW_CMD(44)
#define CW_BG_PURPLE CW_CMD(45)
#define CW_BG_CYAN CW_CMD(46)
#define CW_BG_WHITE CW_CMD(47)

/* Predefined message styles */

// Normal colored text
#define CW_NORMAL(msg, ...) CW_RESET " " msg " " CW_RESET "\n"

// White text over red background for extreme warning information
#define CW_ALARM(msg, ...) CW_BRIGHT CW_WHITE CW_BG_RED " " msg " " CW_RESET "\n"

// Red text over normal background for critical fault information
#define CW_CRITICAL(msg, ...) CW_BRIGHT CW_RED " " msg " " CW_RESET "\n"

// Yellow text over grey background for fault information
#define CW_FAULT(msg, ...) CW_BRIGHT CW_YELLOW CW_BG_BLACK " " msg " " CW_RESET "\n"

// Green text over grey background for confirmation/success information
#define CW_VALID(msg, ...) CW_BRIGHT CW_GREEN CW_BG_BLACK " " msg " " CW_RESET "\n"

// Blue text over normal background for noticeable information
#define CW_INFO(msg, ...) CW_BRIGHT CW_BLUE " " msg " " CW_RESET "\n"

/* Predefined printf styled messages */
#define CW_PRINT_NORMAL(msg, ...) printf(CW_NORMAL(msg), ##__VA_ARGS__);
#define CW_PRINT_ALARM(msg, ...) printf(CW_ALARM(msg), ##__VA_ARGS__);
#define CW_PRINT_CRITICAL(msg, ...) printf(CW_CRITICAL(msg), ##__VA_ARGS__);
#define CW_PRINT_FAULT(msg, ...) printf(CW_FAULT(msg), ##__VA_ARGS__);
#define CW_PRINT_VALID(msg, ...) printf(CW_VALID(msg), ##__VA_ARGS__);
#define CW_PRINT_INFO(msg, ...) printf(CW_INFO(msg), ##__VA_ARGS__);

/* Predefined CW_ styled messages */
#define CW_TRACE_NORMAL(msg, ...) CW_TRACE(CW_NORMAL(msg), ##__VA_ARGS__);
#define CW_TRACE_ALARM(msg, ...) CW_TRACE(CW_ALARM(msg), ##__VA_ARGS__);
#define CW_TRACE_CRITICAL(msg, ...) CW_TRACE(CW_CRITICAL(msg), ##__VA_ARGS__);
#define CW_TRACE_FAULT(msg, ...) CW_TRACE(CW_FAULT(msg), ##__VA_ARGS__);
#define CW_TRACE_VALID(msg, ...) CW_TRACE(CW_VALID(msg), ##__VA_ARGS__);
#define CW_TRACE_INFO(msg, ...) CW_TRACE(CW_INFO(msg), ##__VA_ARGS__);

#endif
