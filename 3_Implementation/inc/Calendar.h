/**
 * @file Calendar.h
 * @author Tarun
 * @brief displays calendar 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __Calendar_H__
#define __Calendar_H__
/**
 * @brief Day
 * 
 * @param day 
 * @param month 
 * @param year 
 * @return int 
 */
int daynum(int day, int month, int year);
/**
 * @brief Month
 * 
 * @param monthnum 
 * @return char* 
 */
char* getmonthname(int monthnum);
/**
 * @brief Days 
 * 
 * @param monthnum 
 * @param year 
 * @return int 
 */
int numofdays(int monthnum, int year);
/**
 * @brief prints Calendar
 * 
 * @param year 
 */
void printCalendar(int year);
#endif