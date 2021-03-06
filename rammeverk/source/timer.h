/**
* @file
* @brief Library of functions used in time dependent operations
*/


#include <stdbool.h>
#include <time.h>

/**
 * @brief sets m_modul_timer to current time.
*/
void timer_start_timer();

/**
 * @brief Compares the difference between m_modul_timer and current time to TIMER_THRESHOLD.
 * @return True if difference is larger than TIMER_THRESHOLD, false if not.
*/
bool timer_check_timer();